# Tormenta Negra E5 V2 — corrección de seguimiento lateral

**Estado: candidato de prueba, NO VALIDADO físicamente.** Esta versión es independiente de [E5 anterior](../tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino) y de [E4 funcional](../tormenta_negra_final/Tormenta_Negra_Final.ino). Ningún formato obligatorio del profesor se modificó.

## Qué se encontró y corrigió

- En E5 inicial, si **solo el JS40F izquierdo** detectaba el rival se ordenaba una curva `(78, 150)`; con **solo el derecho**, `(150, 78)`. Esto puede tardar en reorientar un mini-sumo pequeño. **V2 gira sobre el eje**: izquierda `(-125, +125)` y derecha `(+125, -125)`, hasta que detecte el objetivo con el JS40F frontal. **El sentido debe verificarse con las ruedas levantadas**.
- Antes, durante `RETROCEDIENDO` (350 ms) y `GIRANDO` (380 ms) se ignoraban los sensores de oponente. Ahora sigue dando prioridad al borde, pero **puede salir del giro después de 110 ms si ambos QTR ven negro y algún JS40F detecta rival**. Mantiene retroceso 350 ms sin interrupciones. Con blancos persistentes, continúa priorizando la seguridad del borde.
- Al perder una lectura lateral, V2 recuerda la dirección durante **170 ms**, y después alterna el barrido.
- Los pines **no cambian**: izquierdo D2, central A5, derecho A4, QTR A2/A3 y MicroStart D12. `HIGH` detecta rival, conforme a [JSumo](https://blog.jsumo.com/xs1-micro-sumo-arduino-code-explanation-of-the-robot-code/).
- **No se puede asegurar que esta fuera la causa única**: los sensores pueden trabajar con USB y fallar bajo batería, tener poco alcance para la superficie del rival o estar apuntando fuera de la pista; los QTR pueden disparar falsas evasiones por recalibración.

## Corrección de arranque remoto aplicada a la V2

**La V2 siempre conservó el control MicroStart D12**, pero exigía una señal LOW de 350 ms seguida de HIGH otros 350 ms. Se redujo el filtro a **120 ms** para mejorar la respuesta, sin permitir arranque con HIGH al encender ni quitar STOP enclavado.

La **LED integrada de la placa Arduino (normalmente D13 / LED_BUILTIN)** ahora muestra el estado de **D12**, aun cuando el robot use únicamente batería:

| Situación | LED de la TARJETA, no el rojo/azul del MicroStart |
|---|---|
| Encendido y todavía sin START | Apagado: D12 LOW |
| Botón 1 (desbloquear) | Debe seguir apagado: D12 LOW |
| Botón 2 (START) | Debe quedar encendido fijo: D12 HIGH |
| Botón 3 (STOP) | Debe apagarse: D12 LOW |

**Si el LED integrado prende con el botón 1** y se apaga con 2, el cable o señal de D12 no está comportándose como `SIGNAL` del MicroStart. Corregir primero la conexión y comprobar GND común **con la alimentación desconectada**. No invertir `HIGH/LOW` por software, porque quitaría el STOP de competencia. Si el LED se enciende correctamente con 2 y el robot sigue inmóvil, revisar QTR, sentido de giro, batería y si el programa realmente salió de `PARADO`.

**Para repetir una ronda después de STOP**, cortar y restaurar la alimentación del MicroStart. No es necesario reprogramar los tres botones. No competir mientras el botón STOP no corte los motores de manera fiable.

## Cómo hacer la prueba

1. **Desconectar batería**, cargar [Tormenta_Negra_E5_V2_Laterales.ino](Tormenta_Negra_E5_V2_Laterales.ino) por USB. **No mezclar USB y batería** sin verificar placa.
2. Para diagnosticar dentro del código V2, cambiar `const bool MODO_DIAGNOSTICO = false;` a `true`; volver a cargar por USB y abrir **Monitor Serie a 9600 baudios**. Con motores detenidos, acercar un objeto uno por uno a izquierda, centro y derecha. Los campos `RIVAL_I/C/D` deben pasar de 0 a 1. Colocar los QTR sobre negro y luego blanco para verificar `BORDE_I/BORDE_D`. **Si un BORDE=1 cuando el robot está sobre negro, no usar para combatir hasta recalibrarlo**.
3. Cambiar `MODO_DIAGNOSTICO` a `false`, cargar sin batería, desconectar USB y alimentar únicamente por batería. **Primero con ruedas levantadas**, comprobar qué botón provoca START y cuál provoca STOP en la configuración REAL del MicroStart. Hubo reporte previo de `1=arranca`, `2=para` y `3` sin efecto: no asumir que quedó corregido. **Sin STOP seguro, NO competir**.
4. Sin rival y con ruedas levantadas, comprobar búsqueda. Acercar un rival solamente a la izquierda: la rueda izquierda debe girar hacia atrás y derecha hacia adelante, haciendo que el frente gire a la izquierda. Repetir a la derecha. Frente: las dos ruedas hacia adelante. Si la orientación física no coincide con este movimiento, revisar conexión y los `SENTIDO_IZQ/DER`, sin alterar cableado en caliente.
5. En pista con profesor y corte de alimentación disponible, probar **5 intentos** registrando giro lateral, acercamiento y resultado contra el rival. Empezar con PWM de ataque limitado al valor probado ayer (105); subir gradualmente solo si el driver, los motores y la alimentación lo soportan.

## Potencia

Mantiene pulsos de ataque de 125, 165 y 140 PWM como **valores propuestos, no validados**. No usar PWM 165 hasta comprobar su temperatura/corriente, evitar daños al driver y asegurar que el robot no se sale. El código no reemplaza una rampa frontal correctamente montada y buenas llantas.

## Indicadores de error

- Si `RIVAL_I=1` o `RIVAL_D=1` en diagnóstico pero **en combate nunca gira hacia el lado**, confirmar que cargaron V2 y el estado de borde; medir detección bajo la fuente de energía de combate.
- Si el sensor lateral tiene LED encendido pero Arduino marca `0`, revisar señal y GND; si Arduino marca `1` pero gira hacia el lado equivocado, revisar orientaciones de motor.
- Si gira continuamente y no persigue al rival, revisar calibración QTR y orientación de JS40F.

Los resultados del día y cualquier mejora observada deben anotarse después de realizar las pruebas. No afirmar que esta versión ganó ni que se confirmó su funcionamiento hasta tener evidencia.
