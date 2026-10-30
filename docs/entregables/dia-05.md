---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E5"
dia: 5
responsable_registro: "equipo"
estado: "REGISTRO_PARCIAL"
fecha: "2026-10-30"
revision_docente: "PENDIENTE"
---

# E5 · Día 5 — DEMOSTRAR | Desafío, defensa técnica y cierre Kaizen

> **Regla:** sustituir los corchetes, registrar lo realmente observado y enlazar a evidencias del repositorio. **No inventar datos ni marcar pruebas no realizadas.** Los archivos del equipo resumen el trabajo compartido; las reflexiones y evidencias personales van en `participantes/<alias>/dias/E5.md`.

## 0 · Identificación del evento y sus límites

| Campo | Valor |
|---|---|
| Fecha / equipo / misión y plataforma | 30 de octubre de 2026 · Tormenta Negra · M01, robot mini-sumo autónomo con Arduino compatible. |
| Dōjō o espacio exacto, bloque horario y supervisor | Pista de mini-sumo utilizada en el salón para la minicompetencia; aula exacta, horario y supervisor por confirmar. |
| Modalidad real | Minicompetencia interna de salón confirmada por el equipo: **3 pruebas previas** y **2 peleas** contra un robot del equipo de Marian. |
| ¿Participación en Robolympics posterior? | Planeada para después del E5; no se aportó confirmación de inscripción, fecha ni participación definitiva. |
| Versión final congelada y enlace al código/CAD | **E5 V1** utilizada en las pruebas 1–3 ([sketch](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino)); **E5 V2** utilizada en las peleas 1–2 ([sketch](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino)). Joel desarrolló y ajustó los códigos. **Commit exacto cargado y congelación de versión: no registrados**; [CAD previo](../../evidencias/dia-04/README.md), instalación de carcasa en E5 no confirmada. |
| Objetivo demostrable y criterio de éxito | Detectar y enfrentar a otro mini-sumo, expulsarlo del dohyō **sin que Tormenta Negra salga**. Medir duración (s), salida de rival (sí/no), salida propia (sí/no) y resultado de cada intento. |
| Acceso autorizado a espectadores/evidencias | [Cinco videos en Google Drive](../../evidencias/dia-05/README.md), cuya existencia se verificó. Permisos de espectadores y acceso del profesor aún no comprobados. |

## 1 · Ruta de la experiencia final (180 min)

| Actividad | Minutos | Evidencia requerida |
|---|---:|---|
| Seguridad y chequeo previo | 0–20 | Se reportó diagnóstico previo de control MicroStart y sensores JS40F; falta confirmación del checklist completo, paro confiable y autorización de seguridad. |
| Ensayo de demostración | 20–45 | **Tres pruebas previas E5 V1**: 13 s favorable (rival expulsado), 5 s favorable (rival terminó fuera tras maniobra evasiva) y 5 s parcial/fallida (detección lateral insuficiente y expulsión propia). [Videos](../../evidencias/dia-05/README.md). |
| Desafío/competencia/exhibición interna | 45–135 | **Dos peleas E5 V2** contra robot del equipo de Marian: victoria de 10 s (contragolpe lateral) y derrota de 5 s (giro desfavorable). [Registro y videos](../../evidencias/dia-05/README.md). |
| Reflexión sobre frontera e intercambio | 135–165 | Se identificó una falla de seguimiento lateral con V1 y un giro desfavorable con V2. Los testimonios individuales y comentarios recibidos durante E5 no se informaron. |
| Ritual de cierre y siguiente paso | 165–180 | Pendiente de reportar la declaración individual «antes / ahora», el reconocimiento, cierre y resguardo de materiales. |

**Nota sobre tiempos:** los rangos 0–180 min son bloques fijados por la plantilla; **no son tiempos reales medidos** de la sesión. Solo se reportaron las duraciones de cada intento (13, 5, 5, 10 y 5 s).

## 2 · Checklist de seguridad antes de operar

- [ ] Infraestructura, supervisor y operación autorizados.
- [ ] Batería/cables/driver/sensores y fijaciones revisados.
- [ ] Paro y contingencia practicados; nadie dentro de la zona de riesgo.
- [ ] Configuración y versión final identificables.
- [ ] Ruta de evacuación o emergencia, accesibilidad y permisos de captura de imagen comprobados.

**Observación o NO-GO de seguridad:** el equipo comprobó por separado que los sensores JS40F responden y utilizó MicroStart, pero no se confirmó documentalmente que el STOP remoto funcionara correctamente bajo combate, ni el chequeo completo de batería, protección del borde, fijaciones y autorización. **No asignar GO/NO-GO retroactivamente.** **Autoriza:** pendiente de informar responsable y fecha.

## 3 · Registro de demostración de la misión

| Intento | Versión/condiciones | Métrica y unidad | Resultado/éxito-fallo | Incidente o razón de fallo | Evidencia |
|---:|---|---|---|---|---|
| 1 | **Prueba previa · E5 V1**; ataque a otro mini-sumo en el dohyō | **13 s**; rival fuera: **sí**; salida propia: **no informada** | **Favorable**: Tormenta Negra expulsó al otro mini-sumo. | Rival sin nombre registrado y salida propia no documentada; no es pelea oficial. | [Video 1](https://drive.google.com/file/d/156-m4t9S7BHtS6NTZN-u2_YC-Cp1xZfZ/view?usp=sharing) |
| 2 | **Prueba previa · E5 V1**; ataque y respuesta contra mini-sumo | **5 s**; rival fuera: **sí**; salida propia: **no informada** | **Favorable**: Tormenta Negra realizó un giro evasivo y el rival terminó fuera. | No se especificó si la salida del rival fue causada por contacto directo. | [Video 2](https://drive.google.com/file/d/18nhaoM7tSiE98WnWXMV8dTaJPr6UCGnj/view?usp=sharing) |
| 3 | **Prueba previa · E5 V1**; oponente lateral | **5 s**; salida propia: **sí**; rival fuera: **no informado** | **Parcial/fallida**: detección lateral insuficiente y Tormenta Negra fue expulsado. | No logró responder correctamente al mini-sumo situado a un costado. | [Video 3](https://drive.google.com/file/d/1PouI7jmeKDEtzUMt4pYGqSoV6_QFshdO/view?usp=sharing) |
| 4 | **Pelea 1 · E5 V2**; rival: robot del equipo de Marian | **10 s**; rival fuera: **sí**; salida propia: **no** | **Victoria** de Tormenta Negra; contragolpe lateral expulsó al rival. | Empezó con choque frontal; luego logró el contragolpe, sin salir del dohyō. | [Video 4](https://drive.google.com/file/d/10eXbs30Vywk6ARkTiYR8rB9FN5MmFf93/view?usp=sharing) |
| 5 | **Pelea 2 · E5 V2**; mismo rival del equipo de Marian | **5 s**; rival fuera: **no**; salida propia: **sí** | **Derrota**: el rival expulsó a Tormenta Negra. | Un giro de Tormenta Negra favoreció el ataque del oponente. | [Video 5](https://drive.google.com/file/d/1ug7hRhPOlx5qsrZemrKEpTTV61gljSuw/view?usp=sharing) |

**Procedimiento y datos crudos:** [protocolo de pruebas](../../pruebas/protocolo.md) · [CSV E5 con cinco registros](../../datos/e5_ensayos_30oct.csv) · [índice de los cinco videos](../../evidencias/dia-05/README.md). **Resumen de resultados:** **n = 5 intentos**, divididos en **3 pruebas previas** (2 favorables, 1 parcial/fallida) y **2 peleas oficiales del salón** (**1 victoria y 1 derrota**); duraciones reportadas de **13, 5, 5, 10 y 5 s**, respectivamente. **Limitación:** no son cinco peleas equivalentes bajo idénticas condiciones: las tres primeras utilizaron E5 V1; las dos siguientes E5 V2; los tres rivales de las pruebas no se identificaron. Los resultados proceden de la descripción del equipo y los videos enlazados, no de revisión visual cuadro a cuadro.

**Métricas por plataforma (escoger, no inventar):** M01 detección rival y salidas; M03 vueltas válidas, tiempo y pérdidas de línea; M04 estaciones/precisión visual, altura y aterrizajes seguros; M05 estaciones alcanzadas, error y seguridad ante obstáculos.

## 4 · Defensa individual de fronteras (cada estudiante completa su E5 personal)

| Alias | Alcance(s) original(es) | Qué aportó realmente / enlace a evidencia | Antes no podía... | Ahora puedo... | Demostración de capacidad ante otro | Feedback de par o profesor |
|---|---|---|---|---|---|---|
| Joel (A00574713), Sara (saragdr), Max (MaxAmCam) y Claudio (A00574802): defensas personales pendientes | Alcances individuales por confirmar en E5; ver avances [E3](dia-03.md) y [E4](dia-04.md) | **Joel:** programación de E5 V1 y E5 V2 y diagnóstico de sensores/control; [código V1](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino) y [V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino). Aportes individuales E5 de Sara, Max y Claudio por registrar. | Por responder individualmente | Por responder y sustentar en E5 personal | No se registró defensa individual ante otro durante E5 | Feedback personal E5 no proporcionado |

**Ver portafolios individuales:** [Joel](../../participantes/A00574713/dias/E5.md) · [Sara](../../participantes/saragdr/dias/E5.md) · [Max](../../participantes/MaxAmCam/dias/E5.md) · [Claudio](../../participantes/A00574802/dias/E5.md). Sus respuestas personales E5 aún no se reportaron como completadas. No basta con observar que el robot gana o funciona para validar fronteras individuales.

## 5 · Evaluación de la experiencia y cierre Design Thinking

| Pregunta para validar la experiencia | Respuesta basada en evidencia (no solo opinión) |
|---|---|
| ¿Qué elecciones del catálogo C2 tuvieron sentido para diferentes niveles de entrada? | No se recibió evaluación del catálogo C2 específica del E5; pendiente de valoración de los participantes. |
| ¿Qué katas fueron útiles, redundantes o faltaron? | Fueron útiles las [pruebas de los tres JS40F](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Diagnostico_JS40F_E5/Diagnostico_JS40F_E5.ino) para descartar una falla básica de sensores y el ajuste del seguimiento lateral de V1 a V2. Redundancias y katas faltantes: pendientes de evaluar con el equipo. |
| ¿Los materiales y el dōjō habilitaron el trabajo sin exclusiones? | El equipo pudo realizar tres pruebas previas y dos peleas. No se recibieron datos de accesibilidad, disponibilidad general de materiales ni posibles exclusiones; no se puede evaluar completamente este criterio. |
| ¿Hubo evidencia de dos ciclos de mejora técnica? | Sí se documentaron **K1** (corrección de alimentación y polaridad de motores en [E3](dia-03.md)) y **K2** (ajuste de PWM y QTR en [E4](dia-04.md)); en E5 se compararon en uso **V1** (3 pruebas, una falla lateral) y **V2** (2 peleas, una victoria y una derrota). No hubo comparación controlada bajo condiciones idénticas. |
| ¿Qué se debería rediseñar para la próxima iteración? | Mejorar la respuesta a rivales laterales y el sentido de giro cerca del adversario: [prueba 3](../../evidencias/dia-05/README.md) y pelea 2 terminaron con expulsión propia. Repetir ensayos bajo condiciones comparables, revisar QTR y verificar STOP seguro. |
| ¿La experiencia protegió confianza, autonomía, pertenencia y seguridad? | Hubo participación técnica documentada del equipo en días anteriores y cinco ejecuciones reportadas en E5; no se recibió evaluación de clima de equipo ni checklist firmado de seguridad para emitir una valoración definitiva. |

**Feedback externo o de otra pareja/equipo:** no se reportaron comentarios específicos durante E5. La retroalimentación del equipo Artemis está documentada en [E4](dia-04.md) y **no se atribuye** al Día 5.

## 6 · Cierre, transferencia y archivo

- **Estado técnico final:** **parcialmente funcional en combate**: pudo expulsar rivales en dos pruebas y ganó una de las dos peleas del salón, pero tuvo fallas de seguimiento lateral o giro en la prueba 3 y la pelea 2. El STOP seguro y chequeos finales siguen por confirmar.
- **Logros colectivos y límites reales:** se integraron MicroStart y tres JS40F al firmware E5; tres pruebas con V1 y dos peleas con V2 documentadas en video. **Resultado oficial del salón: 1 victoria y 1 derrota.** No se ha demostrado fiabilidad constante frente a oponentes laterales.
- **Qué reutilizaría una generación futura:** [E5 V1](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino), [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), [prueba de JS40F](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Diagnostico_JS40F_E5/Diagnostico_JS40F_E5.ino), [datos de ensayos](../../datos/e5_ensayos_30oct.csv), [videos](../../evidencias/dia-05/README.md) y [CAD E4](../../evidencias/dia-04/README.md).
- **Qué falta antes de competencia externa (si la hubiera):** comprobar STOP remoto y corte físico de energía; revisar orientación/algoritmo de giro lateral y protección de borde; ensayar bajo condiciones repetibles; confirmar masa final, fijación de navaja y reglamento exacto de RoboLympics.
- **Inventario devuelto/resguardado, responsable y lugar exacto:** pendiente de registrar; no se informó custodia final de batería, chasis, placa ni sensores.
- **Archivo de evidencias, permisos de acceso y retención:** [cinco videos en Drive](../../evidencias/dia-05/README.md) y [CSV de los cinco intentos](../../datos/e5_ensayos_30oct.csv). Existencia de los archivos comprobada; permisos del profesor, retención y acceso institucional no verificados.
- **Próximo experimento o kata que se exploraría:** comparar giros de persecución lateral y evasión de borde de forma repetible con el mismo oponente, registrando expulsiones propias y del rival por cada intento.

### Gate E5

- [x] Demostración registrada honestamente, exitosa o fallida.
- [x] V1, K1, K2 y Vn tienen enlaces y registros coherentes. **Nota:** E5 se identifica por nombres de versión; commit exacto cargado por intento pendiente.
- [ ] Cada estudiante completó [E5 personal](../../participantes/_plantilla/dias/E5.md) y defendió su frontera.
- [x] Se registraron observaciones para la fase de validación posterior del Design Thinking.
- [ ] Se resguardaron/entregaron materiales y accesos sin exponer datos privados.

**Revisión final docente:** por revisar. **Fecha:** pendiente de revisión. **Firma/alias:** pendiente; no se atribuye aprobación docente sin confirmación.
