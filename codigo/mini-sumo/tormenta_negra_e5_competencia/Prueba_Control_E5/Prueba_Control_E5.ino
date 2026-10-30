/*
 Diagnostico D12 de Tormenta Negra, SIN mover motores.
 La tarjeta debe conectarse SOLO a USB para este diagnostico.
 Cambiar TIPO_CONTROL segun el hardware:
   1 = modulo START/STOP, salida digital D12.
   2 = receptor IR demodulado, protocolo NEC (TinyIRReceiver).
 El objetivo es verificar que el mando se recibe ANTES del combate.
*/
#include <Arduino.h>
#define TIPO_CONTROL 1
#define PIN_CONTROL 12
#if TIPO_CONTROL == 2
  #define IR_RECEIVE_PIN PIN_CONTROL
  #define NO_LED_RECEIVE_FEEDBACK_CODE
  #include <TinyIRReceiver.hpp>
#endif

void setup() {
  Serial.begin(9600);
#if TIPO_CONTROL == 1
  pinMode(PIN_CONTROL, INPUT); // salida digital activa; NO pin flotante
  Serial.println(F("CONTROL: salida digital del modulo a D12"));
  Serial.println(F("Comprobar 0=STOP / 1=START"));
#elif TIPO_CONTROL == 2
  if (!initPCIInterruptForTinyIRReceiver())
    Serial.println(F("ERROR: sin interrupcion en D12"));
  Serial.println(F("CONTROL NEC: presionar START y STOP; anotar direccion/comando"));
#else
  #error "Elegir TIPO_CONTROL 1 o 2"
#endif
}

void loop() {
#if TIPO_CONTROL == 1
  static int ultimo = -1;
  int actual = digitalRead(PIN_CONTROL);
  if (actual != ultimo) {
    ultimo = actual;
    Serial.print(F("D12="));
    Serial.print(actual);
    Serial.println(actual == HIGH ? F(" ARRANQUE") : F(" PARO"));
  }
  delay(20);
#elif TIPO_CONTROL == 2
  if (TinyIRReceiverDecode()) {
    uint16_t address = TinyIRReceiverData.Address;
    uint8_t command = TinyIRReceiverData.Command;
    uint8_t flags = TinyIRReceiverData.Flags;
    if (flags & (IRDATA_FLAGS_IS_REPEAT | IRDATA_FLAGS_PARITY_FAILED)) return;
    Serial.print(F("DIRECCION_NEC=0x"));
    Serial.print(address, HEX);
    Serial.print(F(" COMANDO_NEC=0x"));
    Serial.println(command, HEX);
  }
#endif
}
