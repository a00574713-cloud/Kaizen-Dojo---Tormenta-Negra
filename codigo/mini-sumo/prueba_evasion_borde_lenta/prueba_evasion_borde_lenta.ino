/*
  TORMENTA NEGRA - E4, VERSION DE AVANCE LENTO
  Prueba integrada de motores y sensores
  Primero calibrar negro/blanco desde el Monitor Serie.
  Inicio: 's' | Paro: 'p'
  Control remoto IR: no incluido en este programa de prueba.
*/

#define MOTOR_LEFT_1   5
#define MOTOR_LEFT_2   6
#define MOTOR_RIGHT_1 10
#define MOTOR_RIGHT_2 11

#define QTR_LEFT   A2
#define QTR_RIGHT  A3

#define IR_LEFT     2
#define IR_MIDDLE  A5
#define IR_RIGHT   A4

// Si una rueda gira hacia atras al pedir avance, cambia 1 por -1.
const int SENTIDO_MOTOR_IZQ = 1;
const int SENTIDO_MOTOR_DER = 1;

const int V_AVANCE   = 105;
const int V_RETROCESO = 145;
const int V_GIRO      = 155;

const unsigned long TIEMPO_RETROCESO = 400; // ms
const unsigned long TIEMPO_GIRO      = 450; // ms
const unsigned long MAX_TIEMPO_PRUEBA = 15000; // 15 s

enum Estado { PARADO, AVANZANDO, RETROCEDIENDO, GIRANDO };
Estado estado = PARADO;

bool negroListo = false;
bool blancoListo = false;
bool calibrado = false;

int negroI = 0, negroD = 0;
int blancoI = 0, blancoD = 0;
int umbralI = 0, umbralD = 0;

// 1 = derecha, -1 = izquierda
int direccionGiro = 1;
unsigned long inicioEstado = 0;
unsigned long inicioPrueba = 0;
unsigned long ultimoReporte = 0;

void moverMotor(int pin1, int pin2, int velocidad) {
  int pwm = constrain(abs(velocidad), 0, 255);

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

void motores(int izquierda, int derecha) {
  moverMotor(MOTOR_LEFT_1, MOTOR_LEFT_2,
             izquierda * SENTIDO_MOTOR_IZQ);
  moverMotor(MOTOR_RIGHT_1, MOTOR_RIGHT_2,
             derecha * SENTIDO_MOTOR_DER);
}

void detener() {
  motores(0, 0);
  estado = PARADO;
}

void ponerEstado(Estado nuevo) {
  estado = nuevo;
  inicioEstado = millis();
}

int promedioQTR(int pin) {
  long suma = 0;
  for (int i = 0; i < 12; i++) {
    suma += analogRead(pin);
  }
  return suma / 12;
}

void actualizarCalibracion() {
  calibrado = false;

  if (!negroListo || !blancoListo) return;

  // En QTR-1A normalmente blanco = lectura menor.
  if (negroI - blancoI < 50 || negroD - blancoD < 50) {
    Serial.println("Calibracion insuficiente. Repite n y b.");
    Serial.println("Revisa que ambos QTR esten cerca del suelo.");
    return;
  }

  umbralI = (negroI + blancoI) / 2;
  umbralD = (negroD + blancoD) / 2;
  calibrado = true;

  Serial.print("Umbral izquierdo: ");
  Serial.println(umbralI);
  Serial.print("Umbral derecho: ");
  Serial.println(umbralD);
  Serial.println("Calibrado. Envia s para iniciar o p para parar.");
}

void leerComandos() {
  while (Serial.available()) {
    char c = Serial.read();

    if (c == 'p' || c == 'P') {
      detener();
      Serial.println("PARO");
    }
    else if (c == 'n' || c == 'N') {
      detener();
      negroI = promedioQTR(QTR_LEFT);
      negroD = promedioQTR(QTR_RIGHT);
      negroListo = true;
      Serial.print("NEGRO - Izq: ");
      Serial.print(negroI);
      Serial.print(" Der: ");
      Serial.println(negroD);
      actualizarCalibracion();
    }
    else if (c == 'b' || c == 'B') {
      detener();
      blancoI = promedioQTR(QTR_LEFT);
      blancoD = promedioQTR(QTR_RIGHT);
      blancoListo = true;
      Serial.print("BLANCO - Izq: ");
      Serial.print(blancoI);
      Serial.print(" Der: ");
      Serial.println(blancoD);
      actualizarCalibracion();
    }
    else if (c == 's' || c == 'S') {
      if (!calibrado) {
        Serial.println("Primero calibra: n sobre negro, b sobre blanco.");
      } else {
        inicioPrueba = millis();
        ponerEstado(AVANZANDO);
        Serial.println("INICIO DE PRUEBA - 15 SEGUNDOS");
      }
    }
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(MOTOR_LEFT_1, OUTPUT);
  pinMode(MOTOR_LEFT_2, OUTPUT);
  pinMode(MOTOR_RIGHT_1, OUTPUT);
  pinMode(MOTOR_RIGHT_2, OUTPUT);

  pinMode(IR_LEFT, INPUT);
  pinMode(IR_MIDDLE, INPUT);
  pinMode(IR_RIGHT, INPUT);

  detener();

  Serial.println("=== TORMENTA NEGRA / E4 - VELOCIDAD 105 ===");
  Serial.println("1) Pon ambos QTR sobre negro y envia n");
  Serial.println("2) Pon ambos QTR sobre blanco y envia b");
  Serial.println("3) Devuelve el robot al negro y envia s");
  Serial.println("p = detener en cualquier momento");
  Serial.println("Primero revisa el giro con las ruedas levantadas.");
}

void loop() {
  leerComandos();

  unsigned long ahora = millis();

  if (estado == PARADO) return;

  if (ahora - inicioPrueba >= MAX_TIEMPO_PRUEBA) {
    detener();
    Serial.println("FIN DE PRUEBA: PARO AUTOMATICO");
    return;
  }

  if (estado == AVANZANDO) {
    int qI = promedioQTR(QTR_LEFT);
    int qD = promedioQTR(QTR_RIGHT);

    bool blancoIzq = (qI < umbralI);
    bool blancoDer = (qD < umbralD);

    if (ahora - ultimoReporte >= 300) {
      ultimoReporte = ahora;
      Serial.print("QTR Izq: ");
      Serial.print(qI);
      Serial.print(" | Der: ");
      Serial.print(qD);
      Serial.print(" | IR: ");
      Serial.print(digitalRead(IR_LEFT));
      Serial.print(",");
      Serial.print(digitalRead(IR_MIDDLE));
      Serial.print(",");
      Serial.println(digitalRead(IR_RIGHT));
    }

    if (blancoIzq || blancoDer) {
      // Si el blanco esta a la izquierda, giramos a la derecha.
      direccionGiro = blancoIzq ? 1 : -1;

      Serial.print("BORDE DETECTADO: ");
      Serial.println(blancoIzq ? "IZQUIERDA" : "DERECHA");

      ponerEstado(RETROCEDIENDO);
      motores(-V_RETROCESO, -V_RETROCESO);
    } else {
      motores(V_AVANCE, V_AVANCE);
    }
  }
  else if (estado == RETROCEDIENDO) {
    motores(-V_RETROCESO, -V_RETROCESO);

    if (ahora - inicioEstado >= TIEMPO_RETROCESO) {
      ponerEstado(GIRANDO);
    }
  }
  else if (estado == GIRANDO) {
    if (direccionGiro == 1) {
      motores(V_GIRO, -V_GIRO);  // Giro derecha
    } else {
      motores(-V_GIRO, V_GIRO);  // Giro izquierda
    }

    if (ahora - inicioEstado >= TIEMPO_GIRO) {
      ponerEstado(AVANZANDO);
    }
  }
}
