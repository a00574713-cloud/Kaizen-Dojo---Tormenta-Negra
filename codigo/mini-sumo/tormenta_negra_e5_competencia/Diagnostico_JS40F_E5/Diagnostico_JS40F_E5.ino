/*
  TORMENTA NEGRA - E5
  DIAGNOSTICO DE LOS TRES SENSORES DE OPONENTE JS40F

  Este sketch NO mueve motores y NO activa combate.
  Pines REGISTRADOS en E3/E4:
  JS40F IZQUIERDO D2, CENTRO A5, DERECHO A4.
  Alimentacion JS40F: entre 3.3V y 5V, NUNCA directo a 7.4V.
  JS40F (segun fabricante): HIGH=detecta, LOW=no detecta.

  Prueba A (USB solamente, sin bateria):
    Monitor Serie 9600; lectura 0/1 de cada sensor.
    Solo es valida si los sensores estan alimentados por USB.

  Prueba B (bateria solamente, sin USB):
    El LED_BUILTIN (normalmente D13, NO los LED JS40F)
    hace 1 destello por sensor IZQ detectado,
    2 destellos por CENTRAL detectado,
    3 destellos por DER detectado.
    Probar UN SENSOR POR VEZ para identificar claramente cada uno.
    Si ninguno detecta, el LED queda apagado.
    Comprobar que la placa tiene LED accesible en LED_BUILTIN.

  Si el LED fisico del JS40F se enciende al detectar pero Arduino
  muestra 0 siempre: revisar señal, GND, pines y alimentación.
  Si el LED del JS40F no se enciende, revisar orientacion,
  obstaculos frente al sensor y alimentacion.
*/

#include <Arduino.h>

const byte PIN_IZQ = 2;
const byte PIN_CENTRO = A5;
const byte PIN_DER = A4;
const byte PIN_LED = LED_BUILTIN;

void motoresApagados() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void destellos(byte cantidad) {
  for (byte i = 0; i < cantidad; ++i) {
    digitalWrite(PIN_LED, HIGH);
    delay(110);
    digitalWrite(PIN_LED, LOW);
    delay(160);
  }
  delay(250);
}

void setup() {
  // Poner salidas a LOW antes de configurarlas como OUTPUT.
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  motoresApagados();

  pinMode(PIN_IZQ, INPUT);
  pinMode(PIN_CENTRO, INPUT);
  pinMode(PIN_DER, INPUT);
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);

  Serial.begin(9600);
  Serial.println(F("JS40F | IZQ D2 / CENTRO A5 / DER A4"));
  Serial.println(F("0 = NO DETECTA | 1 = DETECTA"));
  Serial.println(F("Motores DESACTIVADOS"));
}

void loop() {
  motoresApagados();

  int izq = digitalRead(PIN_IZQ);
  int centro = digitalRead(PIN_CENTRO);
  int der = digitalRead(PIN_DER);

  Serial.print(F("IZQ=")); Serial.print(izq);
  Serial.print(F(" | CENTRO=")); Serial.print(centro);
  Serial.print(F(" | DER=")); Serial.println(der);

  // LED integrado para comprobacion sin USB.
  // Destellos separados por una pausa; acercar a un solo sensor.
  if (izq == HIGH) destellos(1);
  if (centro == HIGH) destellos(2);
  if (der == HIGH) destellos(3);
  if (izq == LOW && centro == LOW && der == LOW) {
    digitalWrite(PIN_LED, LOW);
    delay(250);
  }
  delay(150);
}
