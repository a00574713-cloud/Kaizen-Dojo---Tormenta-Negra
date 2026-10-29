# E4 — Tres pruebas reales a velocidad PWM 105 (29 de octubre de 2026)

**Robot:** Tormenta Negra · **Programa:** [prueba_evasion_borde_lenta.ino](../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino).

Se realizaron tres ejecuciones adicionales de 15 segundos. El Monitor Serie de estas tres pruebas se compartió en el chat del equipo. Las tres finalizaron con `FIN DE PRUEBA`. El equipo confirmó después que **con esta versión el robot ya no se salió del dohyō y funcionó mucho mejor**, por lo que se registran **cero salidas observadas en estas tres pruebas**. No se informó un conteo de giros innecesarios y no se debe inferir solo por los avisos del programa.

## Calibración de los QTR-1A

| Sensor | Negro (ADC) | Blanco (ADC) | Diferencia | Umbral |
|---|---:|---:|---:|---:|
| Izquierdo A2 | 749 | 31 | 718 | 390 |
| Derecho A3 | 873 | 39 | 834 | 456 |

## Resultados de las tres ejecuciones

| Prueba | Tiempo programado | Avisos de borde izquierdo | Avisos de borde derecho | Avisos totales | Paro automático | Salida del dohyō observada |
|---:|---:|---:|---:|---:|---|---|
| 1 | 15 s | 7 | 4 | 11 | Sí | No |
| 2 | 15 s | 8 | 5 | 13 | Sí | No |
| 3 | 15 s | 9 | 2 | 11 | Sí | No |
| **Total** | **45 s programados** | **24** | **11** | **35** | **3/3** | **0 de 3 ejecuciones con salida reportada** |

**Interpretación:** los avisos de borde son entradas a la maniobra del programa; no equivalen a 35 salidas evitadas. Se reporta la ausencia de salidas a partir de la **observación del equipo**, no de una variable medida automáticamente por el código.

## Comparación con las tres pruebas anteriores

| Indicador | Primera versión de E4 (PWM 145) | Segunda versión E4 (PWM 105) |
|---|---|---|
| Ejecuciones registradas | 3 | 3 |
| Duración programada | 15 s por ejecución | 15 s por ejecución |
| Avisos de borde en Monitor Serie | 36 en total (20 izq., 16 der.) | 35 en total (24 izq., 11 der.) |
| Salidas de la pista | Hubo algunas, **sin conteo** | **Ninguna**, según observación del equipo |
| Contraste QTR izquierdo negro–blanco | 66 | 718 |
| Contraste QTR derecho negro–blanco | 787 | 834 |
| Resultado funcional observado | La evasión funcionaba pero algunas veces se salía | El equipo reporta que ya no se salió y funcionó mejor |

**Limitaciones:** las dos tandas **no son una comparación controlada de solo velocidad**, porque los sensores se recalibraron y las lecturas negro/blanco cambiaron sustancialmente entre versiones. La pista tenía algunas manchas blancas durante las primeras pruebas; no se documentó con certeza si las condiciones de la superficie fueron idénticas en la segunda tanda. Tampoco se registró el número preciso de salidas de la tanda anterior, por lo que **no corresponde calcular porcentaje de mejora o tasa comparativa**. Las seis pruebas son del Día 4 (K2), no reemplazan cinco ensayos V1–K1 del Día 3.

**Siguientes pasos:** conservar la versión PWM 105 para nuevas pruebas, verificar comportamiento con obstáculos y control de arranque/paro infrarrojo, e incluir la comparación de K2 en la demostración del Día 5.
