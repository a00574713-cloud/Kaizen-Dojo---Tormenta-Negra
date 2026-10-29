/*
  Mini Sumo Dojo
  Prueba individual de motores
  Tarjeta Azimov Team
*/

#define MOTOR_LEFT_1  5
#define MOTOR_LEFT_2  6

#define MOTOR_RIGHT_1 10
#define MOTOR_RIGHT_2 11

int velocidad = 160;

void detener() {
  analogWrite(MOTOR_LEFT_1, 0);
  analogWrite(MOTOR_LEFT_2, 0);
  analogWrite(MOTOR_RIGHT_1, 0);
  analogWrite(MOTOR_RIGHT_2, 0);
}

void setup() {
  Serial.begin(9600);

  pinMode(MOTOR_LEFT_1, OUTPUT);
  pinMode(MOTOR_LEFT_2, OUTPUT);
  pinMode(MOTOR_RIGHT_1, OUTPUT);
  pinMode(MOTOR_RIGHT_2, OUTPUT);

  detener();

  Serial.println("=== PRUEBA DE MOTORES ===");
  delay(3000);
}

void loop() {

  Serial.println("Motor izquierdo - sentido 1");

  analogWrite(MOTOR_LEFT_1, velocidad);
  analogWrite(MOTOR_LEFT_2, 0);

  delay(1000);
  detener();
  delay(1000);

  Serial.println("Motor izquierdo - sentido 2");

  analogWrite(MOTOR_LEFT_1, 0);
  analogWrite(MOTOR_LEFT_2, velocidad);

  delay(1000);
  detener();
  delay(1000);

  Serial.println("Motor derecho - sentido 1");

  analogWrite(MOTOR_RIGHT_1, velocidad);
  analogWrite(MOTOR_RIGHT_2, 0);

  delay(1000);
  detener();
  delay(1000);

  Serial.println("Motor derecho - sentido 2");

  analogWrite(MOTOR_RIGHT_1, 0);
  analogWrite(MOTOR_RIGHT_2, velocidad);

  delay(1000);
  detener();
  delay(3000);
}
