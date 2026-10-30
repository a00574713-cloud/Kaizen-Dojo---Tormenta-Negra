# Conexiones y señales — programa E5 V2

**Referencia:** [Tormenta_Negra_E5_V2_Laterales.ino](../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), último programa que el equipo reportó instalado en Tormenta Negra.

La siguiente tabla reproduce las **asignaciones del código Arduino**, no un plano de cableado verificado punto por punto en el robot físico.

| Función | Señal utilizada en el programa | Nota |
|---|---|---|
| Motor izquierdo, salidas A/B | D5 / D6 | Salidas de control de dirección/velocidad a la tarjeta |
| Motor derecho, salidas A/B | D10 / D11 | Salidas de control de dirección/velocidad a la tarjeta |
| QTR izquierdo, borde | A2 | Lectura analógica; umbral en E5 V2 = 390 |
| QTR derecho, borde | A3 | Lectura analógica; umbral en E5 V2 = 456 |
| Sensor JS40F izquierdo | D2 | Entrada digital; `HIGH` interpretado como detección |
| Sensor JS40F central | A5 | Entrada digital; `HIGH` interpretado como detección |
| Sensor JS40F derecho | A4 | Entrada digital; `HIGH` interpretado como detección |
| Salida del módulo MicroStart | D12 | Señal digital esperada: `HIGH=START`, `LOW=STOP` |
| LED integrado de la tarjeta | `LED_BUILTIN` | Diagnóstico de señal recibida desde D12 |

**Alimentación reportada:** batería nominal de 7.4 V / 500 mAh. La placa utiliza un regulador integrado según las pruebas del equipo, pero no contamos con una medición eléctrica que certifique los límites del controlador y del driver. No conectar esta tensión directamente a entradas lógicas ni operar USB y batería simultáneamente sin comprobar compatibilidad.

## Funcionamiento observado y pendientes

En E5 el mando **arrancaba con botón 1, detenía con botón 2 y no respondía al botón 3**. Esta secuencia **no coincide con la asignación prevista en el módulo**. Antes de volver a competir se necesita verificar, con las ruedas levantadas y alimentación segura, las señales de START/STOP, su cableado y un método de parada física accesible. No se ha documentado esa corrección.

La V2 se utilizó en dos peleas: [victoria en 10 s y derrota en 5 s](../evidencias/dia-05/README.md). La prueba de movimiento no sustituye la verificación de conexiones, corriente máxima, masa o seguridad eléctrica.
