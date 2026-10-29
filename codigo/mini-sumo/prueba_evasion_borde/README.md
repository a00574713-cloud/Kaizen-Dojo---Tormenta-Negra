# Prueba E4: movimiento autónomo y evasión del borde

**Equipo:** Tormenta Negra · **Día:** 29 de octubre de 2026.

[**Abrir código Arduino**](prueba_evasion_borde.ino)

Este programa es el **sketch usado en las tres primeras pruebas integradas** de motores y sensores sobre el dohyō (29 de octubre). Usa el pinout comprobado durante E3: motores D5/D6/D10/D11, QTR A2/A3 y tres infrarrojos JS40F en D2/A5/A4. Los sensores de oponente se muestran en el Monitor Serie, pero todavía no controlan la búsqueda o el ataque.

## Prueba en laboratorio

1. Con la batería desconectada, comprueba fijaciones, aislantes entre tarjeta y carcasa metálica, polaridad y ruedas.
2. Abre el archivo \`.ino\` en Arduino IDE, súbelo a la placa y abre el Monitor Serie a **9600 baudios**.
3. Coloca **ambos** sensores QTR sobre la zona negra del dohyō; escribe \`n\` y pulsa Enviar.
4. Coloca **ambos** QTR sobre una hoja blanca, a la misma distancia de trabajo; escribe \`b\`. El programa calcula un umbral por sensor. En QTR-1A el blanco normalmente produce un valor analógico menor.
5. Regresa el robot al negro y deja las ruedas levantadas. Escribe \`s\` para revisar que ambos motores correspondan al avance programado. Si una rueda gira al revés, cambia su constante \`SENTIDO_MOTOR_IZQ\` o \`SENTIDO_MOTOR_DER\` de \`1\` a \`-1\`, vuelve a cargar y prueba de nuevo.
6. Con una persona lista para levantar el robot y la zona despejada, prueba sobre el dohyō. Al detectar blanco, retrocede ~400 ms, gira ~450 ms y retoma avance. Ajusta esos tiempos según lo observado. El programa se detiene automáticamente después de 15 segundos.
7. Para detener en cualquier momento desde el Monitor Serie, envía \`p\`. El paro manual accesible y la desconexión de energía deben estar disponibles durante las pruebas.

## Control remoto infrarrojo

El receptor de arranque y paro quedó conectado al **pin D12** de la tarjeta en E4. Todavía no se han incorporado las señales ni los botones del control remoto al programa, por lo que este sketch continúa utilizando comandos del Monitor Serie para las primeras pruebas seguras. **No sustituye al arrancador/paro infrarrojo exigido por el reglamento de RoboLympics.** No declarar que el control remoto ya funciona sin probarlo y añadir su código.

## Estado de la prueba

- **Montaje físico reportado:** carcasa para cubrir cables y componentes, cableado ordenado, motores fijados al chasis, receptor IR de control remoto conectado.
- **Resultado de las tres pruebas:** el robot sí avanzó, retrocedió y giró cuando detectó blanco. Algunas manchas blancas en la zona negra provocaron giros repentinos; en algunas ocasiones el robot se salió de la pista, posiblemente por la velocidad. La respuesta al borde necesita ajustes.
- **Pendiente:** medir peso total del robot (máximo 500 g), integrar y probar arranque/paro remoto, mejorar la permanencia dentro del dohyō e integrar detección del rival.

## Recomendación después de las pruebas

Antes de modificar este sketch, revisar el sensor QTR izquierdo (calibración con poco contraste entre negro y blanco), limpiar o seleccionar una zona sin manchas blancas y repetir los ensayos. Para estudiar la influencia de la velocidad, crear una copia de prueba y bajar `V_AVANCE` de 145 a un valor inicial de alrededor de 105, verificando que ambos motores aún muevan el robot correctamente. Mantener inicialmente sin cambios los tiempos de retroceso (400 ms) y giro (450 ms) y anotar salidas y giros innecesarios. No interpretar la terminación automática de 15 segundos como éxito en la evasión de borde.

## Segunda versión de prueba: avance más lento

Después de las tres pruebas iniciales del 29 de octubre, el equipo observó que el robot sí retrocedía y giraba ante el blanco, pero algunas manchas blancas de la pista producían giros repentinos y en ocasiones se salió del dohyō. Para comprobar la influencia de la velocidad, se preparó una **segunda versión** del mismo programa, que cambia **solo** `V_AVANCE` de **145 a 105** (PWM). El retroceso, el giro, la calibración y la parada automática de 15 segundos permanecen iguales.

- [**Descargar/ver prueba_evasion_borde_lenta.ino**](../prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino)
- **Estado:** preparado para probar; todavía sin resultados experimentales de la nueva velocidad.
- **Receptor de control remoto (D12):** no incluido en esta versión, como acordó el equipo.

Calibrar de nuevo con `n` y `b` después de cargar el programa, hacer primero la prueba con ruedas levantadas y comparar si se reducen las salidas. Si a 105 los motores no vencen la fricción, probar 115 o 120 manteniendo todo lo demás igual.
