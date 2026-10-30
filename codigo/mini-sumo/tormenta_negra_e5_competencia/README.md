# Tormenta Negra — E5: firmware experimental de competencia

**Estado posterior al Día 5:** código E5 V1 utilizado en las tres pruebas previas del 30 de octubre; obtuvo dos resultados favorables (13 y 5 s) y una prueba desfavorable por detección lateral (5 s). [Registros y videos](../../../evidencias/dia-05/README.md). El E5 V2 se utilizó posteriormente en las dos peleas. La asignación real de botones fue 1=arranque, 2=paro, 3=sin respuesta; queda pendiente corregirla.

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

**Asignación programada para MicroStart:** 1=desbloquear, 2=START y 3=STOP, con paro enclavado. **Comportamiento observado el 30 de octubre:** 1 arrancaba, 2 detenía y 3 no respondía. Antes de otra competencia debemos identificar y corregir esta diferencia y verificar el paro con las ruedas levantadas. El archivo E4 original se conserva.

**No interpretar PWM 165 como fuerza medida ni como garantía de ganar.** Las tres pruebas a PWM 105 son la base que funcionó ayer; los PWM mayores son nuevos. Un golpe prolongado con motores bloqueados puede dañar el driver o los motores.

## Confirmación visual: Steren RM-260 y módulo tipo MicroStart

Las fotografías compartidas por el equipo coinciden con el [dibujo del Steren RM-260](https://descargas.steren.com.mx/RM-260-instr.pdf) y el [MicroStart de JSumo (manual oficial)](https://jsumo.com/Data/EditorFiles/additional/microstart-eng.pdf). **Elige la opción A de abajo, TIPO_CONTROL 1**: el módulo aprende los códigos del control y proporciona `LOW` en STOP y `HIGH` en START. El Arduino **no descodifica Sony ni NEC** cuando utiliza este módulo.

**Programación para este control:**
1. En el Steren, **presionar TV + 2 simultáneamente** para seleccionar la marca Sony (manual RM-260, pág. 2).
2. Alimentar el MicroStart **a 3.3 o 5 V según su pinout**, nunca a 7.4 V. Confirmar en la placa qué terminal es `SIGNAL`, `GND` y `+5V`, sin asumir el orden según cómo esté girada la pieza. Conectar `SIGNAL` al pin **D12** del microcontrolador y masa común.
3. Mantener el botón pequeño del MicroStart cerca de **1 s** hasta que los LED parpadeen **3 veces**.
4. Apuntar el Steren y pulsar **1 para desbloquear**, esperar **1–2 s**; pulsar **2 para arrancar**, esperar **1–2 s**; pulsar **3 para detener**. El módulo debe terminar con **4 parpadeos rápidos**.
5. Comprobar los LED y la señal D12 con el **sketch Prueba_Control_E5** antes de cargar el código de combate: **1 = desbloqueo, 2 = salida HIGH e inicio, 3 = LOW y paro**. **Después de STOP el MicroStart oficial exige reiniciar su alimentación** para otra ronda. No alterar el cableado con la batería conectada.

**Aún sin verificar físicamente:** que la tarjeta Azimov envía el `SIGNAL` del módulo a **D12**, que el receptor no esté conectado a otro pin, que los botones guardados sean aceptados y que el STOP sea efectivo durante el movimiento. No dar por completada la función remota hasta probarla.

## 1. Identificar el receptor del control antes de cargar

**A) Módulo de arranque digital (por ejemplo, JSumo MicroStart):** tiene alimentación, GND y salida lógica que permanece **LOW para STOP** y **HIGH para START**. Conectar salida a **D12**, junto con GND común y alimentación **según la especificación del módulo**. En ambos programas mantener `#define TIPO_CONTROL 1`, como viene de fábrica. La entrada D12 NO debe flotar: conectar el módulo digital correctamente, y si hace falta, un pulldown de 10 kΩ a GND. El firmware exige detectar LOW antes de aceptar HIGH para evitar arranque involuntario. Configurar en el módulo los botones desbloquear/iniciar/parar según su manual.

**B) Receptor infrarrojo demodulado (tres pines tipo TSOP, SIN decodificador de arranque):** conectar la señal a **D12** y alimentación adecuada. En ambos programas cambiar `#define TIPO_CONTROL 2`. Instalar la biblioteca **IRremote de Arduino-IRremote** desde el Gestor de bibliotecas. Se usa `TinyIRReceiver.hpp` porque funciona sin un temporizador dedicado y no interfiere con PWM D11 de motores; **acepta controles NEC**. Primero cargar `Prueba_Control_E5.ino`, pulsar los botones, anotar por Serial `DIRECCION_NEC`, `COMANDO_ARRANQUE_NEC`, `COMANDO_PARO_NEC`. Introducir los tres valores exactos en el firmware E5. **Mientras sean 0xFFFF/0xFF no arrancará por seguridad.** Si el control no manda NEC (por ejemplo SONY), este modo NO es compatible; se requiere un módulo decodificador apropiado o implementar recepción sin conflictos de temporizadores.

**No conectar una salida lógica de 7.4 V a D12**: D12 requiere nivel permitido por la placa (normalmente 5 V para ATmega328P). La batería de 7.4 V va a la entrada eléctrica prevista por la PCB, no al pin de señal.

## Diagnóstico del problema detectado en salón: botón 1 mueve y botón 2 para

Durante una prueba el equipo informó que el botón 1 movía los motores y el botón 2 los paraba, **aunque los LEDs del MicroStart indican rojo con 1 y azul con 2**. Esto **no es el comportamiento correcto y aún no se identificó su causa**. No invertir alimentación/masa ni invertir en software el sentido HIGH/LOW sin medir la señal: el STOP podría dejar de funcionar.

**Prueba nueva sin movimiento:** cargar [Diagnostico_D12_LED/Diagnostico_D12_LED.ino](Diagnostico_D12_LED/Diagnostico_D12_LED.ino) con la batería desconectada y USB solamente. Desconectar el USB; conectar batería correctamente y observar el **LED incorporado de la tarjeta Arduino (LED_BUILTIN, normalmente D13), no los LED del MicroStart**. El diagnóstico mantiene los cuatro pines de motor en LOW. Reiniciar alimentación antes de la secuencia de botones.

| Momento | Estado esperado del LED en la TARJETA |
|---|---|
| Enciende, sin presionar botones | APAGADO (= D12 LOW) |
| Presiona 1 (desbloquear) | APAGADO (= D12 LOW) |
| Presiona 2 (arranque) | ENCENDIDO fijo (= D12 HIGH) |
| Presiona 3 (paro) | APAGADO (= D12 LOW) |

Si el LED integrado de la tarjeta **se enciende con 1 y se apaga con 2**, entonces D12 realmente está recibiendo la señal equivocada: verificar que el conductor vaya al pad rotulado **SIGNAL** del MicroStart, no a un LED ni a otro pad, y que haya GND común. Identificar el orden real de las tres conexiones antes de manipularlas, siempre con alimentación desconectada. Si la señal en D12 **sí coincide con la tabla**, revisar que se esté cargando el firmware E5 correcto y comprobar sus pines y comportamiento.

La actualización del firmware E5 filtra una subida de D12 durante **500 ms** en lugar de 70 ms para minimizar falsos START, y mantiene STOP inmediato y enclavado. **No sustituye comprobar el cableado ni resuelve una inversión física de señales**. No probar el combate mientras el STOP no se comporte correctamente.

## Pasos para cargar la versión de competencia hoy

1. Abrir [Tormenta_Negra_E5_Competencia.ino](Tormenta_Negra_E5_Competencia.ino) en Arduino IDE. Si pregunta si puede moverlo a una carpeta con el mismo nombre que el sketch, **aceptar**. Seleccionar la tarjeta y puerto COM correctos.
2. Cargar el sketch con **batería desconectada y USB conectado**. No hace falta instalar bibliotecas externas porque `TIPO_CONTROL` ya está configurado en **1 (MicroStart)**.
3. Desconectar USB y conectar la batería a la entrada correcta de la PCB. Verificar que el MicroStart tenga señal estable y las ruedas no giren antes de recibir START.
4. Probar **con ruedas elevadas**: botón 1 (desbloquear), botón 2 (arrancar), botón 3 (paro). **Después de STOP, no debe reactivarse aunque el módulo cambie de estado**; apagar y volver a encender la alimentación para repetir.
5. Verificar sensores y dirección de giro con el robot en el dohyō bajo supervisión. Probar el ataque gradualmente empezando con valores PWM validados antes de intentar 165.

**D12 es la salida lógica START/STOP del MicroStart, no el receptor infrarrojo sin procesar.** Si al desconectar USB el módulo responde correctamente pero el robot no arranca, verificar que D12 realmente cambia de LOW a HIGH con el botón 2 y que no hay sensores QTR detectando blanco por error.

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

**Resultados posteriores a la preparación de este firmware:** [E5 colectivo](../../../docs/entregables/dia-05.md) · [evidencias de cinco pruebas y peleas](../../../evidencias/dia-05/README.md) · [E5 V2](../tormenta_negra_e5_v2_laterales/README.md).
