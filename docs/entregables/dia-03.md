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

El 28 de octubre terminamos el montaje físico de nuestro mini-sumo **Tormenta Negra** y realizamos las primeras pruebas con los cinco sensores y los dos motores. Durante las pruebas resolvimos dos problemas de los motores: en el **primer intento** no giraron porque faltaba conectar la batería a la tarjeta y en el **segundo intento** uno giraba en sentido incorrecto por su polaridad. **Joel y Sara corrigieron juntos** ambas situaciones. Antes de identificar la causa revisamos las conexiones a la placa y el código. Después de los ajustes, los demás intentos de motor funcionaron correctamente; **las pruebas de sensores también salieron bien, sin fallos reportados**. La secuencia se recuperó del relato del equipo, ya que no se anotó el resultado de cada ensayo durante la sesión.

## 0 · Identificación y continuidad

| Campo | Registro |
|---|---|
| Equipo y misión | Tormenta Negra · M01, mini-sumo autónomo. |
| Fecha y lugar | 28 de octubre de 2026 · Laboratorio de Electrónica, CTA, Campus León. |
| Avance desde el Día 2 | El [E2](dia-02.md) documenta el cableado y la preparación de componentes. En el E3 quedó montado el chasis y realizamos pruebas de sensores y motores. |
| Controlador y alimentación | Tarjeta Azimov Team programada con Arduino IDE; batería nominal de 7.4 V y 500 mAh. |
| Superficie de prueba | Dohyō de superficie negra con bordes blancos. |
| Diseño mecánico | **Dimensiones medidas físicamente por el equipo: 10 cm de largo × 10 cm de ancho.** El peso todavía no se ha medido. |
| Identificación del avance | `D3-MONTAJE-28OCT`, prototipo físico ensamblado. |
| Versión de partida V1 | Cableado y conexiones documentadas en E2, sin ensayos funcionales registrados ni una versión de firmware V1 validada. |
| Protocolo de partida | [Protocolo de pruebas preparado desde E2](../../pruebas/protocolo.md); [E2 del equipo](dia-02.md). |

## 1 · Ruta del Día 3 (180 min)

| Bloque de la guía | Minutos | Actividad realizada |
|---|---:|---|
| Analizar un fallo real / demostración | 0–15 | En la primera prueba los motores no giraron porque faltaba conectar la batería; la segunda reveló polaridad invertida de un motor. |
| Diseño del experimento | 15–40 | Joel consiguió los programas de Arduino y los cargó a la tarjeta. Junto con Sara probó los cinco sensores sobre el dohyō y con objetos para los infrarrojos; todos funcionaron en las pruebas reportadas. Los controles de un experimento emparejado aún no quedaron documentados. |
| Diagnóstico del prototipo V1 | 40–80 | Joel y Sara revisaron las conexiones a la placa y el código para descartar problemas, además de probar sensores y motores. Sara también volvió a soldar conexiones flojas o desprendidas. |
| Kaizen 1: cambio técnico | 80–125 | Joel y Sara corrigieron juntos la falta de conexión de la batería y la polaridad de uno de los motores. |
| Reensayo equivalente | 125–160 | En alrededor de diez intentos de motores en total, el primero presentó falta de alimentación, el segundo un sentido de giro incorrecto y los posteriores funcionaron. No se anotaron resultados por intento ni se hicieron cinco pares comparables V1–K1. |
| Documentar, debatir, reflejar | 160–180 | Sara colocó los motores en el chasis; Max y Claudio apoyaron pelando cables y con la soldadura. Documentamos el robot ensamblado con cinco fotografías y **sin grabar video ese día**. Los E3 personales de Joel, Sara y Max ya tienen respuestas; Claudio conserva su plantilla sin contestar. |

Los minutos representan la distribución de actividades de la guía, no un cronometraje de la sesión.

## 2 · Problema, hipótesis y trazabilidad

| Campo requerido por la guía | Registro del Día 3 |
|---|---|
| Fallo / oportunidad de mejora observada y evidencia | **Intento 1:** los motores no giraron por falta de conexión de la batería. **Intento 2:** un motor giró en sentido incorrecto por polaridad invertida. Tras corregir ambas causas, los siguientes intentos funcionaron. Es un relato retrospectivo del equipo, recogido en la [bitácora de observaciones](../../datos/observaciones-dia-03.md); no se grabó video ni se anotaron corridas individuales en el momento. |
| Dónde se presenta y cuántas veces | En el robot ensamblado, durante las pruebas del 28 de octubre. El equipo recuerda **dos intentos iniciales con problemas distintos** y todos los siguientes con respuesta correcta, dentro de **aproximadamente diez pruebas de motores** en total. No se conoce el total exacto ni hay hoja de registro por intento. Las aproximadamente cinco pruebas de sensores salieron bien. |
| Diagnóstico: causas alternativas consideradas | Además de buscar el problema, **revisamos que los motores estuvieran bien conectados a la placa y que el código fuera correcto**. Las causas finalmente identificadas fueron falta de conexión de batería y polaridad invertida de un motor. No se registró un procedimiento formal para descartar cada alternativa. |
| Hipótesis contrastable: si cambio X, espero que Y ocurra porque Z | **Si conectamos correctamente la batería y corregimos la polaridad, los motores responderán y girarán en el sentido previsto**, porque tendrán alimentación y conexiones adecuadas. |
| Variable independiente | Estado de conexión de la batería y polaridad del motor; fueron dos correcciones sucesivas, no una única variable aislada. |
| Métrica de resultado, unidad y criterio de mejora | **Respuesta de los motores al comando** (funciona/no funciona por intento) y **sentido de giro correcto** (sí/no por intento). El criterio es que ambos respondan y giren en el sentido solicitado. Como no anotamos esos resultados mientras hacíamos las pruebas, solo contamos con el recuerdo de los primeros dos problemas y de que los intentos posteriores fueron correctos; no hay mediciones de velocidad ni tiempos de respuesta. |
| Variables que se mantendrán iguales | Para futuros ensayos comparables: mismo controlador, código, motores, montaje, alimentación y comando por intento. No se registró control riguroso de todas esas condiciones en las pruebas exploratorias de E3. |
| Ensayos requeridos y muestreo | La guía solicita **cinco ensayos comparables** V1–K1 (o justificar otro n). En E3 hubo aproximadamente diez intentos de motores: **1.º sin respuesta por batería, 2.º con un motor girando al revés y los demás correctos**. Se realizaron aproximadamente cinco pruebas del conjunto de sensores, todas satisfactorias. **No anotamos los intentos en una tabla ni hicimos cinco pares V1–K1 con condiciones iguales**, aunque el resultado observado era de tipo sí/no. |
| Riesgo de sesgo o confusión y mitigación | Cambiaron la alimentación y la polaridad durante el diagnóstico; por tanto, no podemos asignar cuantitativamente la mejora a una sola corrección. Para futuras comparaciones, mantener condiciones constantes y cambiar una variable a la vez. |
| Parada de seguridad / condición de aborto | Desenergizar para cambiar conexiones; detener ante calentamiento, olor, chispas, movimiento inesperado o cables sueltos. Inspeccionar aislamiento entre la tarjeta y el chasis metálico antes de ensayar. |

## 2A · Pruebas de sensores y motores

| Elemento | Cómo se probó | Cantidad aproximada de pruebas | Resultado |
|---|---|---|---|
| 2 sensores QTR-1A de línea | Colocamos los sensores sobre la zona negra y los bordes blancos del dohyō, cambiando entre ambos colores. | Aproximadamente **5 pruebas de sensores en total**, considerando los QTR y los infrarrojos. | Los QTR respondieron correctamente al cambio de color. |
| 3 sensores infrarrojos JS40F | Acercamos y retiramos objetos y observamos las lecturas digitales `0` y `1` en el programa de prueba. | Incluidas en las aproximadamente 5 pruebas del conjunto de sensores. | Los tres sensores respondieron al detectar objetos. |
| 2 motores DC | Probamos su giro mediante el programa de Arduino. Después de conectar la batería y corregir la polaridad de uno, repetimos las pruebas con los motores montados en el carrito. | Aproximadamente **10 pruebas de motores en total**. | Al terminar las correcciones, ambos motores giraron correctamente. |

Las cantidades son aproximadas, de acuerdo con el registro del equipo. **Después de corregir la alimentación y la polaridad, todas las pruebas posteriores de los motores salieron bien.** En el E3 solo verificamos la **respuesta funcional**: no registramos valores ADC de calibración, umbrales negro/blanco, velocidades medidas ni ensayos individuales. Las mediciones y la calibración formal de los QTR se iniciaron en el E4.

**Lecturas observadas:** los QTR distinguieron las dos superficies; los infrarrojos alternaron sus lecturas digitales entre `0` y `1` al interactuar con los objetos. No se asigna aquí un valor fijo a «detectado» porque no se compartió qué lectura correspondía a cada estado.

**Programas utilizados:** los dos sketches originales de Arduino, ahora guardados en el repositorio: [prueba de los cinco sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [prueba individual de motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino). [Ver conexiones y explicación de las pruebas](../../codigo/pruebas-dia-03/README.md).

## 3 · Colaboración y cambio técnico Kaizen 1

La guía solicita registrar el alcance, la kata, el cambio concreto, el responsable de revisión y la validación de la interfaz. Las katas se recuperaron de los **compromisos individuales originales**; seleccionarlas en el compromiso no significa haberlas terminado. Se conservan pendientes las revisiones y validaciones que no quedaron documentadas.

| Alias y alcance | Kata asociada | Qué cambió exactamente y por qué | Código/CAD y responsable de revisión | Validación de interfaz |
|---|---|---|---|---|
| [Joel — MS01 y MS06](../../participantes/A00574713/dias/E3.md) | Del [compromiso de Joel](../../participantes/A00574713/compromiso.md): **MS01, fabricar/ensamblar una versión y validar ajuste**; **MS06, ensayar cinco encuentros y documentar errores de percepción**. Son katas seleccionadas, no acreditadas como completas por las pruebas exploratorias de E3. | Consiguió y cargó los programas, probó sensores y motores junto con Sara y **ambos corrigieron la alimentación y polaridad**. | [Sketch de sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [sketch de motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino). **Revisión interna:** todo el equipo; revisión docente pendiente. | El equipo comprobó las conexiones y el funcionamiento después de las correcciones; sin protocolo formal de validación por intento. |
| [Sara — MS03 y MS06](../../participantes/saragdr/dias/E3.md) | Del [compromiso de Sara](../../participantes/saragdr/compromiso.md): **MS03, montar motor y rueda; probar sentido de giro con comandos breves**; **MS06, ensayar cinco encuentros y documentar errores de percepción**. La primera se relaciona con su trabajo; la segunda no queda acreditada como cinco encuentros. | Probó sensores y motores junto con Joel, **ambos corrigieron la alimentación y polaridad**, resoldó conexiones flojas y fijó motores al chasis. | [Registro de pruebas](../../datos/observaciones-dia-03.md). **Revisión interna:** todo el equipo; revisión docente pendiente. | El equipo verificó conexiones y pruebas; motores funcionales tras las correcciones, sin ensayos individuales anotados. |
| [Max — MS01 y MS03](../../participantes/MaxAmCam/dias/E3.md) | Del [compromiso de Max](../../participantes/MaxAmCam/compromiso.md): **MS01, fabricar/ensamblar una versión y validar ajuste**; **MS03, montar motor y rueda; probar sentido de giro**. Su apoyo al cableado está registrado, pero falta confirmar qué parte de estas katas realizó personalmente. | Apoyó pelando cables y en tareas de soldadura durante el montaje. | [Fotografías del montaje](../../evidencias/dia-03/README.md). **Revisor formal:** pendiente. | **Pendiente:** verificación específica asociada a su tarea. |
| [Claudio — MS03, MS07 y MS10](../../participantes/A00574802/dias/E3.md) | Del [compromiso de Claudio](../../participantes/A00574802/compromiso.md): **MS03, identificar polaridad y límites del driver**, y **montar motor y rueda; probar sentido de giro**. Faltan evidencias de ejecución individual de estas katas; el apoyo con cables y soldadura sí se reportó. | Apoyó pelando cables y en tareas de soldadura durante el montaje. | [Fotografías del montaje](../../evidencias/dia-03/README.md). **Revisor formal:** pendiente. | **Pendiente:** verificación específica asociada a su tarea. |

**Identificador de la etapa K1:** `D3-CORREGIDO`, utilizado para identificar el estado físico después de conectar la batería y corregir la polaridad; **no es una etiqueta formal de firmware ni reemplaza un identificador de revisión del repositorio**.

**Verificación interna:** los cuatro integrantes revisaron entre todos las conexiones y las pruebas. Esta comprobación del equipo **no equivale a una aprobación formal del profesor**; la revisión y eventual aprobación docente se realizan después de entregar el E3; no se ha obtenido todavía esa aprobación.

**Otras modificaciones o perturbaciones:** durante el Día 3 se terminó de montar el chasis, se colocaron motores y se resoldaron conexiones. No se registró cuáles de esos cambios se mantuvieron constantes entre todos los intentos.

## 3A · Kaizen 1: problema, mejora y resultado

**¿Qué queremos mejorar?** Conseguir que los dos motores respondan y giren en el sentido correcto dentro del robot.

| Etapa | Qué sucedió | Acción del equipo |
|---|---|---|
| Situación inicial: intento 1 | Los motores no giraban porque la batería no estaba conectada a la tarjeta. | Joel y Sara revisaron las conexiones a la placa y el código, e identificaron la alimentación faltante. |
| Primer cambio | Joel y Sara conectaron correctamente la batería al módulo. | Los motores comenzaron a responder. |
| Segundo problema: intento 2 | Uno de los motores giraba en sentido contrario al esperado debido a la polaridad de su conexión. | Joel y Sara identificaron el sentido incorrecto de giro. |
| Segundo cambio | Joel y Sara corrigieron juntos la polaridad del motor. | Ambos motores quedaron girando correctamente. |
| Comprobación final | Repetimos las pruebas con los motores integrados al carrito; los cuatro integrantes verificaron las conexiones y el funcionamiento. | Todos los intentos posteriores salieron bien según el recuerdo del equipo. |

**Hipótesis de trabajo:** si conectamos correctamente la alimentación y corregimos la polaridad de los motores, ambos podrán responder a las órdenes del programa y girar en el sentido esperado.

**Lo que aprendimos:** una conexión de alimentación faltante y una polaridad invertida pueden impedir que el robot funcione como esperamos, aunque sus componentes estén montados. La mejora se logró revisando cada conexión, corrigiéndola y volviendo a probar.

**Comparación de estados:** `D3-INICIAL` (sin batería conectada, sin giro); `D3-BATERIA` (motores energizados, uno con giro invertido); `D3-CORREGIDO` (ambos motores con giro correcto). Son nombres para distinguir etapas del montaje, no versiones distintas de firmware.

## 4 · Ensayos comparables V1–K1

**Aclaración del registro experimental:** el 28 de octubre (E3) se hicieron pruebas funcionales de sensores y motores, pero no se anotaron mediciones numéricas ni se realizó una calibración formal de los QTR con valores negro/blanco. Las lecturas analógicas de calibración, los umbrales y las primeras pruebas integradas en el dohyō se registraron al día siguiente, el **29 de octubre (E4)**. Su evidencia está en el [E4 del equipo](dia-04.md) y el [registro de tres ensayos a PWM 105](../../datos/e4_pruebas_pwm105_29oct.md), durante los cuales el equipo observó que el robot permaneció dentro de la pista. **Esas pruebas de E4 no reemplazan los cinco pares V1–K1 que solicita el E3.**



**Datos crudos requeridos:** [ensayos.csv](../../datos/ensayos.csv) · **Protocolo:** [protocolo.md](../../pruebas/protocolo.md) · **Observaciones realmente registradas:** [Día 3](../../datos/observaciones-dia-03.md).

La plantilla original incluye **cinco pruebas emparejadas** bajo las mismas condiciones y valores por versión. No contamos con esos datos: el Día 2 no tuvo ensayos funcionales y las pruebas del Día 3 fueron exploratorias, con correcciones efectuadas durante la sesión. Aunque las pruebas se podían registrar simplemente como **sí/no funcionaron** y **sentido correcto/incorrecto**, **no anotamos un resultado por corrida durante la actividad**.

| Prueba emparejada | Condición / escenario idéntico | V1, valor + unidad | K1, valor + unidad | Cambio / resultado | Incidencia o desviación |
|---:|---|---|---|---|---|
| 1 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 2 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 3 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 4 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |
| 5 | Por documentar | Sin medición emparejada | Sin medición emparejada | Pendiente | No se registró un par V1–K1 |

### Secuencia observada, reconstruida después de la sesión

Esta tabla **no sustituye los cinco ensayos emparejados** requeridos: contiene únicamente los hechos que el equipo recuerda, sin inventar filas o valores medidos durante la prueba.

| Intento / grupo de intentos | Funcionamiento reportado | Problema / observación | Acción |
|---|---|---|---|
| 1.º intento de motor | No funcionó | La batería no estaba conectada al módulo | Joel y Sara conectaron la batería |
| 2.º intento de motor | No correcto: un motor giró al revés | Polaridad invertida | Joel y Sara corrigieron la conexión |
| Intentos posteriores (cantidad exacta no documentada) | Funcionaron correctamente, según el equipo | Sin nuevos problemas reportados | Los cuatro integrantes revisaron las conexiones y el resultado |
| Pruebas de sensores (aproximadamente 5 en total) | Todas satisfactorias, según el equipo | Sin fallas reportadas | Joel y Sara hicieron las pruebas; el equipo las verificó |

**N válido de ensayos emparejados V1 / K1:** **0 / 0**. Esto no significa cero éxitos: significa que **no se levantaron corridas comparables por versión**.

**Resumen, variabilidad y tasa de éxito:** se recuerdan **dos intentos iniciales con problemas** y que todos los siguientes funcionaron, dentro de **aproximadamente 10 pruebas de motores en total**. No se calcula un porcentaje de éxito exacto ni una media porque el total de corridas no fue anotado; tampoco hay datos comparables entre V1 y K1. **Las pruebas de sensores no presentaron fallas reportadas**, pero su cantidad aproximada tampoco permite una tasa exacta basada en registros individuales.

**Incertidumbres y limitaciones:** los resultados detallados se reconstruyeron de memoria después de las pruebas; solo se conocen los dos primeros problemas y el resultado general de los ensayos posteriores. Se cambiaron las condiciones de alimentación y conexión. No sería correcto inferir exactamente ocho éxitos, inventar cinco pares de resultados ni calcular una mejora porcentual.

## 4A · Registro y continuidad de las pruebas

**Resumen de resultados:** [Observaciones del Día 3](../../datos/observaciones-dia-03.md) · [Protocolo del equipo](../../pruebas/protocolo.md) · [CSV para ensayos medidos](../../datos/ensayos.csv).

Las pruebas nos permitieron confirmar el funcionamiento básico de los componentes. **No grabamos video de estas pruebas ni hicimos calibración formal de los QTR el Día 3**; nuestras evidencias son las cinco fotografías del robot terminado, los programas de Arduino y el registro cualitativo de lo observado. Las mediciones de negro/blanco y la evasión integrada con sus registros pertenecen al [Día 4](dia-04.md). No se asignan retrospectivamente esas lecturas al E3.

**Cuidado durante los siguientes ensayos:** revisar con el robot desconectado las conexiones, el aislamiento de la tarjeta respecto a la base metálica, la batería y la sujeción de los cables. Para probar el giro de forma segura, mantener las ruedas separadas del suelo cuando corresponda.

## 5 · Interpretación y decisión

| Pregunta de la guía | Interpretación del equipo |
|---|---|
| ¿La evidencia respalda, contradice o no permite decidir la hipótesis? | **Respalda cualitativamente** la hipótesis: el primer intento no funcionó por la batería, el segundo presentó el sentido de giro incorrecto y los siguientes funcionaron tras las correcciones de Joel y Sara. No se demostró con cinco pares de ensayos ni se obtuvo una tasa estadística de mejora. |
| Si no hubo mejora, ¿qué aprendimos? | Sí se observó un cambio favorable en el funcionamiento de los motores. Aprendimos a revisar alimentación y polaridad antes de considerar fallado un componente. |
| ¿Qué riesgo o compromiso generó el cambio? | Manipular conexiones incorrectas puede dañar componentes o producir movimientos inesperados. Debemos revisar polaridad y alimentación con el equipo desenergizado y asegurar el cableado. |
| ¿Qué decidimos hacer con K1 y por qué? | **Conservar el montaje corregido**, ya que los motores funcionaron en las pruebas posteriores. La mejora cuantitativa sigue sin comprobarse por falta de ensayos emparejados. |
| ¿Qué pregunta sigue para Kaizen 2? | ¿Podemos utilizar los QTR y los motores juntos para avanzar sobre negro y evitar el borde blanco del dohyō sin salir de él? |

## 5A · Montaje, evidencias y trabajo del equipo

El chasis quedó ensamblado con su base metálica, dos ruedas motrices, batería, tarjeta controladora, cableado y sensores. **Dimensiones medidas por el equipo: 10 × 10 cm.** Las cinco fotografías muestran el avance respecto al Día 2.

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
| [Joel](../../participantes/A00574713/dias/E3.md) | Consiguió y cargó los programas de Arduino, probó sensores y motores junto con Sara, y **los dos corrigieron los problemas de batería y polaridad**. |
| [Sara](../../participantes/saragdr/dias/E3.md) | Realizó las pruebas junto con Joel, **ambos corrigieron batería y polaridad**, volvió a soldar conexiones flojas o desprendidas y colocó los motores en el chasis. |
| [Max](../../participantes/MaxAmCam/dias/E3.md) | Apoyó con tareas de preparación, como pelar cables y ayudar en la soldadura. |
| [Claudio](../../participantes/A00574802/dias/E3.md) | Apoyó con tareas de preparación, como pelar cables y ayudar en la soldadura. |

**Revisión interna conjunta:** Joel, Sara, Max y Claudio verificaron entre todos las conexiones y pruebas. **La revisión y eventual aprobación del profesor quedan pendientes hasta después de la entrega.**

Cada integrante puede complementar su E3 personal con su aprendizaje y experiencia.

## 6 · Puerta de salida E3

### Seis criterios de cierre de la plantilla original

- [ ] **V1 y K1 tienen referencias inequívocas:** están identificadas sus etapas físicas, pero no se asoció una versión V1 de firmware y cinco ensayos reproducibles a identificadores únicos.
- [ ] **La hipótesis está conectada con una medida y un problema diagnosticado:** hay problema, hipótesis y criterio cualitativo, pero falta una tabla de medidas por intento para evaluar la mejora.
- [x] **Se documentó una modificación técnica y quién participó:** Joel y Sara corrigieron conjuntamente la batería y la polaridad. Los cuatro integrantes revisaron conexiones y pruebas; todavía falta confirmar revisión docente.
- [x] **Ensayos comparables o diferencias expuestas explícitamente:** la guía acepta que se expliquen las diferencias. Se declaró expresamente que **no hubo cinco pares comparables ni registro contemporáneo por intento**, y se separó la reconstrucción verbal de los datos experimentales; sigue pendiente obtener mediciones comparables.
- [x] **Conclusión honesta, incluso si existen resultados negativos:** se conservan los fallos iniciales y los límites de los datos.
- [ ] **E3 personal de cada estudiante:** el [E3 de Joel](../../participantes/A00574713/dias/E3.md) tiene actividades registradas; los archivos individuales de [Sara](../../participantes/saragdr/dias/E3.md), [Max](../../participantes/MaxAmCam/dias/E3.md) y [Claudio](../../participantes/A00574802/dias/E3.md) necesitan revisión y completar sus reflexiones personales.

**Gate E3:** **CONDICIONADO**. **Revisor docente:** revisión y eventual aprobación pendientes hasta después de la entrega. **Revisión interna:** los cuatro integrantes verificaron conexiones y pruebas. **Enlace a PR/commit del experimento:** no identificado en la sesión; se conservan los [sketches de sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) en el repositorio.

### Avances adicionales comprobados

- [x] Montaje físico del mini-sumo documentado con cinco fotografías.
- [x] Pruebas de los cinco sensores y los dos motores realizadas y descritas; sensores sin fallas reportadas y dos primeros intentos de motores con problemas corregidos.
- [x] Problema, dos correcciones y resultado del Kaizen 1 documentados.
- [x] Resultados cualitativos, secuencia de los dos primeros intentos y cantidad aproximada de pruebas registrados, con límites de memoria identificados.
- [x] Incorporados los dos programas `.ino` originales de sensores y motores.
- [x] Registradas las tareas de Joel, Sara, Max y Claudio, incluida la corrección conjunta de Joel y Sara y la revisión interna de todo el equipo; se aclaró que no se grabó video.
- [ ] Registrar por separado las corridas de una prueba repetible para comparar resultados numéricos.
- [ ] Claudio debe completar su E3 personal; Joel, Sara y Max ya tienen sus registros. La revisión docente se hará después de la entrega.
- [ ] Revisión del profesor Camilo René Duque.

**Estado del registro E3:** documentación del Día 3 cerrada **con las evidencias reales disponibles**: ruta de 180 minutos, diagnóstico, Kaizen 1, cinco fotografías, códigos, aportaciones de los cuatro integrantes y límites de la medición. **Gate formal condicionado** por no contar con cinco pares V1–K1 ni resultados medidos por intento, faltar el E3 individual de Claudio y estar pendiente la revisión docente posterior a la entrega. Los ensayos y calibraciones posteriores se documentan únicamente en [E4](dia-04.md). No se eliminaron apartados de la plantilla.

**Siguiente reto, Kaizen 2:** utilizar los sensores y los motores en conjunto para que el robot detecte el borde blanco del dohyō y realice la maniobra programada para evitar salir de la pista.
