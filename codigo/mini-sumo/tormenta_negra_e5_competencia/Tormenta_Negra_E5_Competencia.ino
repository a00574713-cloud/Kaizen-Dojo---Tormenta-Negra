/*
 TORMENTA NEGRA | E5 - CANDIDATO DE COMPETENCIA (SIN VALIDAR EN PISTA)
 Estrategia: mando remoto START/STOP, prioridad borde, busqueda, persecucion
 y ataque progresivo. Preserva intacto el firmware E4 ya probado.

 TARJETA / CABLEADO REGISTRADO EN E4:
  Izq D5/D6, Der D10/D11, QTR Izq A2, QTR Der A3,
  JS40F Izq D2, Centro A5, Der A4, receptor/START D12.

 TIPO_CONTROL:
   1 = modulo de arranque digital tipo MicroStart: D12 LOW=STOP, HIGH=START.
       La salida digital del modulo debe estar conectada a D12.
       No funciona con un receptor IR demodulador sin circuito de arranque.
   2 = receptor IR demodulador + control NEC: instalar Arduino-IRremote
       y anotar direccion y comandos obtenidos del monitor serie.
       Usa TinyIRReceiver SIN temporizador para no alterar PWM D11.

 No usar simultaneamente USB y bateria sin confirmar compatibilidad.
 Verificar sentido de motores, umbrales QTR, polaridad JS40F y driver.
 El paro remoto no reemplaza el interruptor fisico.
*/

#include <Arduino.h>

#define TIPO_CONTROL 1
#define PIN_CONTROL 12

#if TIPO_CONTROL == 2
  #define IR_RECEIVE_PIN PIN_CONTROL
  #define NO_LED_RECEIVE_FEEDBACK_CODE
  #include <TinyIRReceiver.hpp>
  // Sustituir por valores REALES observados con este mismo control.
  // 0xFFFF para direccion y 0xFF para comandos = deshabilitado seguro.
  const uint16_t DIRECCION_NEC = 0xFFFF;
  const uint8_t COMANDO_ARRANQUE_NEC = 0xFF;
  const uint8_t COMANDO_PARO_NEC = 0xFF;
#endif

// --------- HARDWARE E4 (sin cambios) ---------
const uint8_t MOTOR_IZQ_A = 5;
const uint8_t MOTOR_IZQ_B = 6;
const uint8_t MOTOR_DER_A = 10;
const uint8_t MOTOR_DER_B = 11;
const uint8_t QTR_IZQ = A2;
const uint8_t QTR_DER = A3;
const uint8_t RIVAL_IZQ = 2;
const uint8_t RIVAL_CENTRO = A5;
const uint8_t RIVAL_DER = A4;

// E4: blanco = lectura MENOR. REVALIDAR con el montaje de E5.
const int UMBRAL_IZQ = 390;
const int UMBRAL_DER = 456;
// Verificar con lectura de JS40F (0 o 1) al acercar el rival.
const uint8_t NIVEL_RIVAL = HIGH;

const int SENTIDO_IZQ = 1;
const int SENTIDO_DER = 1;

// --------- CONFIGURACION DE PRUEBA E5 ---------
// Valores superiores a PWM 105 de E4 NO se han validado.
// NO aumentar hasta medir temperatura/corriente y comprobar driver.
const uint8_t PWM_MAX_PRUEBA = 170;
const uint8_t PWM_BUSQUEDA = 105;
const uint8_t PWM_PERSECUCION = 120;
const uint8_t PWM_CORRECCION_RAPIDA = 150;
const uint8_t PWM_CORRECCION_LENTA = 78;
const uint8_t PWM_ATAQUE_INICIAL = 125;
const uint8_t PWM_ATAQUE_EMPUJE = 165;
const uint8_t PWM_ATAQUE_SOSTENIDO = 140;
const uint8_t PWM_RETROCESO = 145;
const uint8_t PWM_GIRO_BORDE = 155;

const unsigned long RAMPA_ATAQUE_MS = 220UL;
const unsigned long EMPUJE_MAX_MS = 850UL;  // no sostener PWM alto indefinidamente
const unsigned long RETROCESO_MS = 350UL;
const unsigned long GIRO_BORDE_MS = 380UL;
const unsigned long RECUERDO_RIVAL_MS = 280UL;
const unsigned long CAMBIO_BUSQUEDA_MS = 1000UL;
const unsigned long ESTABILIDAD_START_MS = 70UL;
const unsigned long ESPERA_TRAS_START_MS = 0UL; // modulo arbitral da la orden
const bool DIAGNOSTICO_SIN_MOTORES = false; // true para ver sensores y mando

enum Estado {
  DETENIDO, ESPERA_SENAL, BUSCANDO, PERSIGUIENDO,
  ATACANDO, RETROCEDIENDO, GIRANDO
};
Estado estado = DETENIDO;

bool permisoCombate = false;
// Al recibir STOP, impedir rearmado accidental hasta reiniciar la alimentacion.
bool paroEnclavado = false;
unsigned long inicioOrden = 0;
unsigned long inicioEstado = 0;
unsigned long ultimoRival = 0;
unsigned long ultimoReporte = 0;
unsigned long inicioBarrido = 0;
int ultimaDireccion = 1;        // +1 rival derecha, -1 rival izquierda
int giroDeEscape = 1;          // +1 derecha, -1 izquierda

#if TIPO_CONTROL == 1
  // No arrancar si D12 ya estaba alto al energizar. Exigir LOW, luego HIGH.
  bool nivelBajoConfirmado = false;
  unsigned long desdeBajo = 0;
  unsigned long desdeAlto = 0;
#endif

uint8_t pwmSeguro(int valor) {
  return (uint8_t) constrain(abs(valor), 0, (int)PWM_MAX_PRUEBA);
}

void motor(uint8_t a, uint8_t b, int velocidad) {
  if (velocidad > 0) {
    analogWrite(a, pwmSeguro(velocidad));
    analogWrite(b, 0);
  } else if (velocidad < 0) {
    analogWrite(a, 0);
    analogWrite(b, pwmSeguro(velocidad));
  } else {
    analogWrite(a, 0);
    analogWrite(b, 0);
  }
}

void mover(int izquierda, int derecha) {
  motor(MOTOR_IZQ_A, MOTOR_IZQ_B, izquierda * SENTIDO_IZQ);
  motor(MOTOR_DER_A, MOTOR_DER_B, derecha * SENTIDO_DER);
}

void pararMotores() { mover(0, 0); }

void ponerEstado(Estado nuevo, unsigned long ahora) {
  if (estado != nuevo) {
    estado = nuevo;
    inicioEstado = ahora;
  }
}

void detenerCombate(unsigned long ahora) {
  (void)ahora;
  permisoCombate = false;
  paroEnclavado = true;
  estado = DETENIDO;
  pararMotores();
}

void iniciarCombate(unsigned long ahora) {
  if (paroEnclavado) return;
  permisoCombate = true;
  inicioOrden = ahora;
  inicioBarrido = ahora;
  ultimoRival = 0;
  ultimaDireccion = 1;
  ponerEstado(ESPERA_SENAL, ahora);
  pararMotores();
}

// El modulo arbitral entrega una salida digital: LOW=paro; HIGH=inicio.
#if TIPO_CONTROL == 1
void revisarControl(unsigned long ahora) {
  // MicroStart puede hacer parpadear LEDs en STOP; jamas reiniciar motores.
  if (paroEnclavado) return;
  bool alto = (digitalRead(PIN_CONTROL) == HIGH);
  if (!alto) {
    desdeAlto = 0;
    if (desdeBajo == 0) desdeBajo = ahora;
    if (ahora - desdeBajo >= ESTABILIDAD_START_MS) {
      nivelBajoConfirmado = true;
    }
    // Parar inmediatamente ante LOW, incluso en una maniobra de borde.
    if (permisoCombate) detenerCombate(ahora);
    return;
  }

  desdeBajo = 0;
  if (!nivelBajoConfirmado) return;
  if (desdeAlto == 0) desdeAlto = ahora;
  if (!permisoCombate &&
      ahora - desdeAlto >= ESTABILIDAD_START_MS) {
    iniciarCombate(ahora);
  }
}
#elif TIPO_CONTROL == 2
void revisarControl(unsigned long ahora) {
  if (paroEnclavado) return;
  if (!TinyIRReceiverDecode()) return;
  uint16_t direccion = TinyIRReceiverData.Address;
  uint8_t comando = TinyIRReceiverData.Command;
  uint8_t flags = TinyIRReceiverData.Flags;
  // Ignorar repeticiones y tramas dañadas.
  if (flags & (IRDATA_FLAGS_IS_REPEAT | IRDATA_FLAGS_PARITY_FAILED)) return;
  Serial.print(F("REMOTO NEC: direccion 0x"));
  Serial.print(direccion, HEX);
  Serial.print(F(" comando 0x"));
  Serial.println(comando, HEX);

  // No habilitar motores hasta configurar ambos botones y direccion.
  if (DIRECCION_NEC == 0xFFFF || COMANDO_ARRANQUE_NEC == 0xFF ||
      COMANDO_PARO_NEC == 0xFF || COMANDO_ARRANQUE_NEC == COMANDO_PARO_NEC) return;
  if (direccion != DIRECCION_NEC) return;

  if (comando == COMANDO_PARO_NEC) detenerCombate(ahora);
  else if (comando == COMANDO_ARRANQUE_NEC && !permisoCombate)
    iniciarCombate(ahora);
}
#else
  #error "TIPO_CONTROL debe ser 1 (modulo) o 2 (NEC)"
#endif

int leerQtrPromedio(uint8_t pin) {
  long suma = 0;
  for (uint8_t i = 0; i < 6; ++i) suma += analogRead(pin);
  return (int)(suma / 6);
}

bool veRival(uint8_t pin) { return digitalRead(pin) == NIVEL_RIVAL; }

void diagnosticar(unsigned long ahora) {
  pararMotores();
  if (ahora - ultimoReporte < 300UL) return;
  ultimoReporte = ahora;
  Serial.print(F("D12=")); Serial.print(digitalRead(PIN_CONTROL));
  Serial.print(F(" START=")); Serial.print(permisoCombate);
  Serial.print(F(" QTR="));
  Serial.print(leerQtrPromedio(QTR_IZQ)); Serial.print('/');
  Serial.print(leerQtrPromedio(QTR_DER));
  Serial.print(F(" JS40F="));
  Serial.print(digitalRead(RIVAL_IZQ)); Serial.print('/');
  Serial.print(digitalRead(RIVAL_CENTRO)); Serial.print('/');
  Serial.println(digitalRead(RIVAL_DER));
}

void activarBorde(bool blancoIzq, bool blancoDer, unsigned long ahora) {
  if (blancoIzq && blancoDer) giroDeEscape = -ultimaDireccion;
  else giroDeEscape = blancoIzq ? 1 : -1;
  ponerEstado(RETROCEDIENDO, ahora);
  mover(-PWM_RETROCESO, -PWM_RETROCESO);
}

// START/STOP prevalecen sobre cualquier otra accion.
// La defensa del borde prevalece sobre ataque y busqueda.
void setup() {
  pinMode(MOTOR_IZQ_A, OUTPUT); pinMode(MOTOR_IZQ_B, OUTPUT);
  pinMode(MOTOR_DER_A, OUTPUT); pinMode(MOTOR_DER_B, OUTPUT);
  pinMode(RIVAL_IZQ, INPUT);
  pinMode(RIVAL_CENTRO, INPUT);
  pinMode(RIVAL_DER, INPUT);
  pararMotores();
  Serial.begin(9600);
#if TIPO_CONTROL == 1
  // IMPORTANTE: D12 necesita salida digital activa o resistencia pulldown 10k.
  pinMode(PIN_CONTROL, INPUT);
  Serial.println(F("E5: modulo de arranque D12 LOW=STOP HIGH=START"));
#elif TIPO_CONTROL == 2
  bool ok = initPCIInterruptForTinyIRReceiver();
  if (!ok) Serial.println(F("ERROR: IR D12 sin interrupcion"));
  Serial.println(F("E5: TinyIRReceiver NEC D12, configurar botones"));
#endif
  Serial.println(F("TORMENTA NEGRA: ESPERANDO CONTROL REMOTO"));
  Serial.println(F("BOTON 1=DESBLOQUEO, 2=START, 3=STOP. REINICIA AL TERMINAR"));
}

void loop() {
  unsigned long ahora = millis();
  revisarControl(ahora);

  if (DIAGNOSTICO_SIN_MOTORES) {
    diagnosticar(ahora);
    return;
  }

  if (!permisoCombate || estado == DETENIDO) {
    pararMotores();
    return;
  }

  if (estado == ESPERA_SENAL) {
    pararMotores();
    if (ahora - inicioOrden >= ESPERA_TRAS_START_MS)
      ponerEstado(BUSCANDO, ahora);
    return;
  }

  // Una vez iniciado retroceso por borde, completar escape.
  // No atacar durante la maniobra.
  if (estado == RETROCEDIENDO) {
    mover(-PWM_RETROCESO, -PWM_RETROCESO);
    if (ahora - inicioEstado >= RETROCESO_MS) {
      ponerEstado(GIRANDO, ahora);
    }
    return;
  }
  if (estado == GIRANDO) {
    if (giroDeEscape == 1) mover(PWM_GIRO_BORDE, -PWM_GIRO_BORDE);
    else mover(-PWM_GIRO_BORDE, PWM_GIRO_BORDE);
    if (ahora - inicioEstado >= GIRO_BORDE_MS) {
      ponerEstado(BUSCANDO, ahora);
      inicioBarrido = ahora;
    }
    return;
  }

  // ANTI-SALIDA: leer bordes en cada ciclo, tambien mientras atacamos.
  const bool blancoIzq = leerQtrPromedio(QTR_IZQ) < UMBRAL_IZQ;
  const bool blancoDer = leerQtrPromedio(QTR_DER) < UMBRAL_DER;
  if (blancoIzq || blancoDer) {
    activarBorde(blancoIzq, blancoDer, ahora);
    return;
  }

  const bool izq = veRival(RIVAL_IZQ);
  const bool centro = veRival(RIVAL_CENTRO);
  const bool der = veRival(RIVAL_DER);

  if (centro || (izq && der)) {
    // Alinear frontalmente y aumentar el PWM por etapas.
    ponerEstado(ATACANDO, ahora);
    ultimoRival = ahora;
    unsigned long tiempoEnAtaque = ahora - inicioEstado;
    uint8_t pwm;
    if (tiempoEnAtaque < RAMPA_ATAQUE_MS) pwm = PWM_ATAQUE_INICIAL;
    else if (tiempoEnAtaque < EMPUJE_MAX_MS) pwm = PWM_ATAQUE_EMPUJE;
    else pwm = PWM_ATAQUE_SOSTENIDO;
    mover(pwm, pwm);
    return;
  }

  if (izq) {
    ultimaDireccion = -1;
    ultimoRival = ahora;
    ponerEstado(PERSIGUIENDO, ahora);
    // Curva hacia izquierda (no giro ciego sobre el eje).
    mover(PWM_CORRECCION_LENTA, PWM_CORRECCION_RAPIDA);
    return;
  }

  if (der) {
    ultimaDireccion = 1;
    ultimoRival = ahora;
    ponerEstado(PERSIGUIENDO, ahora);
    mover(PWM_CORRECCION_RAPIDA, PWM_CORRECCION_LENTA);
    return;
  }

  // Breve persistencia para reacquirir objetivo cuando un sensor lo pierde.
  if (ultimoRival != 0 && ahora - ultimoRival < RECUERDO_RIVAL_MS) {
    ponerEstado(PERSIGUIENDO, ahora);
    if (ultimaDireccion < 0)
      mover(PWM_CORRECCION_LENTA, PWM_PERSECUCION);
    else
      mover(PWM_PERSECUCION, PWM_CORRECCION_LENTA);
    return;
  }

  // Barrido: explorar ambos lados en vez de girar siempre en el mismo.
  if (estado != BUSCANDO) {
    ponerEstado(BUSCANDO, ahora);
    inicioBarrido = ahora;
  }
  if (ahora - inicioBarrido >= CAMBIO_BUSQUEDA_MS) {
    ultimaDireccion = -ultimaDireccion;
    inicioBarrido = ahora;
  }
  if (ultimaDireccion > 0) mover(PWM_BUSQUEDA, -PWM_BUSQUEDA);
  else mover(-PWM_BUSQUEDA, PWM_BUSQUEDA);
}
