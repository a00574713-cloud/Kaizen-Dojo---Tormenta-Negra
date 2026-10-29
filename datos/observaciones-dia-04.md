# Resultados del Monitor Serie — E4 (29 de octubre de 2026)

**Equipo:** Tormenta Negra · **Programa:** [prueba_evasion_borde.ino](../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) · **Lugar:** dohyō.

Se realizaron **tres ejecuciones** del programa de prueba integrada y las tres terminaron con el mensaje `FIN DE PRUEBA` (el programa está configurado para detenerse después de 15 segundos).

## Calibración registrada

| QTR-1A | Negro (ADC) | Blanco (ADC) | Diferencia negro − blanco | Umbral utilizado |
|---|---:|---:|---:|---:|
| Izquierdo (A2) | 1022 | 956 | 66 | 989 |
| Derecho (A3) | 821 | 34 | 787 | 427 |

El sensor izquierdo presenta menor separación de lectura entre los dos colores que el derecho. En el registro aparecen caídas del izquierdo a valores como **985**, **972**, **964** e incluso **819** durante el movimiento, lo que permite que supere su umbral de detección de blanco ante pequeñas variaciones. No es posible identificar con certeza si cada variación correspondía a un borde real o a cambios de posición o altura del sensor.

## Registro de las tres pruebas

| Prueba | Impresiones `BORDE: IZQUIERDA` | Impresiones `BORDE: DERECHA` | Lecturas completas QTR/IR impresas | Fin |
|---|---:|---:|---:|---|
| 1 | 9 | 3 | 22 | `FIN DE PRUEBA` |
| 2 | 5 | 7 | 22 | `FIN DE PRUEBA` |
| 3 | 6 | 6 | 26 | `FIN DE PRUEBA` |
| **Total** | **20** | **16** | **70** | **3/3 ejecuciones terminadas** |

Esos conteos se refieren a mensajes producidos por el programa, **no a salidas evitadas**. El equipo confirmó mediante observación directa que el robot sí avanzó, retrocedió y giró ante el blanco, pero hubo giros innecesarios por manchas blancas en el interior de la pista y algunas salidas del dohyō.

Los mensajes de lectura se imprimen cada 300 ms, pero las lecturas utilizadas para detectar un borde se evalúan con mayor frecuencia. Por ello, un mensaje `BORDE` puede aparecer junto a una lectura QTR aparentemente normal y corresponder a una lectura diferente tomada entre dos impresiones.

## Resultado observado sobre la pista

El robot sí ejecutó el movimiento y las maniobras de evasión. La superficie negra del dohyō tenía algunas **manchas blancas**, que también activaban los QTR y provocaban giros repentinos fuera del borde. En algunas ocasiones el robot llegó a **salirse de la pista**; el equipo considera que la velocidad pudo influir, aunque aún no se aisló esa causa. Fuera de estas situaciones, el equipo no observó otros fallos.

El registro tiene tres ejecuciones de 15 segundos, pero no permite calcular una tasa de éxito de permanencia en el dohyō: no se anotó cuántas salidas ocurrieron en cada prueba ni cuántos avisos correspondían a manchas interiores.

## Próximo ajuste recomendado

1. Revisar altura, orientación y sujeción de ambos QTR, en especial el izquierdo.
2. Repetir la calibración con los dos QTR en negro y luego en blanco, siempre con la misma altura respecto al suelo y con la batería y el montaje final.
3. Repetir el ensayo en una zona negra sin manchas blancas, bajo supervisión, y comparar con la superficie anterior.
4. Bajar inicialmente la velocidad de avance para comprobar si se reducen las salidas; no modificar velocidad y tiempos de giro simultáneamente.
5. Registrar para cada prueba: ¿detectó blanco?, ¿retrocedió?, ¿giró?, ¿se mantuvo dentro?, ¿hubo avisos innecesarios?
6. Conservar el [sketch original](../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) hasta comprobar esos puntos antes de modificar umbrales o tiempos.

**Log completo:** [e4_monitor_serie_29oct.txt](e4_monitor_serie_29oct.txt).
