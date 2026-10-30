---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E5"
dia: 5
responsable_registro: "equipo"
estado: "DOCUMENTADO_PENDIENTE_REVISION_DOCENTE"
fecha: "2026-10-30"
revision_docente: "PENDIENTE"
---

# E5 · Día 5 — DEMOSTRAR | Desafío, defensa técnica y cierre Kaizen

> **Regla:** sustituir los corchetes, registrar lo realmente observado y enlazar a evidencias del repositorio. **No inventar datos ni marcar pruebas no realizadas.** Los archivos del equipo resumen el trabajo compartido; las reflexiones y evidencias personales van en `participantes/<alias>/dias/E5.md`.

## 0 · Identificación del evento y sus límites

| Campo | Valor |
|---|---|
| Fecha / equipo / misión y plataforma | 30 de octubre de 2026 · Tormenta Negra · M01, robot mini-sumo autónomo con Arduino compatible. |
| Dōjō o espacio exacto, bloque horario y supervisor | Laboratorio de Electrónica, CTA, Campus León · horario presencial de 9:00 a 12:00 h · supervisor y responsable de seguridad: profesor Camilo, quien autorizó pruebas y combates. |
| Modalidad real | Minicompetencia interna de salón confirmada por el equipo: **3 pruebas previas** y **2 peleas** contra un robot del equipo de Marian. |
| ¿Participación en Robolympics posterior? | **Confirmada por el equipo para el 21 de noviembre de 2026** (RoboLympics). No se añadió documentación externa de la convocatoria o registro. |
| Versión final congelada y enlace al código/CAD | **E5 V1** utilizada en las pruebas 1–3 ([sketch](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino)); **E5 V2** utilizada en las peleas 1–2 ([sketch](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino)). Joel desarrolló y ajustó los códigos. **E5 V2 quedó como último programa instalado**, según confirmación del equipo. Commit exacto de la compilación cargada no registrado. [CAD previo y vistas](../../evidencias/dia-04/README.md); **piezas impresas en 3D instaladas durante E5**, documentado en el E5 personal de Sara. |
| Objetivo demostrable y criterio de éxito | Detectar y enfrentar a otro mini-sumo, expulsarlo del dohyō **sin que Tormenta Negra salga**. Medir duración (s), salida de rival (sí/no), salida propia (sí/no) y resultado de cada intento. |
| Acceso autorizado a espectadores/evidencias | [Cinco videos en Google Drive](../../evidencias/dia-05/README.md), cuya existencia se verificó. El equipo confirma que **Camilo puede abrir los cinco videos**; se desconoce si existe autorización de difusión pública o política de retención. La demostración se realizó ante Camilo y los compañeros del salón. |

## 1 · Ruta de la experiencia final (180 min)

| Actividad | Minutos | Evidencia requerida |
|---|---:|---|
| Seguridad y chequeo previo | 0–20 | Camilo autorizó el uso del laboratorio y los enfrentamientos. Se revisaron batería, cables, motores, sensores, navaja y fijaciones. El control MicroStart permitió **arrancar con botón 1 y detener con botón 2**; **botón 3 no funcionó**. Área despejada y supervisada; se disponía de desconexión de batería para cortar alimentación. No hubo procedimiento formal de emergencia. |
| Ensayo de demostración | 20–45 | **Tres pruebas previas E5 V1** contra el robot del equipo de Marian: 13 s favorable (rival expulsado y Tormenta Negra dentro), 5 s favorable (rival salió al esquivarlo y Tormenta Negra dentro) y 5 s parcial/fallida (detección lateral insuficiente y expulsión propia). [Videos](../../evidencias/dia-05/README.md). |
| Desafío/competencia/exhibición interna | 45–135 | **Dos peleas E5 V2** contra robot del equipo de Marian: victoria de 10 s (contragolpe lateral) y derrota de 5 s (giro desfavorable). [Registro y videos](../../evidencias/dia-05/README.md). |
| Reflexión sobre frontera e intercambio | 135–165 | Cada integrante explicó ante el profesor Camilo y sus compañeros qué aprendió. Joel contó que comenzó sin conocimientos sobre mini-sumos ni esos sensores y que terminó muy satisfecho por todo lo aprendido. El equipo recibió felicitaciones por el trabajo realizado; no se identificó al emisor de cada felicitación. Las fallas de seguimiento lateral y giro se registraron en los ensayos. |
| Ritual de cierre y siguiente paso | 165–180 | Se realizó un cierre en el que los cuatro integrantes hablaron de sus aprendizajes. Claudio se llevó el robot y la batería a su casa para entregarlos posteriormente; **ningún material había sido devuelto aún al laboratorio**. Se propuso seguir mejorando sensores y estrategias de combate para RoboLympics. |

**Nota sobre tiempos:** los rangos 0–180 min son bloques fijados por la plantilla; **no son tiempos reales medidos** de la sesión. Solo se reportaron las duraciones de cada intento (13, 5, 5, 10 y 5 s).

## 2 · Checklist de seguridad antes de operar

- [x] Infraestructura, supervisor y operación autorizados (profesor Camilo; 9:00–12:00, Laboratorio de Electrónica del CTA).
- [x] Batería, cables, motores, sensores, navaja y fijaciones revisados, según el equipo. No se informó medición de corriente o comprobación técnica de límites del driver.
- [ ] El **botón 2 sí detenía los motores**, y había posibilidad de desconectar la batería; el área estuvo despejada. Sin embargo, **el botón 3 no funcionó** y **no se estableció ni practicó un procedimiento formal de contingencia**. No se marca toda la condición como cumplida.
- [x] Última versión identificada: [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), reportada como último código instalado; sin identificación del commit binario exacto.
- [ ] No hubo ruta o procedimiento formal de emergencia ni verificación documentada de permisos de grabación. El equipo confirma que todos participaron y que Camilo puede ver los videos; no equivale a permisos para difusión pública.

**Observación o NO-GO de seguridad:** no se reportaron incidentes. El paro remoto funcionó con **botón 2**, no con el botón 3 previsto inicialmente; el apagado físico disponible era **desconectar la batería**, sin interruptor dedicado confirmado. No hubo procedimiento formal de emergencia. **Antes de RoboLympics debe corregirse y comprobarse el esquema de START/STOP y la contingencia.** **Autoriza:** profesor Camilo, 30 de octubre de 2026 (según el equipo); no se atribuye un acta o firma que no se proporcionó.

## 3 · Registro de demostración de la misión

| Intento | Versión/condiciones | Métrica y unidad | Resultado/éxito-fallo | Incidente o razón de fallo | Evidencia |
|---:|---|---|---|---|---|
| 1 | **Prueba previa · E5 V1**; ataque a otro mini-sumo en el dohyō | **13 s**; rival fuera: **sí**; salida propia: **no** | **Favorable**: Tormenta Negra expulsó al otro mini-sumo. | Rival: robot del equipo de Marian; prueba previa, no pelea oficial. | [Video 1](https://drive.google.com/file/d/156-m4t9S7BHtS6NTZN-u2_YC-Cp1xZfZ/view?usp=sharing) |
| 2 | **Prueba previa · E5 V1**; ataque y respuesta contra mini-sumo | **5 s**; rival fuera: **sí**; salida propia: **no** | **Favorable**: Tormenta Negra realizó un giro evasivo y el rival terminó fuera. | Rival: robot del equipo de Marian; salió **al ser esquivado**, no por expulsión directa documentada. | [Video 2](https://drive.google.com/file/d/18nhaoM7tSiE98WnWXMV8dTaJPr6UCGnj/view?usp=sharing) |
| 3 | **Prueba previa · E5 V1**; oponente lateral | **5 s**; salida propia: **sí**; rival fuera: **no** | **Parcial/fallida**: detección lateral insuficiente y Tormenta Negra fue expulsado. | Rival: robot del equipo de Marian; Tormenta Negra no logró responder correctamente al oponente situado a un costado. | [Video 3](https://drive.google.com/file/d/1PouI7jmeKDEtzUMt4pYGqSoV6_QFshdO/view?usp=sharing) |
| 4 | **Pelea 1 · E5 V2**; rival: robot del equipo de Marian | **10 s**; rival fuera: **sí**; salida propia: **no** | **Victoria** de Tormenta Negra; contragolpe lateral expulsó al rival. | Empezó con choque frontal; luego logró el contragolpe, sin salir del dohyō. | [Video 4](https://drive.google.com/file/d/10eXbs30Vywk6ARkTiYR8rB9FN5MmFf93/view?usp=sharing) |
| 5 | **Pelea 2 · E5 V2**; mismo rival del equipo de Marian | **5 s**; rival fuera: **no**; salida propia: **sí** | **Derrota**: el rival expulsó a Tormenta Negra. | Un giro de Tormenta Negra favoreció el ataque del oponente. | [Video 5](https://drive.google.com/file/d/1ug7hRhPOlx5qsrZemrKEpTTV61gljSuw/view?usp=sharing) |

**Procedimiento y datos crudos:** [protocolo de pruebas](../../pruebas/protocolo.md) · [CSV E5 con cinco registros](../../datos/e5_ensayos_30oct.csv) · [índice de los cinco videos](../../evidencias/dia-05/README.md). **Resumen de resultados:** **n = 5 intentos** contra el robot del equipo de Marian; **3 pruebas previas** (2 favorables y 1 parcialmente satisfactoria que terminó en salida propia) y **2 peleas del salón** (**1 victoria, 1 derrota**); duraciones **13, 5, 5, 10 y 5 s**, suma **38 s** y media **7.6 s**. **Limitación:** no son cinco peleas bajo idénticas condiciones: las tres primeras utilizaron E5 V1 y las dos siguientes E5 V2. No se informó de cambios físicos adicionales entre ambas tandas. La sustitución de V1 por V2 sí fue un cambio de firmware. Los tiempos y resultados fueron proporcionados por el equipo y no se revisó el contenido visual cuadro a cuadro.

**Métricas por plataforma (escoger, no inventar):** M01 detección rival y salidas; M03 vueltas válidas, tiempo y pérdidas de línea; M04 estaciones/precisión visual, altura y aterrizajes seguros; M05 estaciones alcanzadas, error y seguridad ante obstáculos.

## 4 · Defensa individual de fronteras (cada estudiante completa su E5 personal)

| Alias | Alcance(s) original(es) | Qué aportó realmente / enlace a evidencia | Antes no podía... | Ahora puedo... | Demostración de capacidad ante otro | Feedback de par o profesor |
|---|---|---|---|---|---|---|
| **Joel** (`A00574713`), **Sara** (`saragdr`), **Max** (`MaxAmCam`), **Claudio** (`A00574802`) | Joel: **D · DOMINAR, F1 · INTEGRAR, MS01 y MS06**; Sara: **S · SUPERAR, F1 · INTEGRAR, MS03 y MS06**; Max: **S · SUPERAR, F1 · INTEGRAR, MS01 y MS03**; Claudio: **D · DOMINAR, F1 · INTEGRAR, MS03, MS07 y MS10** (según compromisos originales; no afirmar que todos los katas se completaron). | **Joel:** programación e integración de [V1](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino), [V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), control y sensores. **Sara:** volvió a fijar motores, corrigió contacto de ruedas con suelo y colaboró en colocar piezas 3D ([E5 personal](../../participantes/saragdr/dias/E5.md)). **Max y Claudio:** colaboraron en volver a fijar piezas desprendidas, según el equipo. **Claudio:** había diseñado [CAD](../../evidencias/dia-04/README.md). | Joel: no sabía construir ni programar un mini-sumo ni trabajar con esos sensores; Sara: conocía motores y sensores, pero necesitaba retomar su integración; Max y Claudio: consultar sus compromisos y reflexiones personales. | Joel: integrar la programación y comprobar el robot en cinco intentos; Sara: corregir fijación y altura de motores; Max y Claudio: ajustes de montaje. Todos explicaron qué aprendieron ante profesor y compañeros. | **Los cuatro participaron en una exposición breve ante Camilo y el grupo**, compartiendo sus aprendizajes. [Cinco registros de funcionamiento y combate](../../evidencias/dia-05/README.md); la contribución personal no se infiere solo del resultado grupal. | El equipo recibió felicitaciones por los resultados; no se identificó de quién procedía cada felicitación. Sara también registra que otro equipo comentó que el robot tenía potencial. |

**Ver portafolios individuales:** [Joel](../../participantes/A00574713/dias/E5.md) · [Sara](../../participantes/saragdr/dias/E5.md) · [Max](../../participantes/MaxAmCam/dias/E5.md) · [Claudio](../../participantes/A00574802/dias/E5.md). Joel y Sara ya tienen sus E5 personales registrados; los de Max y Claudio permanecen pendientes de respuesta individual. No basta con observar que el robot gana o funciona para validar fronteras individuales.

## 5 · Evaluación de la experiencia y cierre Design Thinking

| Pregunta para validar la experiencia | Respuesta basada en evidencia (no solo opinión) |
|---|---|
| ¿Qué elecciones del catálogo C2 tuvieron sentido para diferentes niveles de entrada? | No se indicó qué opciones del catálogo C2 fueron más adecuadas según el nivel inicial. **La evaluación de elección por niveles quedó sin dato**, aunque se utilizaron los alcances de MS01, MS03, MS06, MS07 y MS10 establecidos en los compromisos individuales; no consta que todos hayan sido completados. |
| ¿Qué katas fueron útiles, redundantes o faltaron? | En la práctica fueron útiles el diagnóstico de [JS40F](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Diagnostico_JS40F_E5/Diagnostico_JS40F_E5.ino), el montaje y ajuste de motores y la integración de V1/V2. El equipo **no identificó katas innecesarios ni pudo evaluar cuáles faltaron**; no se asigna una opinión que no expresó. |
| ¿Los materiales y el dōjō habilitaron el trabajo sin exclusiones? | El equipo confirmó **materiales y herramientas suficientes** y que **los cuatro pudieron participar** en las actividades. No se hizo una evaluación formal de accesibilidad, pero tampoco se reportaron exclusiones por falta de recursos. |
| ¿Hubo evidencia de dos ciclos de mejora técnica? | Sí se documentaron **K1** (corrección de alimentación y polaridad de motores en [E3](dia-03.md)) y **K2** (ajuste de PWM y QTR en [E4](dia-04.md)); en E5 se compararon en uso **V1** (3 pruebas, una falla lateral) y **V2** (2 peleas, una victoria y una derrota). No hubo comparación controlada bajo condiciones idénticas. |
| ¿Qué se debería rediseñar para la próxima iteración? | El equipo quiere **más tiempo para mejoras de hardware y software, más sensores y más estrategias de combate**. Se debe corregir el giro cerca del rival, pues la [prueba 3 y pelea 2](../../evidencias/dia-05/README.md) acabaron con expulsión propia. También falta corregir la asignación START/STOP del control y ensayar una contingencia formal. |
| ¿La experiencia protegió confianza, autonomía, pertenencia y seguridad? | El equipo describió el apoyo y la autonomía como **muy buenos**; todos participaron y recibieron felicitaciones. Durante las cinco ejecuciones no se reportaron incidentes. Sin embargo, **no existió procedimiento formal de emergencia**, el botón 3 no detuvo el robot y los permisos de grabación no se documentaron, por lo que el criterio de seguridad solo puede considerarse **parcial**. |

**Feedback externo o de otra pareja/equipo:** el equipo recibió **felicitaciones por lo conseguido** durante E5 (no se registró el nombre de quienes las expresaron). Sara registra que integrantes de otro equipo dijeron que el robot **tenía potencial**. Las sugerencias técnicas del equipo Artemis pertenecen a [E4](dia-04.md), no al E5.

## 6 · Cierre, transferencia y archivo

- **Estado técnico final:** **funcional al cierre, según el equipo**, con [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino) como último código instalado. Registró **3 pruebas (2 favorables, 1 con derrota)** y **2 peleas oficiales (1 victoria y 1 derrota)**. Persisten limitaciones de giro/seguimiento lateral y control: botón 1 arrancaba, botón 2 detenía y botón 3 no funcionó.
- **Logros colectivos y límites reales:** se integraron MicroStart y tres JS40F al firmware E5; se realizaron tres pruebas con V1 y dos peleas con V2, documentadas en video. Durante E5 se volvieron a fijar motores y se corrigió el contacto de llantas con suelo; se colocaron piezas impresas en 3D, **visibles en las [dos fotos finales originales](../../evidencias/dia-05/README.md)**. **Resultado de las dos peleas del salón: 1 victoria y 1 derrota.** Se registraron también dos pruebas previas favorables y una con expulsión propia.
- **Qué reutilizaría una generación futura:** [E5 V1](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino), [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), [prueba de JS40F](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Diagnostico_JS40F_E5/Diagnostico_JS40F_E5.ino), [datos de ensayos](../../datos/e5_ensayos_30oct.csv), [videos](../../evidencias/dia-05/README.md) y [CAD E4](../../evidencias/dia-04/README.md).
- **Qué falta antes de competencia externa (si la hubiera):** **RoboLympics, 21/11/2026 (fecha confirmada por el equipo)**. Corregir programación o interpretación de los botones (1 arrancaba, 2 detenía, 3 sin efecto), definir y probar contingencia/paro físico accesible, mejorar detección y giros laterales, evaluar más sensores y estrategias; ensayar repetidamente y confirmar masa final y requisitos del reglamento.
- **Inventario devuelto/resguardado, responsable y lugar exacto:** **Claudio resguardó el robot, la batería y los materiales en su casa**, con intención de entregarlos después. **Aún no se habían devuelto materiales al laboratorio** al cierre del día; no se informó fecha de devolución.
- **Archivo de evidencias, permisos de acceso y retención:** [cinco videos en Drive y dos fotografías originales del robot terminado](../../evidencias/dia-05/README.md) ([vista frontal](../../evidencias/dia-05/Tormenta_Negra_E5_final_frente.png) · [vista frontal lateral](../../evidencias/dia-05/Tormenta_Negra_E5_final_lateral.png)) y [CSV de los cinco intentos](../../datos/e5_ensayos_30oct.csv). Existencia de los archivos comprobada; **el equipo confirmó que Camilo puede abrir los cinco enlaces**. No se verificaron consentimientos para difusión pública ni políticas de retención; conservar acceso restringido a personas autorizadas.
- **Próximo experimento o kata que se exploraría:** probar **más sensores y nuevas estrategias de ataque** frente al mismo contrincante para medir giros laterales, detección y expulsiones, y resolver antes los problemas del control MicroStart.

### Gate E5

- [x] Demostración registrada honestamente, exitosa o fallida.
- [x] V1, K1, K2 y Vn tienen enlaces y registros coherentes. **Nota:** E5 se identifica por nombres de versión; commit exacto cargado por intento pendiente.
- [ ] Los cuatro expusieron brevemente su aprendizaje ante Camilo y el grupo. [Joel](../../participantes/A00574713/dias/E5.md) y [Sara](../../participantes/saragdr/dias/E5.md) tienen E5 personales registrados; **faltan los E5 personales de Max y Claudio** y la validación docente.
- [x] Se registraron observaciones para la fase de validación posterior del Design Thinking.
- [ ] El robot y materiales quedaron **resguardados en casa de Claudio**, pero **aún no entregados** al laboratorio. Camilo tiene acceso a los videos, sin constancia de permisos de difusión pública.

**Revisión final docente:** **PENDIENTE**. El profesor revisará los entregables **E1 a E5 cuando se entregue el repositorio de GitHub**, según el equipo. **Fecha de revisión:** aún no establecida. **Firma/alias:** pendiente.
