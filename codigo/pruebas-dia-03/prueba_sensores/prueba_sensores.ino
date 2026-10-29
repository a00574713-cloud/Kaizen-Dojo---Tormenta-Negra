/*
  Mini Sumo Dojo
  Prueba de los 5 sensores
  Tarjeta Azimov Team
*/

// Sensores de oponente JS40F
#define SENSOR_LEFT   2
#define SENSOR_MIDDLE A5
#define SENSOR_RIGHT  A4

// Sensores de linea QTR-1A
#define QTR_LEFT  A2
#define QTR_RIGHT A3

void setup() {
  Serial.begin(9600);

  pinMode(SENSOR_LEFT, INPUT);
  pinMode(SENSOR_MIDDLE, INPUT);
  pinMode(SENSOR_RIGHT, INPUT);

  Serial.println("=== PRUEBA DE SENSORES ===");
}

void loop() {

  // Lectura de sensores de oponente
  int irL = digitalRead(SENSOR_LEFT);
  int irC = digitalRead(SENSOR_MIDDLE);
  int irR = digitalRead(SENSOR_RIGHT);

  // Lectura de sensores de linea
  int qtrL = analogRead(QTR_LEFT);
  int qtrR = analogRead(QTR_RIGHT);

  Serial.print("IR Izq: ");
  Serial.print(irL);

  Serial.print(" | IR Cen: ");
  Serial.print(irC);

  Serial.print(" | IR Der: ");
  Serial.print(irR);

  Serial.print(" | QTR Izq: ");
  Serial.print(qtrL);

  Serial.print(" | QTR Der: ");
  Serial.println(qtrR);

  delay(300);
}
