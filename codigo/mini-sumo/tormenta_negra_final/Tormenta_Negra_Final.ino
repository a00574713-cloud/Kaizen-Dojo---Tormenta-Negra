/*
  TORMENTA NEGRA - MINI SUMO AUTONOMO (SIN CONTROL REMOTO)
  Version candidata para competencia: evasion + busqueda + ataque.

  IMPORTANTE:
  - Requiere tarjeta NUEVA/EN BUEN ESTADO compatible con el pinout.
  - NO conectar simultaneamente USB y bateria hasta verificar que
    la placa admite ambas fuentes y tiene seleccion/aislamiento.
  - Para subir el sketch: bateria DESCONECTADA, USB solamente.
  - Para probar los motores: USB DESCONECTADO, bateria solamente.
  - Necesita un interruptor fisico accesible para cortar alimentacion.

  Pines del robot original:
  Motor IZQ: D5 y D6        Motor DER: D10 y D11
  QTR IZQ: A2              QTR DER: A3
  JS40F IZQ: D2            JS40F CENTRO: A5        JS40F DER: A4
  El receptor del control remoto D12 NO se utiliza.
*/

// ---------------- PINES ----------------
const byte MOTOR_IZQ_1 = 5;
const byte MOTOR_IZQ_2 = 6;
const byte MOTOR_DER_1 = 10;
const byte MOTOR_DER_2 = 11;

const byte QTR_IZQ = A2;
const byte QTR_DER = A3;

const byte IR_IZQ = 2;
const byte IR_CENTRO = A5;
const byte IR_DER = A4;

// -------- CONFIGURACION / CALIBRACION --------
// Valores de la tanda E4 que funciono mejor. VERIFICAR en la tarjeta nueva.
// En los QTR usados: lectura menor = blanco.
const int UMBRAL_QTR_IZQ = 390;
const int UMBRAL_QTR_DER = 456;

// REVISAR: en tus JS40F, que nivel significa que hay rival.
// Si marca 0 al acercarle un objeto, cambiar HIGH por LOW.
const int IR_DETECTADO = HIGH;

// true = SOLO diagnostico (motores detenidos, lecturas por Serial).
// Usar con USB y SIN bateria. false = programa de combate.
const bool MODO_DIAGNOSTICO = false;

// Conservar velocidad que SI funciono durante E4.
const int V_AVANCE = 105;
const int V_ATAQUE = 105;
const int V_BUSQUEDA = 110;
const int V_RETROCESO = 145;
const int V_GIRO_BORDE = 155;

// Sentido de cada motor, segun el montaje que ya funcionaba.
const int SENTIDO_MOTOR_IZQ = 1;
const int SENTIDO_MOTOR_DER = 1;

const unsigned long ESPERA_INICIO_MS = 5000UL;
const unsigned long RETROCESO_MS = 400UL;
const unsigned long GIRO_BORDE_MS = 450UL;

// -------------- ESTADOS ----------------
enum Estado { ESPERANDO, BUSCANDO, RETROCEDIENDO, GIRANDO_BORDE };
Estado estado = ESPERANDO;

unsigned long inicioSistema = 0;
unsigned long inicioEstado = 0;
unsigned long ultimoDiagnostico = 0;
int direccionGiroBorde = 1;     // 1: derecha, -1: izquierda.
int ultimaDireccionRival = 1;  // Recordar hacia donde se detecto.

// ---------------- MOTORES ----------------
void motorIndividual(byte pinA, byte pinB, int velocidad) {
  int pwm = constrain(abs(velocidad), 0, 255);
  if (velocidad > 0) {
    analogWrite(pinA, pwm);
    analogWrite(pinB, 0);
  } else if (velocidad < 0) {
    analogWrite(pinA, 0);
    analogWrite(pinB, pwm);
  } else {
    analogWrite(pinA, 0);
    analogWrite(pinB, 0);
  }
}

void motores(int izquierda, int derecha) {
  motorIndividual(MOTOR_IZQ_1, MOTOR_IZQ_2,
                  izquierda * SENTIDO_MOTOR_IZQ);
  motorIndividual(MOTOR_DER_1, MOTOR_DER_2,
                  derecha * SENTIDO_MOTOR_DER);
}

void detener() {
  motores(0, 0);
}

void cambiarEstado(Estado nuevoEstado, unsigned long ahora) {
  estado = nuevoEstado;
  inicioEstado = ahora;
}

// Mismo promedio de 12 lecturas que funciono en E4.
int leerQTR(byte pin) {
  long suma = 0;
  for (int i = 0; i < 12; i++) {
    suma += analogRead(pin);
  }
  return (int)(suma / 12);
}

bool rivalDetectado(byte pin) {
  return digitalRead(pin) == IR_DETECTADO;
}

// ---------------- DIAGNOSTICO ----------------
void diagnostico(unsigned long ahora) {
  detener();
  if (ahora - ultimoDiagnostico < 350UL) return;
  ultimoDiagnostico = ahora;

  Serial.print("QTR I: ");
  Serial.print(leerQTR(QTR_IZQ));
  Serial.print(" | QTR D: ");
  Serial.print(leerQTR(QTR_DER));
  Serial.print(" | IR I,C,D: ");
  Serial.print(digitalRead(IR_IZQ));
  Serial.print(',');
  Serial.print(digitalRead(IR_CENTRO));
  Serial.print(',');
  Serial.println(digitalRead(IR_DER));
}

// ---------------- PROGRAMA ----------------
void setup() {
  pinMode(MOTOR_IZQ_1, OUTPUT);
  pinMode(MOTOR_IZQ_2, OUTPUT);
  pinMode(MOTOR_DER_1, OUTPUT);
  pinMode(MOTOR_DER_2, OUTPUT);
  pinMode(IR_IZQ, INPUT);
  pinMode(IR_CENTRO, INPUT);
  pinMode(IR_DER, INPUT);

  detener();
  Serial.begin(9600);
  inicioSistema = millis();
  Serial.println("TORMENTA NEGRA - SIN CONTROL REMOTO");
  if (MODO_DIAGNOSTICO) {
    Serial.println("DIAGNOSTICO: motores siempre detenidos");
  } else {
    Serial.println("ARRANQUE AUTOMATICO DESPUES DE 5 SEGUNDOS");
  }
}

void loop() {
  unsigned long ahora = millis();

  if (MODO_DIAGNOSTICO) {
    diagnostico(ahora);
    return;
  }

  // Cuenta de inicio para colocar el robot sobre el dohyo.
  if (estado == ESPERANDO) {
    detener();
    if (ahora - inicioSistema >= ESPERA_INICIO_MS) {
      cambiarEstado(BUSCANDO, ahora);
    }
    return;
  }

  // Terminar maniobra de seguridad del borde sin bloquear con delay().
  if (estado == RETROCEDIENDO) {
    motores(-V_RETROCESO, -V_RETROCESO);
    if (ahora - inicioEstado >= RETROCESO_MS) {
      cambiarEstado(GIRANDO_BORDE, ahora);
    }
    return;
  }

  if (estado == GIRANDO_BORDE) {
    if (direccionGiroBorde == 1) {
      motores(V_GIRO_BORDE, -V_GIRO_BORDE);  // Derecha
    } else {
      motores(-V_GIRO_BORDE, V_GIRO_BORDE);  // Izquierda
    }
    if (ahora - inicioEstado >= GIRO_BORDE_MS) {
      cambiarEstado(BUSCANDO, ahora);
    }
    return;
  }

  // PRIORIDAD ABSOLUTA: no salir del dohyo.
  int qIzq = leerQTR(QTR_IZQ);
  int qDer = leerQTR(QTR_DER);
  bool blancoIzq = qIzq < UMBRAL_QTR_IZQ;
  bool blancoDer = qDer < UMBRAL_QTR_DER;

  if (blancoIzq || blancoDer) {
    if (blancoIzq && blancoDer) {
      direccionGiroBorde = -ultimaDireccionRival;
    } else {
      direccionGiroBorde = blancoIzq ? 1 : -1;
    }
    // Detener avance/ataque inmediatamente e iniciar escape.
    cambiarEstado(RETROCEDIENDO, ahora);
    motores(-V_RETROCESO, -V_RETROCESO);
    return;
  }

  // Solo buscar/atacar cuando los dos QTR ven superficie negra.
  bool izquierda = rivalDetectado(IR_IZQ);
  bool centro = rivalDetectado(IR_CENTRO);
  bool derecha = rivalDetectado(IR_DER);

  if (centro) {
    // Enfocado al rival: avanzar sin superar la velocidad ya validada.
    motores(V_ATAQUE, V_ATAQUE);
  } else if (izquierda && !derecha) {
    ultimaDireccionRival = -1;
    motores(-V_BUSQUEDA, V_BUSQUEDA); // Girar izquierda.
  } else if (derecha && !izquierda) {
    ultimaDireccionRival = 1;
    motores(V_BUSQUEDA, -V_BUSQUEDA); // Girar derecha.
  } else {
    // Sin deteccion clara: buscar girando sobre su propio eje.
    if (ultimaDireccionRival == 1) {
      motores(V_BUSQUEDA, -V_BUSQUEDA);
    } else {
      motores(-V_BUSQUEDA, V_BUSQUEDA);
    }
  }
}
