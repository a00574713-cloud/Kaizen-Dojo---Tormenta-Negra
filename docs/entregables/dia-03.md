---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E3"
dia: 3
responsable_registro: "equipo"
estado: "REGISTRADO"
fecha: "2026-10-28"
revision_docente: "PENDIENTE"
---

# E3 · Día 3 — MEDIR Y APRENDER | Primer Kaizen del mini-sumo

El 28 de octubre terminamos el montaje físico de nuestro mini-sumo **Tormenta Negra** y realizamos las primeras pruebas con los cinco sensores y los dos motores. Durante las pruebas resolvimos dos problemas de los motores: faltaba conectar la batería a la tarjeta y uno tenía la polaridad invertida. Al corregirlos, conseguimos que ambos giraran correctamente. Después de los ajustes, todas las pruebas posteriores que realizamos salieron bien.

## 0 · Identificación y continuidad

| Campo | Registro |
|---|---|
| Equipo y misión | Tormenta Negra · M01, mini-sumo autónomo. |
| Fecha y lugar | 28 de octubre de 2026 · Laboratorio de Electrónica, CTA, Campus León. |
| Avance desde el Día 2 | El [E2](dia-02.md) documenta el cableado y la preparación de componentes. En el E3 quedó montado el chasis y realizamos pruebas de sensores y motores. |
| Controlador y alimentación | Tarjeta Azimov Team programada con Arduino IDE; batería nominal de 7.4 V y 500 mAh. |
| Superficie de prueba | Dohyō de superficie negra con bordes blancos. |
| Diseño mecánico | El equipo confirmó que las dimensiones del robot son **10 cm de largo × 10 cm de ancho**. El peso todavía no se ha medido. |
| Identificación del avance | `D3-MONTAJE-28OCT`, prototipo físico ensamblado. |
| Versión de partida V1 | Cableado y conexiones documentadas en E2, sin ensayos funcionales registrados ni una versión de firmware V1 validada. |
| Protocolo de partida | [Protocolo de pruebas preparado desde E2](../../pruebas/protocolo.md); [E2 del equipo](dia-02.md). |

## 1 · Ruta del Día 3 (180 min)

| Bloque de la guía | Minutos | Actividad realizada |
|---|---:|---|
| Analizar un fallo real / demostración | 0–15 | Durante la prueba inicial notamos que los motores no giraban. |
| Diseño del experimento | 15–40 | Joel consiguió los programas de Arduino y los cargó a la tarjeta. Junto con Sara probó los cinco sensores sobre el dohyō y con objetos para los infrarrojos. Los controles de un experimento emparejado aún no quedaron documentados. |
| Diagnóstico del prototipo V1 | 40–80 | Joel y Sara realizaron las pruebas de sensores y motores. Sara también revisó y volvió a soldar conexiones flojas o desprendidas. |
| Kaizen 1: cambio técnico | 80–125 | Conectamos la batería que faltaba y corregimos la polaridad de uno de los motores. |
| Reensayo equivalente | 125–160 | Realizamos alrededor de diez pruebas de motores en total, incluido el diagnóstico inicial y la comprobación posterior. No contamos con cinco pares de corridas V1–K1 bajo condiciones idénticas. |
| Documentar, debatir, reflejar | 160–180 | Sara colocó los motores en el chasis; Max y Claudio apoyaron pelando cables y con la soldadura. Documentamos el robot ensamblado con cinco fotografías. Las reflexiones personales de los demás integrantes siguen pendientes. |

Los minutos representan la distribución de actividades de la guía, no un cronometraje de la sesión.

## 2 · Problema, hipótesis y trazabilidad

| Campo requerido por la guía | Registro del Día 3 |
|---|---|
| Fallo / oportunidad de mejora observada y evidencia | Durante la prueba inicial los motores no giraron. Al conectar la batería, uno de los motores giró en sentido contrario al esperado. Se registró la experiencia en la [bitácora de observaciones](../../datos/observaciones-dia-03.md); no se grabó video. |
| Dónde se presenta y cuántas veces | En el robot ya ensamblado, durante las pruebas iniciales del 28 de octubre. Hubo aproximadamente diez pruebas de motores **en total**; no se registró el número exacto de intentos con cada fallo. |
| Diagnóstico: causas alternativas consideradas | Causas que se pudieron confirmar: falta de conexión de la batería y polaridad invertida de un motor. **Otras causas alternativas consideradas y pruebas para descartarlas: pendiente de documentar**; no se atribuyen al equipo diagnósticos que no reportó. |
| Hipótesis contrastable: si cambio X, espero que Y ocurra porque Z | **Si conectamos correctamente la batería y corregimos la polaridad, los motores responderán y girarán en el sentido previsto**, porque tendrán alimentación y conexiones adecuadas. |
| Variable independiente | Estado de conexión de la batería y polaridad del motor; fueron dos correcciones sucesivas, no una única variable aislada. |
| Métrica de resultado, unidad y criterio de mejora | **Respuesta del motor al comando** (sí/no por intento) y **sentido de giro correcto** (sí/no por intento). Criterio: ambos motores responden y giran en el sentido solicitado. No se midieron velocidades ni tiempos de respuesta. |
| Variables que se mantendrán iguales | Para futuros ensayos comparables: mismo controlador, código, motores, montaje, alimentación y comando por intento. No se registró control riguroso de todas esas condiciones en las pruebas exploratorias de E3. |
| Ensayos requeridos y muestreo | La guía solicita **cinco ensayos comparables** V1–K1 (o justificar otro n). En E3 hubo alrededor de diez pruebas de motores y cinco pruebas del conjunto de sensores, pero **no cinco pares V1–K1 con resultados individuales**. |
| Riesgo de sesgo o confusión y mitigación | Cambiaron la alimentación y la polaridad durante el diagnóstico; por tanto, no podemos asignar cuantitativamente la mejora a una sola corrección. Para futuras comparaciones, mantener condiciones constantes y cambiar una variable a la vez. |
| Parada de seguridad / condición de aborto | Desenergizar para cambiar conexiones; detener ante calentamiento, olor, chispas, movimiento inesperado o cables sueltos. Inspeccionar aislamiento entre la tarjeta y el chasis metálico antes de ensayar. |

## 2A · Pruebas de sensores y motores

| Elemento | Cómo se probó | Cantidad aproximada de pruebas | Resultado |
|---|---|---|---|
| 2 sensores QTR-1A de línea | Colocamos los sensores sobre la zona negra y los bordes blancos del dohyō, cambiando entre ambos colores. | Aproximadamente **5 pruebas de sensores en total**, considerando los QTR y los infrarrojos. | Los QTR respondieron correctamente al cambio de color. |
| 3 sensores infrarrojos JS40F | Acercamos y retiramos objetos y observamos las lecturas digitales `0` y `1` en el programa de prueba. | Incluidas en las aproximadamente 5 pruebas del conjunto de sensores. | Los tres sensores respondieron al detectar objetos. |
| 2 motores DC | Probamos su giro mediante el programa de Arduino. Después de conectar la batería y corregir la polaridad de uno, repetimos las pruebas con los motores montados en el carrito. | Aproximadamente **10 pruebas de motores en total**. | Al terminar las correcciones, ambos motores giraron correctamente. |

Las cantidades son aproximadas, de acuerdo con el registro del equipo. **Después de corregir la alimentación y la polaridad, todas las pruebas posteriores de los motores salieron bien.**

**Lecturas observadas:** los QTR distinguieron las dos superficies; los infrarrojos alternaron sus lecturas digitales entre `0` y `1` al interactuar con los objetos. No se asigna aquí un valor fijo a «detectado» porque no se compartió qué lectura correspondía a cada estado.

**Programas utilizados:** los dos sketches originales de Arduino, ahora guardados en el repositorio: [prueba de los cinco sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [prueba individual de motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino). [Ver conexiones y explicación de las pruebas](../../codigo/pruebas-dia-03/README.md).

## 3 · Colaboración y cambio técnico Kaizen 1

La guía solicita registrar el alcance, la kata, el cambio concreto, el responsable de revisión y la validación de la interfaz. Se conservan los campos pendientes donde no tenemos constancia de una asignación o validación formal.

| Alias y alcance | Kata asociada | Qué cambió exactamente y por qué | Código/CAD y responsable de revisión | Validación de interfaz |
|---|---|---|---|---|
| [Joel — MS01 y MS06](../../participantes/A00574713/dias/E3.md) | **Pendiente:** indicar kata específica del compromiso | Consiguió y cargó los programas para comprobar sensores y motores; realizó las pruebas junto con Sara, para verificar su funcionamiento. | [Sketch de sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [sketch de motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino). **Revisor formal:** pendiente. | El equipo reportó lecturas correctas de sensores y respuesta de motores tras los ajustes; sin acta individual de revisión. |
| [Sara — MS03 y MS06](../../participantes/saragdr/dias/E3.md) | **Pendiente:** kata específica | Probó sensores y motores junto con Joel; resoldó conexiones flojas y fijó los motores al chasis para asegurar su montaje. | [Registro de pruebas](../../datos/observaciones-dia-03.md). **Revisor formal:** pendiente. | Conexiones revisadas y motores funcionales tras las correcciones; sin validación formal de interfaz registrada. |
| [Max — MS01 y MS03](../../participantes/MaxAmCam/dias/E3.md) | **Pendiente:** kata específica | Apoyó pelando cables y en tareas de soldadura durante el montaje. | [Fotografías del montaje](../../evidencias/dia-03/README.md). **Revisor formal:** pendiente. | **Pendiente:** verificación específica asociada a su tarea. |
| [Claudio — MS03, MS07 y MS10](../../participantes/A00574802/dias/E3.md) | **Pendiente:** kata específica | Apoyó pelando cables y en tareas de soldadura durante el montaje. | [Fotografías del montaje](../../evidencias/dia-03/README.md). **Revisor formal:** pendiente. | **Pendiente:** verificación específica asociada a su tarea. |

**Identificador de la etapa K1:** `D3-CORREGIDO`, utilizado para identificar el estado físico después de conectar la batería y corregir la polaridad; **no es una etiqueta formal de firmware ni reemplaza un identificador de revisión del repositorio**.

**Otras modificaciones o perturbaciones:** durante el Día 3 se terminó de montar el chasis, se colocaron motores y se resoldaron conexiones. No se registró cuáles de esos cambios se mantuvieron constantes entre todos los intentos.

## 3A · Kaizen 1: problema, mejora y resultado

**¿Qué queremos mejorar?** Conseguir que los dos motores respondan y giren en el sentido correcto dentro del robot.

| Etapa | Qué sucedió | Acción del equipo |
|---|---|---|
| Situación inicial | Los motores no giraban durante la primera prueba porque la batería no estaba conectada a la tarjeta. | Revisamos la alimentación. |
| Primer cambio | Conectamos la batería al módulo. | Los motores comenzaron a responder. |
| Segundo problema | Uno de los motores giraba en el sentido contrario al esperado debido a la polaridad de su conexión. | Identificamos la conexión invertida. |
| Segundo cambio | Corregimos la polaridad del motor. | Ambos motores quedaron girando correctamente. |
| Comprobación final | Repetimos las pruebas con los motores integrados al carrito. | Todas las pruebas realizadas después de las correcciones salieron bien. |

**Hipótesis de trabajo:** si conectamos correctamente la alimentación y corregimos la polaridad de los motores, ambos podrán responder a las órdenes del programa y girar en el sentido esperado.

**Lo que aprendimos:** una conexión de alimentación faltante y una polaridad invertida pueden impedir que el robot funcione como esperamos, aunque sus componentes estén montados. La mejora se logró revisando cada conexión, corrigiéndola y volviendo a probar.

**Comparación de estados:** `D3-INICIAL` (sin batería conectada, sin giro); `D3-BATERIA` (motores energizados, uno con giro invertido); `D3-CORREGIDO` (ambos motores con giro correcto). Son nombres para distinguir etapas del montaje, no versiones distintas de firmware.

## 4 · Ensayos comparables V1–K1

**Datos crudos requeridos:** [ensayos.csv](../../datos/ensayos.csv) · **Protocolo:** [protocolo.md](../../pruebas/protocolo.md) · **Observaciones realmente registradas:** [Día 3](../../datos/observaciones-dia-03.md).

La plantilla original incluye **cinco pruebas emparejadas** bajo las mismas condiciones y valores por versión. No contamos con esos datos: el Día 2 no tuvo ensayos funcionales y las pruebas del Día 3 fueron exploratorias, con correcciones efectuadas durante la sesión.

| Prueba emparejada | Condición / escenario idéntico | V1, valor + unidad | K1, valor + unidad | Cambio / resultado | Incidencia o desviación |
|---:|---|---|---|---|---|
| 1 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 2 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 3 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 4 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 5 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |

**N válido de ensayos emparejados V1 / K1:** **0 / 0**. Esto no significa cero éxitos: significa que **no se levantaron corridas comparables por versión**.

**Resumen, variabilidad y tasa de éxito:** no calculables con la información disponible. Se informaron aproximadamente **10 intentos de motores** en total, y que **todos los intentos posteriores a las correcciones salieron bien**, pero no se conoce el número exacto de estos últimos.

**Incertidumbres y limitaciones:** la cantidad de intentos fue aproximada, faltan observaciones individuales y se cambiaron las condiciones de alimentación y conexión. No sería correcto inventar cinco resultados o una mejora porcentual.

## 4A · Registro y continuidad de las pruebas

**Resumen de resultados:** [Observaciones del Día 3](../../datos/observaciones-dia-03.md) · [Protocolo del equipo](../../pruebas/protocolo.md) · [CSV para ensayos medidos](../../datos/ensayos.csv).

Las pruebas nos permitieron confirmar el funcionamiento básico de los componentes. **No grabamos video de estas pruebas**; nuestras evidencias son las cinco fotografías del robot terminado, los programas de Arduino y este registro de lo que observamos. Para medir el rendimiento más adelante, anotaremos los resultados de cada intento de forma individual.

**Cuidado durante los siguientes ensayos:** revisar con el robot desconectado las conexiones, el aislamiento de la tarjeta respecto a la base metálica, la batería y la sujeción de los cables. Para probar el giro de forma segura, mantener las ruedas separadas del suelo cuando corresponda.

## 5 · Interpretación y decisión

| Pregunta de la guía | Interpretación del equipo |
|---|---|
| ¿La evidencia respalda, contradice o no permite decidir la hipótesis? | **Respalda cualitativamente** la hipótesis: tras conectar la batería y corregir la polaridad, los motores respondieron y giraron correctamente. No se demostró con cinco pares de ensayos ni se obtuvo una tasa estadística de mejora. |
| Si no hubo mejora, ¿qué aprendimos? | Sí se observó un cambio favorable en el funcionamiento de los motores. Aprendimos a revisar alimentación y polaridad antes de considerar fallado un componente. |
| ¿Qué riesgo o compromiso generó el cambio? | Manipular conexiones incorrectas puede dañar componentes o producir movimientos inesperados. Debemos revisar polaridad y alimentación con el equipo desenergizado y asegurar el cableado. |
| ¿Qué decidimos hacer con K1 y por qué? | **Conservar el montaje corregido**, ya que los motores funcionaron en las pruebas posteriores. La mejora cuantitativa sigue sin comprobarse por falta de ensayos emparejados. |
| ¿Qué pregunta sigue para Kaizen 2? | ¿Podemos utilizar los QTR y los motores juntos para avanzar sobre negro y evitar el borde blanco del dohyō sin salir de él? |

## 5A · Montaje, evidencias y trabajo del equipo

El chasis quedó ensamblado con su base metálica, dos ruedas motrices, batería, tarjeta controladora, cableado y sensores. **Dimensiones confirmadas por el equipo: 10 × 10 cm.** Las cinco fotografías muestran el avance respecto al Día 2.

| Evidencia | Archivo |
|---|---|
| Vista superior del robot | [IMG_3592.jpg](../../evidencias/dia-03/IMG_3592.jpg) |
| Vista lateral | [IMG_3591.jpg](../../evidencias/dia-03/IMG_3591.jpg) |
| Vista posterior | [IMG_3590.jpg](../../evidencias/dia-03/IMG_3590.jpg) |
| Vista oblicua frontal | [IMG_3589.jpg](../../evidencias/dia-03/IMG_3589.jpg) |
| Vista frontal | [IMG_3588.jpg](../../evidencias/dia-03/IMG_3588.jpg) |

**[Ver las cinco fotografías del Día 3](../../evidencias/dia-03/README.md).**

### Participación de cada integrante

| Integrante | Aportación del 28 de octubre |
|---|---|
| [Joel](../../participantes/A00574713/dias/E3.md) | Consiguió los programas de Arduino, los cargó a la tarjeta y realizó las pruebas de sensores y motores junto con Sara. |
| [Sara](../../participantes/saragdr/dias/E3.md) | Realizó las pruebas junto con Joel, volvió a soldar componentes o conexiones flojas o desprendidas y colocó los motores en el chasis. |
| [Max](../../participantes/MaxAmCam/dias/E3.md) | Apoyó con tareas de preparación, como pelar cables y ayudar en la soldadura. |
| [Claudio](../../participantes/A00574802/dias/E3.md) | Apoyó con tareas de preparación, como pelar cables y ayudar en la soldadura. |

Cada integrante puede complementar su E3 personal con su aprendizaje y experiencia.

## 6 · Puerta de salida E3

### Seis criterios de cierre de la plantilla original

- [ ] **V1 y K1 tienen referencias inequívocas:** están identificadas sus etapas físicas, pero no se asoció una versión V1 de firmware y cinco ensayos reproducibles a identificadores únicos.
- [ ] **La hipótesis está conectada con una medida y un problema diagnosticado:** hay problema, hipótesis y criterio cualitativo, pero falta una tabla de medidas por intento para evaluar la mejora.
- [x] **Se documentó una modificación técnica y quién participó:** conexión de batería, corrección de polaridad y pruebas; está registrado el trabajo del equipo, aunque el responsable exacto de cada corrección individual no se confirmó.
- [ ] **Ensayos comparables o diferencias expuestas explícitamente:** las diferencias y la falta de cinco pares comparables están explicadas; falta realizar y registrar los ensayos para satisfacer completamente el criterio.
- [x] **Conclusión honesta, incluso si existen resultados negativos:** se conservan los fallos iniciales y los límites de los datos.
- [ ] **E3 personal de cada estudiante:** el [E3 de Joel](../../participantes/A00574713/dias/E3.md) tiene actividades registradas; los archivos individuales de [Sara](../../participantes/saragdr/dias/E3.md), [Max](../../participantes/MaxAmCam/dias/E3.md) y [Claudio](../../participantes/A00574802/dias/E3.md) necesitan revisión y completar sus reflexiones personales.

**Gate E3:** **CONDICIONADO**. **Revisor:** profesor Camilo René Duque, revisión pendiente. **Enlace a PR/commit:** pendiente de vincular una revisión técnica identificada al experimento; se conservan los [sketches de sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) en el repositorio.

### Avances adicionales comprobados

- [x] Montaje físico del mini-sumo documentado con cinco fotografías.
- [x] Pruebas de los cinco sensores y los dos motores realizadas y descritas.
- [x] Problema, dos correcciones y resultado del Kaizen 1 documentados.
- [x] Resultados cualitativos y cantidad aproximada de pruebas registrados.
- [x] Incorporados los dos programas `.ino` originales de sensores y motores.
- [x] Registradas las tareas de Joel, Sara, Max y Claudio y aclarado que no se grabó video.
- [ ] Registrar por separado las corridas de una prueba repetible para comparar resultados numéricos.
- [ ] Completar y revisar los E3 personales de todos los integrantes.
- [ ] Revisión del profesor Camilo René Duque.

**Estado del registro E3:** actividades, resultados y primer Kaizen documentados; criterios formales pendientes indicados arriba.

**Siguiente reto, Kaizen 2:** utilizar los sensores y los motores en conjunto para que el robot detecte el borde blanco del dohyō y realice la maniobra programada para evitar salir de la pista.
