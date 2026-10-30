---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E4"
dia: 4
responsable_registro: "equipo"
estado: "REGISTRADO_CON_RESTRICCIONES"
fecha: "2026-10-29"
revision_docente: "PENDIENTE"
---

# E4 · Día 4 — ITERAR | Kaizen 2, robustez y preparación de demostración



## 0 · Contexto

**Fecha y dōjō:** 29 de octubre de 2026 · Laboratorio de Electrónica, CTA, Campus León. **Equipo/misión:** Tormenta Negra · M01, mini-sumo autónomo.

**Versiones trazables:** **V1** (Día 2: conexiones y primer montaje, sin función integrada probada) · **K1** (Día 3, estado `D3-CORREGIDO`: sensores y motores funcionales después de conectar la batería y corregir la polaridad; no equivale a una versión de firmware ensayada sobre la pista) · **K2** (Día 4: [evasión con PWM 145](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), [evasión con PWM 105](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino) y [código posterior de búsqueda y ataque](../../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino)). Estas denominaciones identifican las etapas; no se atribuyen a V1 y K1 mediciones que no tuvieron.

**Resultado destacado:** en K2 se realizaron **seis pruebas de evasión de 15 s**, tres a PWM 145 con salidas ocasionales y tres a PWM 105 **sin salidas observadas**. Después de sustituir la tarjeta dañada, se cargó el código de búsqueda y ataque; **al primer intento el robot detectó y expulsó un teléfono del dohyō sin salirse del negro**. Fue una prueba con un objeto, no un combate oficial.

**Montaje:** **Sara pegó la navaja al chasis con ayuda de Max**. **Claudio diseñó la carcasa CAD y la mandó a imprimir, pero NO se ensambló en el robot durante E4.** Las [dos vistas CAD ya están en la galería del Día 4](../../evidencias/dia-04/README.md). **Joel** hizo el código y, con **Max y Claudio**, cambió conexiones y componentes a la tarjeta de reemplazo. La causa del daño de la tarjeta anterior no se diagnosticó formalmente. El receptor infrarrojo D12 continúa sin integrarse al firmware.

## 1 · Ruta de actividades del Día 4 (180 min)

Los minutos son **bloques de la guía**, no un cronometraje de lo que duró cada actividad.

| Actividad | Minutos | Registro requerido |
|---|---:|---|
| Revisión por pares y retroalimentación | 0–20 | Algunos integrantes del **equipo Artemis** revisaron el mini-sumo y recomendaron motores de mayor rendimiento y más sensores para reconocer al rival antes. No se implementaron esas sugerencias durante E4. |
| Diseño/ejecución Kaizen 2 | 20–70 | Joel se encargó del código y **propuso disminuir avance PWM de 145 a 105** después de observar salidas. Sara y Max pegaron la navaja; Claudio diseñó y mandó a imprimir la carcasa, aún sin instalar. |
| Comparación V1–K1–K2 | 70–115 | Se documentó V1 montaje, K1 prueba de componentes y K2 movimiento integrado. K2 produjo tres ejecuciones a 145 y tres a 105. **No existen ensayos emparejados equivalentes de las tres etapas**, como exige la guía. |
| Ensayo de robustez | 115–145 | Con 145 hubo giros por manchas blancas y salidas ocasionales. Se recalibraron QTR y se ensayó PWM 105 tres veces sin salidas. Una prueba posterior con teléfono verificó expulsión sin salida del robot. |
| Preparación de demo | 145–165 | Guion de cuatro intervenciones y contingencia preparado: Claudio (CAD/contexto), Joel (código/ataque), Max (pruebas/comparación), Sara (navaja/cierre). El ensayo real de la exposición todavía no está confirmado. |
| Gate de preparación | 165–180 | Registramos las tareas para la siguiente jornada: pesar el robot cuando tengamos báscula, ensayar la presentación y comprobar el control y la alimentación. Enlazamos los dos videos y los E4 personales de [Joel](../../participantes/A00574713/dias/E4.md), [Sara](../../participantes/saragdr/dias/E4.md), [Max](../../participantes/MaxAmCam/dias/E4.md) y [Claudio](../../participantes/A00574802/dias/E4.md). |

## 2 · Revisión por pares

| Persona o equipo observador (alias) | Evidencia revisada | Observación útil / pregunta | Respuesta técnica y decisión | Cambio aceptado o descartado |
|---|---|---|---|---|
| Compañeros del **equipo Artemis**; nombres específicos no registrados | Robot mini-sumo Tormenta Negra y su funcionamiento | **Recomendación 1:** cambiar por motores mejores para la competencia. **Recomendación 2:** agregar más sensores para detectar rivales con mayor rapidez. | Escuchamos ambas recomendaciones, pero en E4 no cambiamos motores ni añadimos sensores. Joel propuso reducir el PWM de 145 a 105 después de observar las salidas. | **No implementadas en E4**: no se cambiaron motores ni se añadieron sensores. No se ha confirmado una decisión posterior. |

**Acuerdo de colaboración:** recibimos los consejos de Artemis y distinguimos las recomendaciones externas de la decisión de velocidad que tomó Joel. El equipo se repartió las labores técnicas: **Joel** (código y pruebas con Sara/Max), **Sara** (navaja y pruebas), **Max** (navaja, pruebas y traslado a placa nueva), **Claudio** (carcasa CAD y traslado a placa nueva). 

## 3 · Segundo ciclo Kaizen (K2)

| Campo experimental | Completar |
|---|---|
| Limitación o nueva oportunidad detectada en K1 | En el Día 3 los motores y los cinco sensores funcionaron **por separado**, pero aún no se habían probado como sistema integrado sobre la pista. Las primeras pruebas integradas del Día 4 a PWM 145 mostraron giros inesperados por manchas blancas y salidas ocasionales. |
| Hipótesis K2 y fundamento | Si se da prioridad a los QTR para retroceder y girar ante blanco y se reduce el avance de **PWM 145 a 105**, el robot podrá reaccionar antes de salirse del dohyō. Esta reducción fue propuesta por **Joel**. También se recalibraron sensores, así que no es una comparación de una sola variable. |
| Variable modificada y controles | Cambio de PWM de avance **145 → 105** y **nueva calibración** de QTR. Primera tanda: negro/ blanco izquierda **1022/956**, derecha **821/34**, umbrales **989/427**. Segunda tanda: izquierda **749/31**, derecha **873/39**, umbrales **390/456**. Se utilizó el dohyō, con 3 ejecuciones de 15 s por tanda. La calibración y las condiciones de superficie no quedaron idénticas entre tandas. |
| Requisitos de seguridad antes del cambio | Verificar polaridad, batería y compatibilidad de alimentación de la tarjeta antes de energizar; no conectar USB y batería simultáneamente sin confirmar que la placa lo permite. Desconectar alimentación antes de mover cables, comprobar fijación de navaja y motores, mantener acceso a paro físico. La placa anterior se dañó; **no está confirmada la causa exacta**. |
| Personas responsables y alcances implicados | **Joel:** programación completa, propuesta de velocidad y pruebas con Sara y Max. **Sara:** pegado de navaja con ayuda de Max y pruebas. **Max:** apoyo en navaja, pruebas y sustitución de placa. **Claudio:** diseño/envío a impresión de carcasa y sustitución de placa. **Joel, Max y Claudio** trasladaron conexiones a la nueva tarjeta. |
| Cambio exacto de código/CAD/configuración | Lectura QTR **A2/A3**, sensores de oponente **D2/A5/A4**, motores **D5/D6 y D10/D11**. El avance PWM pasó de 145 a 105; QTR recalibrados. **Claudio** diseñó la [carcasa CAD](../../evidencias/dia-04/README.md), enviada a impresión sin instalar en E4. **Sara y Max** pegaron la navaja al chasis. Luego Joel cargó en la placa de reemplazo el [sketch exacto de competencia sin control remoto](../../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino). |
| Enlace a commit, PR y versión K2 | [Sketch inicial PWM 145](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) · [K2 PWM 105](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino) · [Código completo de búsqueda y ataque](../../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino) · [Commit que incorporó el código final](https://github.com/a00574713-cloud/Kaizen-Dojo---Tormenta-Negra/commit/812f1852cab7ee89aefb691d6fb77f1ce4155aa2) · [vistas CAD](../../evidencias/dia-04/README.md). No se documentó PR ni etiqueta formal de versión durante la sesión. |
| Métrica, unidad y criterio para declarar éxito | **Permanencia dentro del dohyō** (sí/no por ejecución), conteos de mensajes `BORDE` por programa, y ataque al objeto (expulsión sí/no). Objetivo: reaccionar al blanco, permanecer dentro y empujar al rival. Con PWM 105 se reportaron **0 salidas en tres pruebas**. Los avisos `BORDE` no son un conteo de evasiones exitosas. |

## 4 · Comparación de evolución

**En E4 sí hubo una comparación directa entre dos versiones del código de evasión:** **3 pruebas de 15 s con el código inicial (PWM 145)** y **3 pruebas de 15 s con el código modificado (PWM 105)**. Se comparan abajo por número de ejecución (1 con 1, 2 con 2 y 3 con 3), **sin afirmar que se controlaron todas las condiciones**: también se recalibraron los QTR. Ambos códigos pertenecen al **Kaizen 2 del Día 4 (K2)**. Las etapas **V1 (E2)** y **K1 (E3)** no tuvieron pruebas de evasión equivalentes. 

| Ensayo/condición equivalente | V1 (valor + unidad) | K1 (valor + unidad) | K2 (valor + unidad) | Incidencias o validez |
|---:|---|---|---|---|
| 1 | E2: sin prueba de evasión | E3: sin prueba integrada de evasión | **Código inicial PWM 145:** 15 s, **12 avisos** (9 izq., 3 der.). **Código modificado PWM 105:** 15 s, **11 avisos** (7 izq., 4 der.). | Primera tanda con salidas ocasionales **sin desglose por intento**; segunda tanda **sin salidas observadas**. Cambió la calibración. |
| 2 | E2: sin prueba de evasión | E3: sin prueba integrada de evasión | **Código inicial PWM 145:** 15 s, **12 avisos** (5 izq., 7 der.). **Código modificado PWM 105:** 15 s, **13 avisos** (8 izq., 5 der.). | Segunda tanda **sin salidas observadas**; en la primera no se registró salida por ensayo. No fueron condiciones idénticas. |
| 3 | E2: sin prueba de evasión | E3: sin prueba integrada de evasión | **Código inicial PWM 145:** 15 s, **12 avisos** (6 izq., 6 der.). **Código modificado PWM 105:** 15 s, **11 avisos** (9 izq., 2 der.). | Segunda tanda **sin salidas observadas**; en la primera no se registró salida por ensayo. No fueron condiciones idénticas. |
| 4 | Sin calibración ADC documentada | Sensores probados funcionalmente, sin valores ADC de calibración | **QTR izquierdo:** contraste negro–blanco de 66 a 718 ADC; umbral de 989 a 390. **QTR derecho:** contraste de 787 a 834 ADC; umbral de 427 a 456. | La calibración cambió entre las dos tandas de K2. Registro de calibración, no una cuarta ejecución. |
| 5 | Sin prueba de ataque | Sin prueba de ataque integrada | **Código posterior de búsqueda y ataque:** primer intento contra un teléfono, **expulsión exitosa (1/1)** y robot dentro del negro; tiempo no medido. | Prueba posterior con tarjeta de reemplazo y otro programa; es una prueba posterior de ataque, no una comparación V1–K1–K2. |

**Comparación real entre los dos programas de E4:** el **primer código PWM 145** acumuló **36 avisos de borde** (20 izquierda, 16 derecha) en **3 ejecuciones** de 15 segundos; el **segundo código PWM 105** acumuló **35 avisos** (24 izquierda, 11 derecha) en **otras 3 ejecuciones** de 15 segundos. En la primera tanda se observaron algunas salidas del dohyō, **sin registrar cuántas ni en qué intento**; en la segunda, **0 de 3 ejecuciones tuvieron salidas observadas**. Los avisos del programa **no son un conteo de evasiones exitosas**.

**Alcance de la comparación:** sí se repitió la prueba **tres veces por código**, pero **no se realizaron cinco comparaciones V1–K1–K2**, porque V1 y K1 fueron etapas físicas anteriores. Tampoco puede atribuirse la mejora únicamente a PWM, ya que cambiaron los umbrales y la calibración QTR.

**Registros fuente:** [datos/ensayos.csv](../../datos/ensayos.csv) (**7 filas organizadas después de la sesión a partir de los registros: 6 ejecuciones de evasión y 1 de ataque**) · [registro original PWM 145](../../datos/e4_monitor_serie_29oct.txt) · [observaciones PWM 145](../../datos/observaciones-dia-04.md) · [registro y comparación PWM 105](../../datos/e4_pruebas_pwm105_29oct.md) · [protocolo](../../pruebas/protocolo.md). No realizamos cinco ensayos equivalentes para V1, K1 y K2.

**Síntesis (método, n, media/mediana, dispersión y éxito cuando proceda):** el método fue observar el movimiento en el dohyō durante tres ejecuciones a cada velocidad. En la tanda PWM 105, **3/3 ejecuciones sin salidas observadas**. Los avisos por ejecución fueron **11, 13, 11** (media = **11,67**, mediana = **11**, rango = **11 a 13**, en unidades de mensajes impresos), frente a **12, 12, 12** con PWM 145 (media y mediana = **12**, rango = **12 a 12**). Esta estadística de mensajes **no mide directamente la tasa de evasión** y no prueba mejora porcentual. No calculamos tasas de mejora entre V1, K1 y K2 porque no hicimos cinco ensayos equivalentes.

**¿Qué mejora, qué empeora y qué no podemos concluir?** K2 consiguió detección del blanco, evasión y búsqueda/ataque. Al reducir la velocidad y recalibrar los QTR, el robot permaneció en la pista en tres pruebas, y posteriormente **expulsó un teléfono al primer intento sin salirse**. No sabemos qué proporción de la mejora provino de la velocidad versus la calibración; tampoco si se mantendrá contra otro mini-sumo o en otras superficies. El primer PCB se dañó y debió reemplazarse, sin diagnóstico confirmado de la causa.

## 5 · Ensayo de robustez o variación de condiciones

| Cambio controlado de entorno (luz, suelo, batería, posición, rival, obstáculo o carga) | Riesgo y límite seguro | Predicción | Resultado / unidad / éxitos | ¿Se mantiene el objetivo? | Evidencia |
|---|---|---|---|---|---|
| **Manchas blancas internas sobre la superficie negra** (condición observada, **no perturbación controlada**) | Giros innecesarios y salidas; probar bajo supervisión y detener ante riesgo | El robot puede interpretar manchas como borde | Tanda PWM 145: se observaron giros repentinos y algunas salidas; cantidad por intento no registrada | **Parcialmente**: reaccionó al blanco pero algunas veces abandonó la pista | [Observaciones iniciales](../../datos/observaciones-dia-04.md) |
| **Reducir PWM de 145 a 105 con nueva calibración QTR** (cambiaron dos condiciones, **no se aisló una variable**) | Evitar colisiones involuntarias y mantener interruptor/apagado accesible | Reaccionará al borde sin salir | Tres ejecuciones de 15 s: **0 salidas observadas** en las tres | **Sí, para estas 3 ejecuciones**; no se prueba robustez universal | [Resultados PWM 105](../../datos/e4_pruebas_pwm105_29oct.md) |
| **Teléfono como objeto de ataque en el dohyō**, con código de búsqueda y ataque en tarjeta nueva | Riesgo para el teléfono, el robot y el borde; no usar objetos frágiles en repetición y tener apagado accesible | Detectará y empujará el objeto sin salirse | **Primer intento: detectó y sacó el teléfono; robot dentro del negro**. Sin tiempo medido. | **Sí, en una prueba**, no combate oficial | [Código que se probó](../../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino) · [Video del ataque al iPhone](https://drive.google.com/file/d/1iSG-wS0bjlPaMLpgNtAW83iZ4RGNMvs3/view?usp=drivesdk) |

**Límites de inferencia:** seis pruebas de evasión (3+3) y un intento adicional exitoso con teléfono. No se variaron de forma aislada luz, suelo, velocidad, calibración ni batería; tampoco se registraron los giros innecesarios por intento. Falta una prueba controlada bajo condiciones equivalentes y ensayo contra otro mini-sumo. **La robustez observada se documenta con esas limitaciones**, sin afirmar resultados no medidos. Videos de E4: [Tormenta Negra funcionando](https://drive.google.com/file/d/1a6mugpORP3xKJwx6JwA79JXIj8vCLtsT/view?usp=drivesdk) y [Tormenta Negra tirando iPhone](https://drive.google.com/file/d/1iSG-wS0bjlPaMLpgNtAW83iZ4RGNMvs3/view?usp=drivesdk). [Galería CAD E4](../../evidencias/dia-04/README.md).

## 6 · Ensayo general de demostración

Preparamos el guion con cuatro intervenciones y una alternativa para presentar las evidencias si fallaba el robot. No registramos un ensayo completo de la exposición durante E4.

| Segmento | Qué se demostrará en 20–60 s | Integrante responsable | Versión/código usado | Material requerido | Plan B ante fallo |
|---|---|---|---|---|---|
| Inicio / contexto | **30–40 s:** misión M01, dimensiones 10 × 10 cm y diseño CAD de la carcasa; aclarar que no se instaló durante E4 | **Claudio** | [Carcasa CAD diseñada por Claudio](../../evidencias/dia-04/README.md) y prototipo E4 | Dos imágenes del CAD y robot | Mostrar las capturas CAD y explicar el montaje si la pieza no está lista |
| Prueba principal | **45–60 s:** programación por Joel, detección de blanco con QTR, búsqueda del rival con IR y movimiento de ataque | **Joel** | [Sketch final de búsqueda/ataque sin control remoto](../../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino) | Robot, dohyō, batería con conexión revisada y apagado accesible | Reproducir video de movimiento o de expulsión del teléfono; no repetir maniobras riesgosas |
| Evidencia de mejora | **35–45 s:** explicar pruebas PWM 145/105, recalibración, cambio de placa y resultado 0/3 salidas en segunda tanda | **Max** | [Comparación PWM 145/105](../../datos/e4_pruebas_pwm105_29oct.md) | Tablas, logs y videos | Explicar resultados ya registrados si no puede repetirse la prueba |
| Defensa de fronteras | **30–45 s:** explicar cómo Sara y Max pegaron la navaja, función mecánica y lo pendiente antes de competir; todos responden por su alcance | **Sara** | Montaje físico y [E4 del equipo](dia-04.md) | Navaja pegada al chasis, bitácoras personales | Mostrar el robot y explicar el montaje sin necesidad de encenderlo |

**Próxima competencia:** RoboLympics, prevista para el 21 de noviembre de 2026. El Día 4 trabajamos en las pruebas previas y la preparación. **Guion previsto:** aproximadamente 2 min 20 s a 3 min 10 s, sin contar preguntas ni maniobras adicionales.

## 7 · Gate E4

- [x] Existe un ciclo K2 explícito, con hipótesis, modificación y datos: cambio de avance, calibración QTR, seis pruebas y ataque con teléfono documentados.
- [x] Se conservan V1, K1, K2 y, en su caso, reversiones para reproducibilidad: [E2/V1](dia-02.md), [E3/K1](dia-03.md), [K2 inicial PWM 145](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), [K2 PWM 105](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino), [competencia sin remoto](../../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino).
- [x] Se efectuó una prueba de robustez documentada o se justificó por qué no era segura/factible: registro de manchas, nuevas pruebas PWM 105 sin salidas y ataque contra teléfono; **no fueron ensayos plenamente controlados**, lo cual se reconoce.
- [x] El equipo tiene guion, responsabilidades y plan de contingencia para D5: cuatro segmentos asignados a Claudio, Joel, Max y Sara, con plan B. **El ensayo práctico aún no se ha realizado.**
- [ ] **E4 personales:** [Joel](../../participantes/A00574713/dias/E4.md) · [Sara](../../participantes/saragdr/dias/E4.md) · [Max](../../participantes/MaxAmCam/dias/E4.md) · [Claudio](../../participantes/A00574802/dias/E4.md).

**Estado al terminar E4:** hicimos dos programas de evasión, tres pruebas con cada PWM y una prueba de ataque con un teléfono. Quedaron para el Día 5 el ensayo de la presentación, la revisión del control, la comprobación de alimentación y el pesaje cuando hubiera báscula. La carcasa de Claudio se diseñó y mandó a imprimir en E4; se colocó después. **Revisión docente:** pendiente. [Vistas CAD](../../evidencias/dia-04/README.md).
