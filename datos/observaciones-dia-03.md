# Observaciones de pruebas — Día 3 (28 de octubre de 2026)

**Equipo:** Tormenta Negra · **Prototipo:** `D3-MONTAJE-28OCT` · **Dimensiones:** 10 × 10 cm de largo y ancho · **Peso:** por medir.

Este registro resume lo informado por el equipo después de las pruebas con el robot montado, incluida una aclaración posterior de Joel sobre los intentos iniciales. Las cantidades son aproximadas y corresponden a **pruebas del conjunto**, no a cinco ensayos por cada sensor ni a diez ensayos por cada motor. **No se anotaron resultados individuales durante la sesión**; la secuencia del primer y segundo intento es un recuerdo posterior, no datos crudos.

| Subsistema | Cantidad de componentes | Condición | Repeticiones reportadas | Observación |
|---|---:|---|---|---|
| Sensores QTR-1A | 2 | Superficie negra con bordes blancos del dohyō | Aproximadamente 5 pruebas de sensores en total, compartidas con los JS40F | Respondieron a los cambios entre negro y blanco; no hubo fallos reportados en las pruebas de sensores. |
| Sensores infrarrojos JS40F | 3 | Acercar y retirar objetos | Incluidas en el total aproximado de 5 pruebas de sensores | Las lecturas digitales cambiaron entre `0` y `1` según la detección de objetos; no hubo fallos reportados. |
| Motores DC | 2 | Primero sin batería conectada; después con batería; finalmente polaridad corregida | Aproximadamente 10 pruebas de motorización en total | **Primer intento:** sin giro por batería desconectada. **Segundo intento:** un motor giraba en sentido incorrecto. Joel y Sara corrigieron ambos problemas; los demás intentos salieron bien según el equipo. |

**Evidencia disponible:** cinco fotografías del robot y los programas de Arduino. El equipo confirmó que no grabó video de las pruebas.

**Programas de las pruebas:** [Motores](../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) · [Cinco sensores](../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino).

## Secuencia de pruebas y diagnóstico (reconstrucción retrospectiva)

| Momento recordado | Resultado | Observación |
|---|---|---|
| Primer intento de motores | No funcionó | Falta de conexión de la batería al módulo |
| Segundo intento de motores | Funcionamiento incorrecto | Polaridad invertida de uno de los motores |
| Intentos de motores posteriores | Todos funcionaron, según el equipo | Cantidad exacta de intentos posteriores sin anotar |
| Pruebas de sensores (alrededor de cinco) | Todas satisfactorias, según el equipo | No se anotó una fila por intento ni mediciones individuales |

**Verificaciones realizadas antes de las correcciones:** Joel y Sara revisaron las conexiones a la placa y el código. **Revisión interna:** los cuatro integrantes verificaron las conexiones y las pruebas. **Revisión docente:** sin información confirmada.

Este registro no es una tabla de cinco ensayos V1–K1 comparables. Como el total fue aproximado y no se documentó cada corrida al momento, no se calculó un porcentaje de éxito ni se completó el [CSV de ensayos](ensayos.csv) con resultados reconstruidos.

## Cambio del Kaizen 1

1. **Problema en el primer intento:** los motores no giraban porque no se había conectado la batería a la tarjeta.
2. **Primera corrección:** Joel y Sara conectaron la batería nominal de 7.4 V y 500 mAh.
3. **Segundo problema, en el segundo intento:** uno de los motores giraba en sentido contrario por polaridad invertida.
4. **Segunda corrección:** Joel y Sara corrigieron la conexión del motor para conseguir el sentido esperado.
5. **Resultado:** después de los ajustes, todas las pruebas posteriores salieron bien y ambos motores giraron correctamente ya integrados al robot.

## Participación del equipo

- **Joel:** consiguió y cargó los programas de Arduino; probó sensores y motores junto con Sara, y **ambos corrigieron la alimentación y polaridad**.
- **Sara:** participó en las pruebas, **corrigió junto con Joel los dos problemas de motores**, resoldó conexiones flojas o desprendidas y colocó los motores en el chasis.
- **Max y Claudio:** ayudaron a pelar cables y con las tareas de soldadura.
- **Todo el equipo:** verificó las conexiones y las pruebas realizadas.

## Qué no se midió en E3 y dónde se documentó después

El Día 3 (**28 de octubre**) solo se comprobó cualitativamente el funcionamiento de los sensores y de los motores. **No se anotaron lecturas ADC de negro/blanco, umbrales de calibración de los QTR ni resultados por intento en una tabla de ensayos.** Tampoco se hizo una calibración formal sobre el dohyō.

Las **mediciones de los QTR y las pruebas de evasión con el robot completo** comenzaron el **29 de octubre (E4)**. El [E4 colectivo](../docs/entregables/dia-04.md) contiene el experimento, y las [pruebas adicionales con PWM 105](e4_pruebas_pwm105_29oct.md) registran la nueva calibración y tres ejecuciones sin salidas de la pista según la observación del equipo. Esos resultados no pertenecen al E3 ni sustituyen la comparación V1–K1 solicitada para el Día 3.

## Próximo registro cuantitativo

Usar [`ensayos.csv`](ensayos.csv) para registrar **cada nueva corrida**, con fecha, versión del montaje, condición, resultado sí/no y observaciones. Los primeros dos fallos se conocen por recuerdo posterior, mientras que las aproximadamente cinco y diez pruebas mencionadas aquí son un resumen del equipo; **no se desglosan retrospectivamente en filas individuales que no fueron registradas**.

**Fuente del reporte:** información proporcionada por el equipo el 29 de octubre sobre las actividades realizadas el 28 de octubre.  
**Evidencia:** [Galería del Día 3](../evidencias/dia-03/README.md) · [Entregable E3](../docs/entregables/dia-03.md).
