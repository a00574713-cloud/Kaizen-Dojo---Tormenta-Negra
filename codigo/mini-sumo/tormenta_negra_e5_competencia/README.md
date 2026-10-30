# Tormenta Negra — E5: firmware experimental de competencia

**Estado: candidato NO VALIDADO físicamente.** Este trabajo se preparó para probarlo el 30/10/2026. No sustituye automáticamente el [programa E4](../tormenta_negra_final/Tormenta_Negra_Final.ino), que permanece intacto. **No se ha confirmado el modelo de módulo receptor del control remoto.**

## Archivos

- [Tormenta_Negra_E5_Competencia.ino](Tormenta_Negra_E5_Competencia.ino): firmware nuevo, búsqueda/ataque, protección de borde y START/STOP.
- [Prueba_Control_E5/Prueba_Control_E5.ino](Prueba_Control_E5/Prueba_Control_E5.ino): comprobar el control SIN arrancar motores. Abrir como sketch independiente.
- [Versión E4 que sí funcionó](../tormenta_negra_final/Tormenta_Negra_Final.ino): respaldo. Si Arduino IDE pide mover el archivo E5 principal a una carpeta homónima, aceptar (el IDE necesita que carpeta y archivo principal tengan el mismo nombre).

## ¿Qué cambió respecto al E4?

| Tema | Firmware E4 (comprobado parcialmente) | Firmware E5 (propuesta por verificar) |
|---|---|---|
| Inicio y paro | Arranque automático tras 5 s, sin mando | D12: arranque y paro remotos; si no llega START, motores detenidos |
| Borde | QTR A2/A3 prioritarios mientras busca o ataca | Igual prioridad, con promedios de 6 lecturas y maniobra no bloqueante |
| Rival lateral | Giro en el sitio | Curva hacia el oponente para intentar encararlo |
| Blanco frontal | Ataque PWM 105 | Rampa PWM 125 y pulso PWM 165, después PWM 140 |
| Rival perdido | Sigue girando hacia última dirección | Recuerdo corto de dirección y barrido en ambos sentidos |
| Control IR | No había | Opción de módulo START digital u opción NEC con TinyIRReceiver |

**No interpretar PWM 165 como fuerza medida ni como garantía de ganar.** Las tres pruebas a PWM 105 son la base que funcionó ayer; los PWM mayores son nuevos. Un golpe prolongado con motores bloqueados puede dañar el driver o los motores.

## 1. Identificar el receptor del control antes de cargar

**A) Módulo de arranque digital (por ejemplo, JSumo MicroStart):** tiene alimentación, GND y salida lógica que permanece **LOW para STOP** y **HIGH para START**. Conectar salida a **D12**, junto con GND común y alimentación **según la especificación del módulo**. En ambos programas mantener `#define TIPO_CONTROL 1`, como viene de fábrica. La entrada D12 NO debe flotar: conectar el módulo digital correctamente, y si hace falta, un pulldown de 10 kΩ a GND. El firmware exige detectar LOW antes de aceptar HIGH para evitar arranque involuntario. Configurar en el módulo los botones desbloquear/iniciar/parar según su manual.

**B) Receptor infrarrojo demodulado (tres pines tipo TSOP, SIN decodificador de arranque):** conectar la señal a **D12** y alimentación adecuada. En ambos programas cambiar `#define TIPO_CONTROL 2`. Instalar la biblioteca **IRremote de Arduino-IRremote** desde el Gestor de bibliotecas. Se usa `TinyIRReceiver.hpp` porque funciona sin un temporizador dedicado y no interfiere con PWM D11 de motores; **acepta controles NEC**. Primero cargar `Prueba_Control_E5.ino`, pulsar los botones, anotar por Serial `DIRECCION_NEC`, `COMANDO_ARRANQUE_NEC`, `COMANDO_PARO_NEC`. Introducir los tres valores exactos en el firmware E5. **Mientras sean 0xFFFF/0xFF no arrancará por seguridad.** Si el control no manda NEC (por ejemplo SONY), este modo NO es compatible; se requiere un módulo decodificador apropiado o implementar recepción sin conflictos de temporizadores.

**No conectar una salida lógica de 7.4 V a D12**: D12 requiere nivel permitido por la placa (normalmente 5 V para ATmega328P). La batería de 7.4 V va a la entrada eléctrica prevista por la PCB, no al pin de señal.

## 2. Probar antes de competir (en este orden)

1. **Sin batería y sin motores en movimiento**, conectar solo USB. Cargar el sketch de prueba de control. Comprobar LOW/STOP y HIGH/START si es módulo digital, o leer códigos NEC si es un receptor simple.
2. Cargar el programa principal. Poner temporalmente `DIAGNOSTICO_SIN_MOTORES = true` y abrir Monitor Serie a **9600 baudios**. Confirmar valores QTR sobre negro/blanco, señales JS40F al acercar rival y que D12 cambia cuando corresponde. No dar por hecho que `NIVEL_RIVAL = HIGH` sea correcto.
3. Dejar `DIAGNOSTICO_SIN_MOTORES = false`. Desconectar USB. Alimentar SOLO desde batería usando la conexión prevista; **antes confirmar que la placa soporta 7.4 V y el cableado**. Mantener las ruedas levantadas para probar START, STOP, avance, retroceso y sentido de giro. Confirmar que STOP funciona incluso en mitad de una maniobra.
4. En el dohyō, **comenzar con PWM 105**: reemplazar `PWM_ATAQUE_EMPUJE` y `PWM_ATAQUE_SOSTENIDO` por 105 y bajar `PWM_MAX_PRUEBA` si se requiere. Luego probar gradualmente **125, 145, 165** solo si corriente, temperatura, tensión, tracción y estabilidad lo permiten. **No se sabe aún la corriente máxima del driver**.
5. Probar borde desde las dos orientaciones, búsqueda lateral, detección central y empuje contra un **objeto de prueba resistente**; luego, si todo está seguro, contra otro mini-sumo. Registrar número de salidas, resultados y fallas en E5 **después de hacer las pruebas**.

El programa no tiene sensor de corriente ni protección térmica automática: usar un paro físico accesible, vigilar temperatura y detener ante trabas prolongadas, humo u olor. No conectar USB y batería simultáneamente hasta comprobar compatibilidad de la PCB; la tarjeta anterior se dañó y su causa exacta NO se confirmó.

## 3. Mecánica que probablemente cambie más la capacidad de empuje

- **Llantas:** limpiar goma y pista (si el reglamento lo permite); evitar deslizamiento y revisar que ambas ruedas tengan agarre.
- **Navaja/rampa:** fijarla firme, **baja, lisa y sin filo peligroso**, orientada para meterse bajo el oponente sin rayar o dañar el dohyō. Comprobar que no se despegue al empujar.
- **Peso y centro de masa:** medir masa final; mantener componentes bajos y peso bien distribuido sobre ruedas motrices, sin exceder el máximo del reglamento aplicable.
- **Motores/driver:** si patinan, hace falta tracción; si no patinan pero se quedan detenidos, hace falta más par, una transmisión adecuada o un driver/batería que soporte la corriente. No conectar motores de mayor corriente sin verificar el driver de la PCB.

## Fuentes técnicas para decisiones de diseño

- [IRremote — conflictos de temporizadores y alternativa TinyIRReceiver](https://github.com/Arduino-IRremote/Arduino-IRremote).
- [JSumo — módulo MicroStart (señal digital START/STOP)](https://www.jsumo.com/microstart-sumo-minisumo-robot-start-module).
- [ATLAS Sumo Robot — búsqueda, persecución y ataque por estados](https://leonardoward.github.io/sumo.html).
- [FDJ Robotics — rampa baja, tracción y par](https://fdjrobotics.com/comunidad/entrada/tutorial-arma-tu-primer-robot-mini-sumo).

**Registro E5 colectivo y E5 personales: no se editaron**. Se documentarán únicamente cuando se hayan realizado las pruebas de hoy.
