/*
  TORMENTA NEGRA / E5 — DIAGNOSTICO SEGURO DE MICROSTART
  NO HACE GIRAR LOS MOTORES. NO CARGAR COMO CODIGO DE COMBATE.
  Para tarjeta Arduino compatible (LED_BUILTIN usualmente D13).

  Conexion prevista (verificar fisicamente):
  MicroStart SIGNAL -> D12
  MicroStart GND    -> GND comun
  MicroStart VCC    -> 3.3 V o 5 V, SEGUN su modulo.

  LED de la tarjeta APAGADO = D12 LOW (STOP)
  LED de la tarjeta ENCENDIDO = D12 HIGH (START)

  MicroStart oficial, botones ya programados:
     1 desbloquea: D12 deberia seguir en LOW
     2 arranca:    D12 deberia pasar a HIGH
     3 detiene:    D12 deberia volver a LOW

  Con la bateria, comprobar solo el LED de la tarjeta.
  NO conectar USB y bateria simultaneamente sin verificar
  la compatibilidad de la PCB.
*/
#include <Arduino.h>

const uint8_t PIN_SENAL = 12;
const uint8_t PIN_LED = LED_BUILTIN;

void detenerMotores() {
  // Pines registrados para Tormenta Negra; NO hay analogWrite.
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  detenerMotores();

  pinMode(PIN_SENAL, INPUT);  // No INPUT_PULLUP: false START.
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);
  Serial.begin(9600);
  Serial.println(F("DIAGNOSTICO D12 / MOTORES DESACTIVADOS"));
  Serial.println(F("LED de tarjeta encendido = D12 HIGH = START"));
  Serial.println(F("LED de tarjeta apagado = D12 LOW = STOP"));
}

void loop() {
  // Mostrar directamente la lectura electrica real.
  bool valor = digitalRead(PIN_SENAL);
  detenerMotores();
  digitalWrite(PIN_LED, valor ? HIGH : LOW);

  static int anterior = -1;
  static unsigned long ultimoReporte = 0;
  unsigned long ahora = millis();
  if ((int)valor != anterior || ahora - ultimoReporte >= 1000UL) {
    anterior = valor;
    ultimoReporte = ahora;
    Serial.print(F("D12 = "));
    Serial.println(valor ? F("HIGH 1 (START)") : F("LOW 0 (STOP)"));
  }
  delay(10);
}
