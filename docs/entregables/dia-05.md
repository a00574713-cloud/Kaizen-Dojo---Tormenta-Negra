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



## 0 · Identificación del evento y sus límites

| Campo | Valor |
|---|---|
| Fecha / equipo / misión y plataforma | 30 de octubre de 2026 · Tormenta Negra · M01, robot mini-sumo autónomo con Arduino compatible. |
| Dōjō o espacio exacto, bloque horario y supervisor | Laboratorio de Electrónica, CTA, Campus León · horario presencial de 9:00 a 12:00 h · supervisor y responsable de seguridad: profesor Camilo, quien autorizó pruebas y combates. |
| Modalidad real | Minicompetencia interna del salón: **3 pruebas previas** y **2 peleas** contra un robot del equipo de Marian. |
| ¿Participación en Robolympics posterior? | **RoboLympics: 21 de noviembre de 2026.** |
| Versión final congelada y enlace al código/CAD | **E5 V1** utilizada en las pruebas 1–3 ([sketch](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino)); **E5 V2** utilizada en las peleas 1–2 ([sketch](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino)). Joel desarrolló y ajustó los códigos. **E5 V2 quedó instalada como última versión del programa.** [CAD previo y vistas](../../evidencias/dia-04/README.md); **piezas impresas en 3D instaladas durante E5**, documentado en el E5 personal de Sara. |
| Objetivo demostrable y criterio de éxito | Detectar y enfrentar a otro mini-sumo, expulsarlo del dohyō **sin que Tormenta Negra salga**. Medir duración (s), salida de rival (sí/no), salida propia (sí/no) y resultado de cada intento. |
| Acceso autorizado a espectadores/evidencias | [Cinco videos en Google Drive](../../evidencias/dia-05/README.md), accesibles para el profesor Camilo. La demostración se realizó ante Camilo y nuestros compañeros. |

## 1 · Ruta de la experiencia final (180 min)

| Actividad | Minutos | Evidencia requerida |
|---|---:|---|
| Seguridad y chequeo previo | 0–20 | Camilo autorizó el uso del laboratorio y los enfrentamientos. Se revisaron batería, cables, motores, sensores, navaja y fijaciones. El control MicroStart permitió **arrancar con botón 1 y detener con botón 2**; **botón 3 no funcionó**. Área despejada y supervisada; se disponía de desconexión de batería para cortar alimentación. No hubo procedimiento formal de emergencia. |
| Ensayo de demostración | 20–45 | **Tres pruebas previas E5 V1** contra el robot del equipo de Marian: 13 s favorable (rival expulsado y Tormenta Negra dentro), 5 s favorable (rival salió al esquivarlo y Tormenta Negra dentro) y 5 s parcial/fallida (detección lateral insuficiente y expulsión propia). [Videos](../../evidencias/dia-05/README.md). |
| Desafío/competencia/exhibición interna | 45–135 | **Dos peleas E5 V2** contra robot del equipo de Marian: victoria de 10 s (contragolpe lateral) y derrota de 5 s (giro desfavorable). [Registro y videos](../../evidencias/dia-05/README.md). |
| Reflexión sobre frontera e intercambio | 135–165 | Cada integrante explicó ante el profesor Camilo y sus compañeros qué aprendió. Joel contó que comenzó sin conocimientos sobre mini-sumos ni esos sensores y que terminó muy satisfecho por todo lo aprendido. El equipo recibió felicitaciones por el trabajo realizado;  Las fallas de seguimiento lateral y giro se registraron en los ensayos. |
| Ritual de cierre y siguiente paso | 165–180 | Se realizó un cierre en el que los cuatro integrantes hablaron de sus aprendizajes. Claudio se llevó el robot y la batería a su casa para entregarlos posteriormente; **ningún material había sido devuelto aún al laboratorio**. Se propuso seguir mejorando sensores y estrategias de combate para RoboLympics. |

**Duración de actividades:** los bloques de 0–180 minutos organizan la jornada; no cronometramos cada bloque. Las cinco ejecuciones duraron 13, 5, 5, 10 y 5 s.

## 2 · Checklist de seguridad antes de operar

- [x] Infraestructura, supervisor y operación autorizados (profesor Camilo; 9:00–12:00, Laboratorio de Electrónica del CTA).
- [x] Revisamos batería, cables, motores, sensores, navaja y fijaciones. No medimos la corriente ni los límites eléctricos del driver.
- [ ] El **botón 2 detenía los motores** y podíamos desconectar la batería; el área estuvo despejada. El **botón 3 no respondió** y no practicamos un procedimiento formal de emergencia.
- [x] Última versión identificada: [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), reportada como último código instalado; sin identificación del commit binario exacto.
- [ ] No tuvimos un procedimiento formal de emergencia ni autorización documentada para difundir públicamente las grabaciones.

**Observación o NO-GO de seguridad:** no se reportaron incidentes. El paro remoto funcionó con **botón 2**, no con el botón 3 previsto inicialmente; el apagado físico disponible era **desconectar la batería**, sin interruptor dedicado confirmado. No hubo procedimiento formal de emergencia. **Antes de RoboLympics debe corregirse y comprobarse el esquema de START/STOP y la contingencia.** **Autorización presencial:** profesor Camilo, 30 de octubre de 2026.

## 3 · Registro de demostración de la misión

| Intento | Versión/condiciones | Métrica y unidad | Resultado/éxito-fallo | Incidente o razón de fallo | Evidencia |
|---:|---|---|---|---|---|
| 1 | **Prueba previa · E5 V1**; ataque a otro mini-sumo en el dohyō | **13 s**; rival fuera: **sí**; salida propia: **no** | **Favorable**: Tormenta Negra expulsó al otro mini-sumo. | Rival: robot del equipo de Marian; prueba previa, no pelea oficial. | [Video 1](https://drive.google.com/file/d/156-m4t9S7BHtS6NTZN-u2_YC-Cp1xZfZ/view?usp=sharing) |
| 2 | **Prueba previa · E5 V1**; ataque y respuesta contra mini-sumo | **5 s**; rival fuera: **sí**; salida propia: **no** | **Favorable**: Tormenta Negra realizó un giro evasivo y el rival terminó fuera. | Rival: robot del equipo de Marian; salió **al ser esquivado**, no por expulsión directa documentada. | [Video 2](https://drive.google.com/file/d/18nhaoM7tSiE98WnWXMV8dTaJPr6UCGnj/view?usp=sharing) |
| 3 | **Prueba previa · E5 V1**; oponente lateral | **5 s**; salida propia: **sí**; rival fuera: **no** | **Parcial/fallida**: detección lateral insuficiente y Tormenta Negra fue expulsado. | Rival: robot del equipo de Marian; Tormenta Negra no logró responder correctamente al oponente situado a un costado. | [Video 3](https://drive.google.com/file/d/1PouI7jmeKDEtzUMt4pYGqSoV6_QFshdO/view?usp=sharing) |
| 4 | **Pelea 1 · E5 V2**; rival: robot del equipo de Marian | **10 s**; rival fuera: **sí**; salida propia: **no** | **Victoria** de Tormenta Negra; contragolpe lateral expulsó al rival. | Empezó con choque frontal; luego logró el contragolpe, sin salir del dohyō. | [Video 4](https://drive.google.com/file/d/10eXbs30Vywk6ARkTiYR8rB9FN5MmFf93/view?usp=sharing) |
| 5 | **Pelea 2 · E5 V2**; mismo rival del equipo de Marian | **5 s**; rival fuera: **no**; salida propia: **sí** | **Derrota**: el rival expulsó a Tormenta Negra. | Un giro de Tormenta Negra favoreció el ataque del oponente. | [Video 5](https://drive.google.com/file/d/1ug7hRhPOlx5qsrZemrKEpTTV61gljSuw/view?usp=sharing) |

**Procedimiento y datos crudos:** [protocolo de pruebas](../../pruebas/protocolo.md) · [CSV E5 con cinco registros](../../datos/e5_ensayos_30oct.csv) · [índice de los cinco videos](../../evidencias/dia-05/README.md). **Resumen de resultados:** **n = 5 intentos** contra el robot del equipo de Marian; **3 pruebas previas** (2 favorables y 1 parcialmente satisfactoria que terminó en salida propia) y **2 peleas del salón** (**1 victoria, 1 derrota**); duraciones **13, 5, 5, 10 y 5 s**, suma **38 s** y media **7.6 s**. **Limitación:** no son cinco peleas bajo idénticas condiciones: las tres primeras utilizaron E5 V1 y las dos siguientes E5 V2. No documentamos cambios físicos adicionales entre ambas tandas. La sustitución de V1 por V2 sí fue un cambio de firmware. 

**Métricas de M01:** duración de cada intento (s), salida del rival (sí/no), salida propia (sí/no) y resultado.

## 4 · Defensa individual de fronteras (cada estudiante completa su E5 personal)

| Alias | Alcance(s) original(es) | Qué aportó realmente / enlace a evidencia | Antes no podía... | Ahora puedo... | Demostración de capacidad ante otro | Feedback de par o profesor |
|---|---|---|---|---|---|---|
| [Joel (`A00574713`)](../../participantes/A00574713/dias/E5.md) | D · DOMINAR, F1 · INTEGRAR; MS01 y MS06. | Programó y ajustó [V1](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino) y [V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino); integró sensores y control. | No sabía construir ni programar un mini-sumo. | Puedo integrar el programa y los sensores y realizar pruebas para identificar fallas. | Expliqué ante Camilo lo que aprendí; los [cinco videos](../../evidencias/dia-05/README.md) muestran el funcionamiento con los programas que trabajé. | El equipo recibió felicitaciones por el trabajo. |
| [Sara (`saragdr`)](../../participantes/saragdr/dias/E5.md) | S · SUPERAR, F1 · INTEGRAR; MS03 y MS06. | Trabajó en conexiones, soldaduras, motores, corrección de altura de ruedas y colocación de la carcasa 3D. | Tenía experiencia con motores y sensores, pero necesitaba retomar la integración de un mini-sumo. | Puedo montar y ajustar motores y comprobar el funcionamiento de sensores y tracción. | Participó en los ajustes previos y explicó sus aprendizajes durante el cierre; [E5 personal](../../participantes/saragdr/dias/E5.md). | Integrantes de otro equipo comentaron que Tormenta Negra tenía potencial. |
| [Max (`MaxAmCam`)](../../participantes/MaxAmCam/dias/E5.md) | S · SUPERAR, F1 · INTEGRAR; MS01 y MS03. | Apoyó en cableado, pruebas de motores y sensores, colocación de carcasa y observación de fallas laterales para proponer ajustes. | No había construido un mini-sumo completo. | Puedo colaborar en el montaje, verificar conexiones e identificar comportamientos para mejorar el robot. | Participó en pruebas y explicó su aprendizaje ante el grupo; [E5 personal](../../participantes/MaxAmCam/dias/E5.md). | Registró una felicitación del profesor por haber conseguido que el robot funcionara a tiempo. |
| [Claudio (`A00574802`)](../../participantes/A00574802/dias/E5.md) | D · DOMINAR, F1 · INTEGRAR; MS03, MS07 y MS10. | Consiguió materiales, apoyó en la integración, realizó el [CAD de la carcasa](../../evidencias/dia-04/README.md) y colaboró en el cambio de llantas. | No tenía experiencia práctica construyendo un mini-sumo. | Puedo colaborar en la integración y comprender el funcionamiento de motores, conexiones y mejoras mecánicas. | Explicó sus aprendizajes ante el grupo; [E5 personal](../../participantes/A00574802/dias/E5.md). | No registró un comentario individual específico. |

**Portafolios individuales:** [Joel](../../participantes/A00574713/dias/E5.md) · [Sara](../../participantes/saragdr/dias/E5.md) · [Max](../../participantes/MaxAmCam/dias/E5.md) · [Claudio](../../participantes/A00574802/dias/E5.md).

## 5 · Evaluación de la experiencia y cierre Design Thinking

| Pregunta para validar la experiencia | Respuesta basada en evidencia (no solo opinión) |
|---|---|
| ¿Qué elecciones del catálogo C2 tuvieron sentido para diferentes niveles de entrada? | Trabajamos con MS01, MS03, MS06, MS07 y MS10 según nuestros compromisos. No hicimos una comparación formal de las opciones del catálogo C2 por nivel de experiencia. |
| ¿Qué katas fueron útiles, redundantes o faltaron? | Nos sirvieron las pruebas de [JS40F](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Diagnostico_JS40F_E5/Diagnostico_JS40F_E5.ino), el montaje de motores y la integración de V1 y V2. No evaluamos cuáles katas eran redundantes. |
| ¿Los materiales y el dōjō habilitaron el trabajo sin exclusiones? | Contamos con herramientas y materiales para trabajar. Los cuatro participamos sin dificultades de acceso a los recursos. |
| ¿Hubo evidencia de dos ciclos de mejora técnica? | Sí se documentaron **K1** (corrección de alimentación y polaridad de motores en [E3](dia-03.md)) y **K2** (ajuste de PWM y QTR en [E4](dia-04.md)); en E5 se compararon en uso **V1** (3 pruebas, una falla lateral) y **V2** (2 peleas, una victoria y una derrota). No hubo comparación controlada bajo condiciones idénticas. |
| ¿Qué se debería rediseñar para la próxima iteración? | Queremos dedicar más tiempo a mejorar hardware y programa, probar otros sensores y desarrollar nuevas estrategias de ataque. Debemos corregir el giro lateral que ocasionó las salidas en la [prueba 3 y pelea 2](../../evidencias/dia-05/README.md), ajustar START/STOP y ensayar un procedimiento de emergencia. |
| ¿La experiencia protegió confianza, autonomía, pertenencia y seguridad? | Nos apoyamos durante las pruebas y todos participamos. No hubo incidentes en las cinco ejecuciones, pero el botón 3 no funcionó y no habíamos practicado un procedimiento formal de emergencia. |

**Comentarios recibidos:** recibimos felicitaciones por el trabajo y Sara anotó que compañeros de otro equipo veían potencial en nuestro robot. Las sugerencias de Artemis están en [E4](dia-04.md).

## 6 · Cierre, transferencia y archivo

- **Estado técnico final:** **funcional al cierre**, con [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino) como último código instalado. Registró **3 pruebas (2 favorables, 1 con salida propia)** y **2 peleas oficiales (1 victoria y 1 derrota)**. Persisten limitaciones de giro/seguimiento lateral y control: botón 1 arrancaba, botón 2 detenía y botón 3 no funcionó.
- **Logros colectivos y límites reales:** se integraron MicroStart y tres JS40F al firmware E5; se realizaron tres pruebas con V1 y dos peleas con V2, documentadas en video. Durante E5 se volvieron a fijar motores y se corrigió el contacto de llantas con suelo; se colocaron piezas impresas en 3D, **visibles en las [dos fotos finales originales](../../evidencias/dia-05/README.md)**. **Resultado de las dos peleas del salón: 1 victoria y 1 derrota.** Se registraron también dos pruebas previas favorables y una con expulsión propia.
- **Qué reutilizaría una generación futura:** [E5 V1](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino), [E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino), [prueba de JS40F](../../codigo/mini-sumo/tormenta_negra_e5_competencia/Diagnostico_JS40F_E5/Diagnostico_JS40F_E5.ino), [datos de ensayos](../../datos/e5_ensayos_30oct.csv), [videos](../../evidencias/dia-05/README.md) y [CAD E4](../../evidencias/dia-04/README.md).
- **Qué mejoraremos antes de RoboLympics:** **RoboLympics, 21/11/2026**. Corregir programación o interpretación de los botones (1 arrancaba, 2 detenía, 3 sin efecto), definir y probar contingencia/paro físico accesible, mejorar detección y giros laterales, evaluar más sensores y estrategias; ensayar repetidamente y confirmar masa final y requisitos del reglamento.
- **Inventario devuelto/resguardado, responsable y lugar exacto:** **Claudio resguardó el robot, la batería y los materiales en su casa**, con intención de entregarlos después. **Aún no se habían devuelto materiales al laboratorio** al cierre del día
- **Archivo de evidencias y acceso:** [cinco videos en Drive y dos fotografías originales](../../evidencias/dia-05/README.md) ([frontal](../../evidencias/dia-05/Tormenta_Negra_E5_final_frente.png) · [lateral](../../evidencias/dia-05/Tormenta_Negra_E5_final_lateral.png)) y [CSV de los cinco intentos](../../datos/e5_ensayos_30oct.csv). Camilo tiene acceso a los videos; no contamos con autorización documentada para su difusión pública.
- **Próximo experimento o kata que se exploraría:** probar **más sensores y nuevas estrategias de ataque** frente al mismo contrincante para medir giros laterales, detección y expulsiones, y resolver antes los problemas del control MicroStart.

### Gate E5

- [x] Demostración registrada honestamente, exitosa o fallida.
- [x] V1, K1, K2 y Vn tienen enlaces y registros coherentes. 
- [x] Los cuatro compartimos lo aprendido ante Camilo y el grupo. [Joel](../../participantes/A00574713/dias/E5.md) · [Sara](../../participantes/saragdr/dias/E5.md) · [Max](../../participantes/MaxAmCam/dias/E5.md) · [Claudio](../../participantes/A00574802/dias/E5.md).
- [x] Se registraron observaciones para la fase de validación posterior del Design Thinking.
- [ ] Claudio resguardó el robot, la batería y los materiales en su casa; falta devolverlos al laboratorio.

**Revisión final docente:** pendiente después de la entrega del repositorio. **Fecha y firma:** pendientes.
