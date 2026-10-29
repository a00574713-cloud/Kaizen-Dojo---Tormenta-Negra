# Prueba E4: movimiento autónomo y evasión del borde

**Equipo:** Tormenta Negra · **Día:** 29 de octubre de 2026.

[**Abrir código Arduino**](prueba_evasion_borde.ino)

Este programa es una **propuesta para la primera prueba combinada** de motores y sensores, no un ensayo ya validado en el robot. Usa el pinout comprobado durante E3: motores D5/D6/D10/D11, QTR A2/A3 y tres infrarrojos JS40F en D2/A5/A4. Los sensores de oponente se muestran en el Monitor Serie, pero todavía no controlan la búsqueda o el ataque.

## Prueba en laboratorio

1. Con la batería desconectada, comprueba fijaciones, aislantes entre tarjeta y carcasa metálica, polaridad y ruedas.
2. Abre el archivo \`.ino\` en Arduino IDE, súbelo a la placa y abre el Monitor Serie a **9600 baudios**.
3. Coloca **ambos** sensores QTR sobre la zona negra del dohyō; escribe \`n\` y pulsa Enviar.
4. Coloca **ambos** QTR sobre una hoja blanca, a la misma distancia de trabajo; escribe \`b\`. El programa calcula un umbral por sensor. En QTR-1A el blanco normalmente produce un valor analógico menor.
5. Regresa el robot al negro y deja las ruedas levantadas. Escribe \`s\` para revisar que ambos motores correspondan al avance programado. Si una rueda gira al revés, cambia su constante \`SENTIDO_MOTOR_IZQ\` o \`SENTIDO_MOTOR_DER\` de \`1\` a \`-1\`, vuelve a cargar y prueba de nuevo.
6. Con una persona lista para levantar el robot y la zona despejada, prueba sobre el dohyō. Al detectar blanco, retrocede ~400 ms, gira ~450 ms y retoma avance. Ajusta esos tiempos según lo observado. El programa se detiene automáticamente después de 15 segundos.
7. Para detener en cualquier momento desde el Monitor Serie, envía \`p\`. El paro manual accesible y la desconexión de energía deben estar disponibles durante las pruebas.

## Control remoto infrarrojo

El receptor de arranque y paro se conectó en E4, pero **todavía no se conoce el pin de señal de ese receptor ni los códigos del control**, así que este sketch utiliza comandos del Monitor Serie para las primeras pruebas seguras. **No sustituye al arrancador/paro infrarrojo exigido por el reglamento de RoboLympics.** No declarar que el control remoto ya funciona sin probarlo y añadir su código.

## Estado de la prueba

- **Montaje físico reportado:** carcasa para cubrir cables y componentes, cableado ordenado, motores fijados al chasis, receptor IR de control remoto conectado.
- **Funcionalidad del sketch:** preparada para probar; resultado real del comportamiento automático por confirmar.
- **Pendiente:** medir peso total del robot (máximo 500 g), probar arranque y paro remoto, probar respuesta al borde e integrar detección del rival.
