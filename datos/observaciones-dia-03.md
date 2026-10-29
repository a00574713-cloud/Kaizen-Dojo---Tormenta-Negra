# Observaciones de pruebas — Día 3 (28 de octubre de 2026)

**Equipo:** Tormenta Negra · **Prototipo:** `D3-MONTAJE-28OCT` · **Dimensiones:** 10 × 10 cm de largo y ancho · **Peso:** por medir.

Este registro resume lo informado por el equipo después de las pruebas con el robot montado. Las cantidades son aproximadas y corresponden a **pruebas del conjunto**, no a cinco ensayos por cada sensor ni a diez ensayos por cada motor.

| Subsistema | Cantidad de componentes | Condición | Repeticiones reportadas | Observación |
|---|---:|---|---|---|
| Sensores QTR-1A | 2 | Superficie negra con bordes blancos del dohyō | Aproximadamente 5 pruebas de sensores en total, compartidas con los JS40F | Respondieron a los cambios entre negro y blanco. |
| Sensores infrarrojos JS40F | 3 | Acercar y retirar objetos | Incluidas en el total aproximado de 5 pruebas de sensores | Las lecturas digitales cambiaron entre `0` y `1` según la detección de objetos. |
| Motores DC | 2 | Primero sin batería conectada; después con batería; finalmente polaridad corregida | Aproximadamente 10 pruebas de motorización en total | Al inicio no giraban; posteriormente uno giraba invertido; al terminar las correcciones ambos funcionaron en el sentido esperado. |

**Programas de las pruebas:** [Motores](../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) · [Cinco sensores](../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino).

## Cambio del Kaizen 1

1. **Problema:** los motores no giraban porque no se había conectado la batería a la tarjeta.
2. **Primera corrección:** conectar la batería nominal de 7.4 V y 500 mAh.
3. **Segundo problema:** uno de los motores giraba en sentido contrario por polaridad invertida.
4. **Segunda corrección:** invertir la conexión del motor para conseguir el sentido esperado.
5. **Resultado:** funcionamiento satisfactorio reportado de ambos motores ya integrados al robot.

## Próximo registro cuantitativo

Usar [`ensayos.csv`](ensayos.csv) para registrar cada corrida, con fecha, versión del montaje, condición, resultado y observaciones. Las aproximadamente cinco y diez pruebas mencionadas aquí son un resumen del equipo; no se desglosan en filas individuales sin sus resultados.

**Fuente del reporte:** información proporcionada por el equipo el 29 de octubre sobre las actividades realizadas el 28 de octubre.  
**Evidencia:** [Galería del Día 3](../evidencias/dia-03/README.md) · [Entregable E3](../docs/entregables/dia-03.md).
