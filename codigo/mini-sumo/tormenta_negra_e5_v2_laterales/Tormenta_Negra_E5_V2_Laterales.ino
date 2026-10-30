/*
  TORMENTA NEGRA — E5 V2 (PRUEBA DE PERSECUCION LATERAL)
  NO VALIDADO AUN CON RIVALES. Conserva las conexiones E4.
  - JS40F lateral: giro sobre el eje hacia el oponente.
  - JS40F central: ataque de frente.
  - Borde QTR: prioridad sobre todo ataque.
  - Evasion: puede salir del giro antes si ambos QTR ven negro
    y un JS40F detecta rival; nunca acorta el retroceso.
  - Control MicroStart D12: HIGH=START, LOW=STOP enclavado.
  - Diagnostico integrado con motores detenidos via USB solamente.

  IMPORTANTE:
  El equipo reporto que en ciertas pruebas el boton 1 iniciaba
  y el 2 detenia. Eso NO se corrige invirtiendo HIGH/LOW.
  Validar que STOP es fiable ANTES de poner el robot en el dohyō.
  No conectar USB y bateria simultaneamente sin confirmar compatibilidad.
  Se requiere interruptor fisico de corte de alimentacion.
*/

#include <Arduino.h>

const uint8_t MOTOR_IZQ_A = 5;
const uint8_t MOTOR_IZQ_B = 6;
const uint8_t MOTOR_DER_A = 10;
const uint8_t MOTOR_DER_B = 11;

const uint8_t QTR_IZQ = A2;
const uint8_t QTR_DER = A3;
const uint8_t JS40F_IZQ = 2;
const uint8_t JS40F_CENTRO = A5;
const uint8_t JS40F_DER = A4;
const uint8_t START_D12 = 12;

const int UMBRAL_QTR_IZQ = 390;
const int UMBRAL_QTR_DER = 456;
// JS40F: HIGH cuando detecta el objeto.
const uint8_t SENAL_RIVAL = HIGH;
const int SENTIDO_IZQ = 1;
const int SENTIDO_DER = 1;

// Cambiar a true SOLO para diagnostico; no movera motores.
const bool MODO_DIAGNOSTICO = false;

// Primero validar los ajustes con PWM de E4 (105).
// Si el driver y la bateria lo permiten, probar ataque 125, 145, 165.
const int PWM_MAXIMO = 170;
const int PWM_BUSQUEDA = 105;
const int PWM_GIRO_AL_OBJETIVO = 125;
const int PWM_ATAQUE_INICIO = 125;
const int PWM_ATAQUE_EMPUJE = 165;
const int PWM_ATAQUE_SOSTENIDO = 140;
const int PWM_RETROCESO = 145;
const int PWM_GIRO_BORDE = 155;

const unsigned long TIEMPO_RAMPA_MS = 220UL;
const unsigned long TIEMPO_EMPUJE_MS = 850UL;
const unsigned long TIEMPO_RETROCESO_MS = 350UL; // conservar escala E4
const unsigned long GIRO_MINIMO_BORDE_MS = 110UL;
const unsigned long GIRO_MAXIMO_BORDE_MS = 380UL;
const unsigned long MEMORIA_LATERAL_MS = 170UL;
const unsigned long BUSQUEDA_CAMBIO_MS = 950UL;
// Senal estable requerida. Antes: 350 ms, ahora 120 ms.
// No quitar la confirmacion de LOW inicial ni la prioridad del STOP.
const unsigned long DEBOUNCE_START_MS = 120UL;

enum Estado { PARADO, BUSCANDO, GIRANDO_IZQ, GIRANDO_DER,
              ATACANDO, BORDE_RETROCEDER, BORDE_GIRAR };
Estado estado = PARADO;

bool combateActivo = false;
bool paroEnclavado = false;
bool bajoVisto = false;
unsigned long desdeBajo = 0;
unsigned long desdeAlto = 0;
unsigned long comienzoEstado = 0;
unsigned long vistoRivalEn = 0;
unsigned long comienzoBarrido = 0;
unsigned long ultimoReporte = 0;
int ultimoLado = 1;  // +1 derecha, -1 izquierda
int ladoEscape = 1;

int leerQTR(uint8_t pin) {
  long suma = 0;
  for (uint8_t i = 0; i < 6; i++) suma += analogRead(pin);
  return (int)(suma / 6);
}

void motor(uint8_t pin1, uint8_t pin2, int velocidad) {
  const int pwm = constrain(abs(velocidad), 0, PWM_MAXIMO);
  if (velocidad > 0) {
    analogWrite(pin1, pwm);
    analogWrite(pin2, 0);
  } else if (velocidad < 0) {
    analogWrite(pin1, 0);
    analogWrite(pin2, pwm);
  } else {
    analogWrite(pin1, 0);
    analogWrite(pin2, 0);
  }
}

void mover(int izquierda, int derecha) {
  motor(MOTOR_IZQ_A, MOTOR_IZQ_B, izquierda * SENTIDO_IZQ);
  motor(MOTOR_DER_A, MOTOR_DER_B, derecha * SENTIDO_DER);
}

void parar() { mover(0, 0); }

void cambiarEstado(Estado nuevo, unsigned long ahora) {
  if (estado != nuevo) {
    estado = nuevo;
    comienzoEstado = ahora;
  }
}

void detenerPorControl() {
  Serial.println(F("MICROSTART: STOP recibido en D12, PARO ENCLAVADO"));
  combateActivo = false;
  paroEnclavado = true;
  estado = PARADO;
  parar();
}

void revisarControl(unsigned long ahora) {
  if (paroEnclavado) return;
  bool alto = digitalRead(START_D12) == HIGH;
  if (!alto) {
    desdeAlto = 0;
    if (!bajoVisto) {
      if (desdeBajo == 0) desdeBajo = ahora;
      if (ahora - desdeBajo >= DEBOUNCE_START_MS) bajoVisto = true;
    }
    if (combateActivo) detenerPorControl();
    return;
  }

  desdeBajo = 0;
  if (!bajoVisto) return;
  if (!combateActivo) {
    if (desdeAlto == 0) desdeAlto = ahora;
    if (ahora - desdeAlto >= DEBOUNCE_START_MS) {
      Serial.println(F("MICROSTART: START confirmado en D12"));
      combateActivo = true;
      vistoRivalEn = 0;
      ultimoLado = 1;
      comienzoBarrido = ahora;
      cambiarEstado(BUSCANDO, ahora);
    }
  }
}

void diagnostico(unsigned long ahora) {
  parar();
  if (ahora - ultimoReporte < 250UL) return;
  ultimoReporte = ahora;
  int qI = leerQTR(QTR_IZQ);
  int qD = leerQTR(QTR_DER);
  Serial.print(F("D12=")); Serial.print(digitalRead(START_D12));
  Serial.print(F(" QTR_I=")); Serial.print(qI);
  Serial.print(F(" QTR_D=")); Serial.print(qD);
  Serial.print(F(" BORDE_I=")); Serial.print(qI < UMBRAL_QTR_IZQ);
  Serial.print(F(" BORDE_D=")); Serial.print(qD < UMBRAL_QTR_DER);
  Serial.print(F(" RIVAL_I=")); Serial.print(digitalRead(JS40F_IZQ));
  Serial.print(F(" RIVAL_C=")); Serial.print(digitalRead(JS40F_CENTRO));
  Serial.print(F(" RIVAL_D=")); Serial.println(digitalRead(JS40F_DER));
}

void setup() {
  // Niveles bajos antes de cambiar a salidas.
  digitalWrite(MOTOR_IZQ_A, LOW);
  digitalWrite(MOTOR_IZQ_B, LOW);
  digitalWrite(MOTOR_DER_A, LOW);
  digitalWrite(MOTOR_DER_B, LOW);
  pinMode(MOTOR_IZQ_A, OUTPUT);
  pinMode(MOTOR_IZQ_B, OUTPUT);
  pinMode(MOTOR_DER_A, OUTPUT);
  pinMode(MOTOR_DER_B, OUTPUT);
  parar();

  pinMode(JS40F_IZQ, INPUT);
  pinMode(JS40F_CENTRO, INPUT);
  pinMode(JS40F_DER, INPUT);
  pinMode(START_D12, INPUT); // Modulo digital activo, nunca INPUT_PULLUP
  // Indicador de la SENAL REAL D12, util cuando se usa bateria sin USB.
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(9600);
  Serial.println(F("TORMENTA NEGRA E5 V2 - LATERALES"));
  if (MODO_DIAGNOSTICO) {
    Serial.println(F("DIAGNOSTICO: motores detenidos"));
  } else {
    Serial.println(F("ESPERANDO START REMOTO EN D12"));
    Serial.println(F("LED DE LA TARJETA (D13): OFF=0 STOP, ON=1 START"));
  }
}

void loop() {
  unsigned long ahora = millis();
  // LED integrado de Arduino: apagado = D12 LOW, encendido = D12 HIGH.
  // No son los LEDs rojo/azul del receptor MicroStart.
  digitalWrite(LED_BUILTIN, digitalRead(START_D12));
  revisarControl(ahora);
  if (MODO_DIAGNOSTICO) {
    diagnostico(ahora);
    return;
  }
  if (!combateActivo || estado == PARADO) {
    parar();
    return;
  }

  // Consultar lineas y oponentes incluso durante la evasion del borde.
  bool blancoIzq = leerQTR(QTR_IZQ) < UMBRAL_QTR_IZQ;
  bool blancoDer = leerQTR(QTR_DER) < UMBRAL_QTR_DER;
  bool veIzq = digitalRead(JS40F_IZQ) == SENAL_RIVAL;
  bool veCentro = digitalRead(JS40F_CENTRO) == SENAL_RIVAL;
  bool veDer = digitalRead(JS40F_DER) == SENAL_RIVAL;
  bool veAlguno = veIzq || veCentro || veDer;

  if (estado == BORDE_RETROCEDER) {
    mover(-PWM_RETROCESO, -PWM_RETROCESO);
    if (ahora - comienzoEstado >= TIEMPO_RETROCESO_MS) {
      cambiarEstado(BORDE_GIRAR, ahora);
    }
    return;
  }
  if (estado == BORDE_GIRAR) {
    unsigned long t = ahora - comienzoEstado;
    // Dejar de girar antes si ya hay suelo negro y rival visible.
    // NO interrumpir giro mientras un QTR vea blanco.
    if (t < GIRO_MAXIMO_BORDE_MS &&
        (t < GIRO_MINIMO_BORDE_MS || blancoIzq || blancoDer || !veAlguno)) {
      if (ladoEscape > 0) mover(PWM_GIRO_BORDE, -PWM_GIRO_BORDE);
      else mover(-PWM_GIRO_BORDE, PWM_GIRO_BORDE);
      return;
    }
    cambiarEstado(BUSCANDO, ahora);
    comienzoBarrido = ahora;
    // Volver a evaluar el borde antes de permitir un ataque.
  }

  // Si se sigue viendo blanco, retroceder. No atacar sobre el borde.
  if (blancoIzq || blancoDer) {
    if (blancoIzq && blancoDer) ladoEscape = -ultimoLado;
    else ladoEscape = blancoIzq ? 1 : -1;
    cambiarEstado(BORDE_RETROCEDER, ahora);
    mover(-PWM_RETROCESO, -PWM_RETROCESO);
    return;
  }

  // Rival en frente -> atacar recto. Ambos laterales -> presumir
  // objetivo delante (comprobar orientaciones reales).
  if (veCentro || (veIzq && veDer)) {
    cambiarEstado(ATACANDO, ahora);
    vistoRivalEn = ahora;
    unsigned long t = ahora - comienzoEstado;
    int pwm;
    if (t < TIEMPO_RAMPA_MS) pwm = PWM_ATAQUE_INICIO;
    else if (t < TIEMPO_EMPUJE_MS) pwm = PWM_ATAQUE_EMPUJE;
    else pwm = PWM_ATAQUE_SOSTENIDO;
    mover(pwm, pwm);
    return;
  }

  // ANTES: curva 78/150, potencialmente muy lenta para encarar.
  // AHORA: rotacion inmediata sobre eje, con reevaluacion continua.
  if (veIzq) {
    ultimoLado = -1;
    vistoRivalEn = ahora;
    cambiarEstado(GIRANDO_IZQ, ahora);
    mover(-PWM_GIRO_AL_OBJETIVO, PWM_GIRO_AL_OBJETIVO);
    return;
  }
  if (veDer) {
    ultimoLado = 1;
    vistoRivalEn = ahora;
    cambiarEstado(GIRANDO_DER, ahora);
    mover(PWM_GIRO_AL_OBJETIVO, -PWM_GIRO_AL_OBJETIVO);
    return;
  }

  // Si la deteccion lateral parpadea, conservar brevemente el giro.
  if (vistoRivalEn != 0 && ahora - vistoRivalEn < MEMORIA_LATERAL_MS) {
    if (ultimoLado < 0) mover(-PWM_GIRO_AL_OBJETIVO, PWM_GIRO_AL_OBJETIVO);
    else mover(PWM_GIRO_AL_OBJETIVO, -PWM_GIRO_AL_OBJETIVO);
    return;
  }

  if (estado != BUSCANDO) {
    cambiarEstado(BUSCANDO, ahora);
    comienzoBarrido = ahora;
  }
  if (ahora - comienzoBarrido >= BUSQUEDA_CAMBIO_MS) {
    ultimoLado = -ultimoLado;
    comienzoBarrido = ahora;
  }
  // Barrer ambos lados a velocidad moderada.
  if (ultimoLado > 0) mover(PWM_BUSQUEDA, -PWM_BUSQUEDA);
  else mover(-PWM_BUSQUEDA, PWM_BUSQUEDA);
}
