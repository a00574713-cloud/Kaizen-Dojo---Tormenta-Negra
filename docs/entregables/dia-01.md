---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E1"
dia: 1
responsable_registro: "equipo"
estado: "PENDIENTE"
fecha: "AAAA-MM-DD"
revision_docente: "PENDIENTE"
---

# E1 · Día 1 — ATREVERSE | Contrato de misión, inventario y dōjō

> **Regla:** sustituir los corchetes, registrar lo realmente observado y enlazar a evidencias del repositorio. **No inventar datos ni marcar pruebas no realizadas.** Los archivos del equipo resumen el trabajo compartido; las reflexiones y evidencias personales van en `participantes/<alias>/dias/E1.md`.

## 0 · Identificación, equipo y logística del dōjō

| Campo obligatorio | Dato |
|---|---|
| Fecha y horario de esta sesión | [AAAA-MM-DD; HH:MM–HH:MM, 180 min] |
| Nombre / alias del equipo | [kd26-mXX-equipoYY] |
| Misión / plataforma | [M01 mini-sumo autónomo / M03 seguidor / M04 Tello Python / M05 AMR ROS 2] |
| Objetivo verificable del robot (una frase) | [Acción + condiciones + éxito] |
| **Dōjō asignado — campus, edificio y sala/taller exactos** | **[Campus ___ / Edificio ___ / Sala o taller ___ / Nº de laboratorio ___]** |
| Puesto o zona dentro del dōjō | [Mesa, banco, espacio de vuelo, pista, dohyō o estación] |
| Horario / reserva confirmada | [Fechas y bloque horario; quien la autorizó] |
| Responsable del espacio y contacto institucional | [Nombre/cargo y canal institucional, sin publicar teléfonos privados] |
| Acceso, aforo y ajustes de accesibilidad | [Restricciones de ingreso, capacidad, adecuaciones necesarias] |
| Salidas, botiquín, extintor y punto de reunión | [Ubicación real validada al llegar] |
| Zonas segregadas por riesgo | [Vuelo / herramientas / tránsito AMR / ensayo de pista] |
| Ubicación de materiales y resguardo nocturno | [Gabinete/estante/inventario; responsable] |
| Plan de sustitución si falla el espacio | [Dōjō alternativo con autorización; no improvisar espacio de vuelo] |
| Instructor o supervisor presente en la sesión | [@alias / nombre institucional] |

> ⛔ **No se permite avanzar a pruebas físicas sin dōjō concreto y autorización del responsable.** No inventar salón, número de laboratorio ni recursos que no hayan sido confirmados.

## 1 · Integrantes, responsabilidades, accesibilidad y decisiones (0–15 min)

| Alias GitHub | Rol inicial | Carta y frontera (D/S/E; F1–F4) | Alcances ID (1–3) | Kit personal (archivo) | Necesidad de apoyo o accesibilidad acordada |
|---|---|---|---|---|---|
| [@alias-1] | [Integración / documentación / seguridad / pruebas ...] | [D · F1 · D1] | [MS01, MS02] | [`../../participantes/alias/compromiso.md`](../../participantes/_plantilla/compromiso.md) | [Acordar con la persona sin registrar datos sensibles] |
| [@alias-2] | [...] | [...] | [...] | [enlace] | [...] |

**Acuerdo de colaboración:** [Cómo se toman decisiones, cómo se resuelven conflictos, apoyos senpai–kōhai, pausas y distribución equitativa de participación.]

## 2 · Demostración de la plataforma y seguridad (15–35 min)

| Elemento | Observación directa | Evidencia / vínculo |
|---|---|---|
| Plataforma base inspeccionada (estado, modelo, ID inventario) | [ ] | [enlace / foto no sensible] |
| Funciones existentes y límites comprobados | [ ] | [enlace] |
| Paro de emergencia / desconexión segura ensayados | [ ] | [enlace / tutor responsable] |
| Restricciones de competición o exhibición verificadas | [ ] | [fuente / por verificar] |
| Riesgos vistos y medidas activas | [ ] | [docs/seguridad.md] |

**Normas específicas según misión:**
- **M01:** protecciones de alimentación; desarmar motores antes de tocar ruedas; dohyō delimitado, rival de referencia y bordes seguros.
- **M03:** pista despejada, altura/posición de sensores controlada, baterías y ruedas comprobadas.
- **M04:** espacio interior autorizado, observador humano, altura y desplazamientos limitados, baterías y aterrizaje inmediato; *verificar modelo real de Tello*.
- **M05:** ROS 2 y TF/navegación listos; límites de velocidad, sensor de obstáculos, paro seguro y zona de tránsito marcada.

## 3 · Diagnóstico práctico colectivo (35–65 min)

**Condición inicial V0 de la plataforma:** [Robot completo / kit / subensambles / simulador; qué funciona y qué falta]

| Prueba diagnóstica | Condición y procedimiento | Resultado observado / unidad | Problema / causa probable | Evidencia |
|---|---|---|---|---|
| [1: movimiento o comunicación] | [...] | [...] | [...] | [enlace] |
| [2: lectura de sensor] | [...] | [...] | [...] | [enlace] |
| [3: comportamiento de la misión] | [...] | [...] | [...] | [enlace] |

**Capacidades ya disponibles y dependencias:** [qué módulos se pueden reutilizar, y qué necesita cada alcance de otro integrante.]

## 4 · Integración de Mission Forge C2 y pacto de alcances (65–100 min)

Cada participante debe colocar el archivo **Markdown original generado por la web** en:

`participantes/<alias>/compromiso.md`

Se conserva íntegro (incluido el frontmatter y la lista de katas). Los nuevos alcances/katas diseñados por el participante quedan claramente marcados como *propuesta propia* y requieren aprobación técnica.

**Catálogo de referencia:** [Google Sheets C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit) · **Configurador Mission Forge:** [`herramientas/mission-forge-c2.html`](../../herramientas/mission-forge-c2.html) (descárgalo y ábrelo en el navegador; funciona sin Internet).

| Alias | Kit enlazado | Alcance principal | Complementos | Katas elegidos o nuevos | Horas mín.–máx. | Evidencia final esperada | Negociación aprobada |
|---|---|---|---|---|---|---|---|
| [@alias] | [compromiso.md] | [MS01] | [MS02 / ninguno] | [K1, K3 / propio] | [6–8 h] | [CAD ensamblado + prueba] | [Sí / Pendiente; revisor] |

**Resultado de negociación grupal:** [Puntos de integración; interfaces entre códigos/firmware/sensores/estructura; prioridad si no hay tiempo.]

## 5 · Inventario exhaustivo y especificación de materiales (obligatorio)

### 5.1 Inventario maestro del equipo

Completar **cada recurso requerido**: estructura, electrónica, actuadores, sensores, herramientas, consumibles, instrumentos, software, datos, red, espacios de ensayo y elementos de seguridad. Añadir filas sin límite.

| ID | Categoría | Material o recurso (especificación exacta: modelo, medida, versión o característica) | Cantidad requerida + unidad | Cantidad confirmada | Fuente/proveedor o dueño | Ubicación física o ruta digital | Responsable | Estado (disponible/reservado/falta) | Alternativa compatible | Día requerido |
|---|---|---|---|---|---|---|---|---|---|---|
| MAT-001 | [Robot/plataforma] | [Modelo preciso y compatibilidad] | [1 ud.] | [?] | [laboratorio/equipo] | [armario] | [@alias] | [por confirmar] | [alternativa] | [D1] |
| MAT-002 | [Mecánica/electrónica/sensor] | [...] | [...] | [...] | [...] | [...] | [...] | [...] | [...] | [...] |
| MAT-003 | [Herramienta/seguridad/medición] | [...] | [...] | [...] | [...] | [...] | [...] | [...] | [...] | [...] |
| MAT-004 | [Software/datos/conectividad] | [SO + versión, ROS/Python/OpenCV o controlador, puerto/red] | [...] | [...] | [...] | [...] | [...] | [...] | [...] | [...] |
| MAT-005 | [Zona de pruebas] | [Pista/dohyō/marcadores/mapa; dimensiones y configuración] | [...] | [...] | [...] | [...] | [...] | [...] | [...] | [...] |

También disponible el archivo [`datos/inventario_materiales.csv`](../../datos/inventario_materiales.csv) para registrar muchos materiales sin agrandar esta tabla.

### 5.2 Lista de cotejo específica por plataforma (elegir solo la misión asignada)

| Misión | Revisar y especificar (marca/modelo/cantidad reales) |
|---|---|
| M01 · Mini-sumo autónomo | Chasis y material para cuñas, ruedas/motores/soportes, driver, controlador y firmware, batería/cargador/fusible, sensores de borde y rival, cableado/conectores, dohyō/rival de referencia, CAD/impresora 3D/herramientas, instrumentos de medición y protocolo de paro. |
| M03 · Seguidor de línea | Chasis/ruedas/motores, driver, controlador, barra de sensores reflectivos/soportes, batería/cargador, placa y cableado, pista con curvas y superficie definida, software de programación, cinta/regla/cronómetro/instrumentos y paro seguro. |
| M04 · Tello Python | **Modelo Tello verificado** y baterías suficientes, cargador, computadora y adaptador Wi-Fi, versión Python y SDK compatible, OpenCV si aplica, marcadores visuales impresos, área interior de vuelo demarcada, supervisor/observador, barreras y protocolo de aterrizaje/abortos. |
| M05 · AMR ROS 2 | Base AMR y baterías/cargador, computador y distribución ROS 2/paquetes, workspace y repositorio base, sensores (p. ej. lidar/odometría), mapa y TF/localización, RViz/Nav2 si aplica, red de comunicación, estaciones/marcadores, área de navegación acordonada, instrumento de medida y paro seguro. |

**Enlaces a fichas técnicas / instrucciones de conexión, fabricación y seguridad:** [URLs o rutas dentro del repositorio.]

### 5.3 Riesgos de recursos y abastecimiento

| Bloqueante | A qué alcance afecta | Solución prevista / fecha y responsable | Impacto si no se resuelve |
|---|---|---|---|
| [material o software aún no validado] | [...] | [...] | [reducir alcance / simulación / replanificar] |

**Materiales completos para ejecutar el Día 2:** [Sí / Parcial / No]. **Confirmado por:** [docente y responsable equipo] a [fecha/hora].

## 6 · Kata 0 — exploración técnica de arranque (100–160 min)

| Integrante/alcance | Pregunta técnica | Mini-prueba o prototipo de exploración | Resultado o error observado | Evidencia enlazada | Acción necesaria antes de D2 |
|---|---|---|---|---|---|
| [@alias / ID] | [qué quiero verificar] | [qué hice] | [qué ocurrió] | [commit/foto/log] | [acción] |

**Integración entre subequipos:** [Qué interfaz se dejó validada: alimentación, dimensiones, tópicos, salida sensorial, etc.]

## 7 · Cierre: contrato técnico y puerta de salida E1 (160–180 min)

- [ ] El objetivo colectivo tiene condición de éxito verificable.
- [ ] Cada estudiante depositó **su kit Markdown original** en `participantes/<alias>/compromiso.md`.
- [ ] Cada estudiante completó [E1 personal](../../participantes/_plantilla/dias/E1.md) y definió frontera, evidencia y alcance negociado.
- [ ] El inventario está **completo** y cada recurso indica cantidad, especificación, disponibilidad y responsable.
- [ ] Se asignó **dōjō específico** con edificio, salón/taller, horarios, supervisión y autorización.
- [ ] Se inspeccionaron riesgos, paro y condiciones de seguridad de la plataforma.
- [ ] Se identificaron dependencias y bloqueos del Día 2; están bajo control o se ajustó la misión.
- [ ] El profesor aprobó el alcance y la seguridad, o registró observaciones y una alternativa viable.

**Estado del gate:** [APROBADO / APROBADO CON CONDICIONES / REPLANIFICAR].

**Condiciones, responsables, fecha y próxima decisión:** [ ... ]

**Revisor docente:** [ ... ] · **Enlace a commit/PR:** [ ... ]

**Criterio mínimo E1:** existe un contrato de misión y frontera individual, hay evidencia del punto de partida, un inventario verificable y un espacio de trabajo autorizado. La ausencia de algún material crítico NO debe esconderse.






---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E1"
dia: 1
responsable_registro: "equipo"
estado: "EN PREPARACIÓN"
fecha: "2026-10-26"
revision_docente: "PENDIENTE"
---

# E1 · Día 1 — ATREVERSE | Contrato de misión, inventario y dōjō

> **Regla:** sustituir los corchetes, registrar lo realmente observado y enlazar a evidencias del repositorio. **No inventar datos ni marcar pruebas no realizadas.** Los archivos del equipo resumen el trabajo compartido; las reflexiones y evidencias personales van en `participantes/<alias>/dias/E1.md`.

## 0 · Identificación, equipo y logística del dōjō

| Campo obligatorio | Dato |
|---|---|
| Fecha y horario de esta sesión | Fecha de elaboración del registro: 2026-10-26. Horario habitual de trabajo: 09:00–13:00 durante la semana. El bloque específico de 180 minutos correspondiente a E1 está pendiente de identificar. |
| Nombre / alias del equipo | Tormenta Negra · Alias propuesto: `kd26-m01-tormenta-negra` |
| Misión / plataforma | M01 · Mini-sumo autónomo |
| Objetivo verificable del robot (una frase) | Construir desde cero e integrar un robot mini-sumo autónomo que pueda avanzar, retroceder, girar y detectar a un oponente, verificando sus movimientos básicos y documentando al menos cinco pruebas de detección, sin exceder las dimensiones y el peso permitidos. |
| **Dōjō asignado — campus, edificio y sala/taller exactos** | **Tecnológico de Monterrey, Campus León / Edificio CTA / Laboratorio de Electrónica / Número de laboratorio por confirmar.** |
| Puesto o zona dentro del dōjō | Mesa de trabajo del equipo Tormenta Negra en el Laboratorio de Electrónica. Para las pruebas de movimiento se utilizará una zona despejada y delimitada dentro del espacio autorizado. |
| Horario / reserva confirmada | Horario de trabajo informado: 09:00–13:00 durante la semana. Falta registrar los días exactos y confirmar la autorización o reserva del laboratorio. |
| Responsable del espacio y contacto institucional | Profesor Camilo René Duque. Canal de contacto: medio institucional utilizado para la materia; dirección específica por confirmar. |
| Acceso, aforo y ajustes de accesibilidad | Acceso de acuerdo con las indicaciones del Laboratorio de Electrónica. Se mantendrán despejadas las mesas y zonas de circulación. Los apoyos o ajustes necesarios se acordarán directamente con cada integrante sin registrar información sensible. |
| Salidas, botiquín, extintor y punto de reunión | Las ubicaciones exactas deberán identificarse físicamente al ingresar al laboratorio y confirmarse con el profesor o encargado antes de comenzar las pruebas. |
| Zonas segregadas por riesgo | Zona de conexiones electrónicas y programación, zona de herramientas y montaje, y zona delimitada para ensayos del robot. No se realizarán pruebas de movimiento cerca de los bordes de las mesas. |
| Ubicación de materiales y resguardo nocturno | Actualmente el equipo no cuenta con materiales físicos. Cuando se adquieran, se organizarán en una caja identificada como Tormenta Negra. El resguardo dentro del laboratorio dependerá de la autorización del responsable. |
| Plan de sustitución si falla el espacio | Solicitar al profesor un espacio alternativo autorizado. Si no está disponible, continuar con programación, diseño CAD, revisión de fichas técnicas y documentación sin realizar pruebas físicas. |
| Instructor o supervisor presente en la sesión | Profesor Camilo René Duque. Presencia en el bloque específico de E1 pendiente de confirmar. |

> ⛔ **No se permite avanzar a pruebas físicas sin dōjō concreto y autorización del responsable.** El espacio de trabajo previsto es el Laboratorio de Electrónica del CTA. Antes de iniciar pruebas se confirmarán el número de laboratorio, el horario autorizado y las condiciones de seguridad.

## 1 · Integrantes, responsabilidades, accesibilidad y decisiones (0–15 min)

El equipo Tormenta Negra está integrado por cuatro estudiantes: Claudio, Sara, Max y Joel.

Los cuatro ya generaron su compromiso individual en Mission Forge C2. Las responsabilidades mostradas a continuación son una propuesta de organización para construir el robot; deberán coincidir con los alcances seleccionados por cada integrante.

| Alias GitHub | Rol inicial | Carta y frontera (D/S/E; F1–F4) | Alcances ID (1–3) | Kit personal (archivo) | Necesidad de apoyo o accesibilidad acordada |
|---|---|---|---|---|---|
| Claudio (usuario GitHub por registrar) | Propuesta: diseño mecánico, estructura, distribución de componentes y revisión de dimensiones. | Consultar su compromiso original de Mission Forge C2. | Consultar compromiso original. | `participantes/<alias-claudio>/compromiso.md` | Por acordar directamente con Claudio, sin registrar datos sensibles. |
| Sara Gabriela Díaz Rayas (usuario GitHub por registrar) | Integración de motores, sensores y pruebas de funcionamiento. | Consultar carta y frontera exactas en su compromiso original. | MS03 · Motorización y tracción; MS06 · Detección del oponente. | `participantes/<alias-sara>/compromiso.md` | Apoyo del equipo para revisar conexiones y realizar pruebas de integración cuando sea necesario. |
| Max (usuario GitHub por registrar) | Propuesta: electrónica, alimentación, conexiones y compatibilidad de componentes. | Consultar su compromiso original de Mission Forge C2. | Consultar compromiso original. | `participantes/<alias-max>/compromiso.md` | Por acordar directamente con Max, sin registrar datos sensibles. |
| Joel (usuario GitHub por registrar) | Propuesta: programación autónoma, pruebas generales y documentación. | Consultar su compromiso original de Mission Forge C2. | Consultar compromiso original. | `participantes/<alias-joel>/compromiso.md` | Por acordar directamente con Joel, sin registrar datos sensibles. |

**Acuerdo de colaboración:**

Como equipo queremos dividir el trabajo para que cada integrante tenga una responsabilidad principal, pero también buscamos apoyarnos cuando sea necesario, ya que todos los sistemas del robot están relacionados.

Nuestra propuesta es organizar el proyecto en diseño mecánico, electrónica, programación e integración. Aunque cada persona trabaje principalmente en una de estas áreas, todos participaremos en las decisiones importantes y en las pruebas generales.

Cuando tengamos que elegir un componente o modificar alguna parte del diseño, primero revisaremos las opciones y después tomaremos una decisión considerando el costo, la compatibilidad, la seguridad y el tiempo disponible.

Si encontramos un problema, intentaremos identificar su causa antes de cambiar componentes o modificar el programa. También aprovecharemos los conocimientos de cada integrante para apoyarnos entre nosotros, siguiendo la idea de colaboración senpai–kōhai.

Durante las sesiones mantendremos organizada nuestra mesa, evitaremos modificar conexiones mientras el sistema esté energizado y realizaremos pausas cuando sean necesarias.

Para resolver desacuerdos compararemos las alternativas con base en las restricciones del reglamento y los resultados de las pruebas, buscando que todos puedan participar.

## 2 · Demostración de la plataforma y seguridad (15–35 min)

| Elemento | Observación directa | Evidencia / vínculo |
|---|---|---|
| Plataforma base inspeccionada (estado, modelo, ID inventario) | La plataforma seleccionada es M01 · Mini-sumo autónomo. El equipo construirá el robot desde cero y actualmente no cuenta con componentes físicos adquiridos. Por lo tanto, todavía no existe una plataforma ensamblada que pueda inspeccionarse. | Registro de condición inicial V0 en este documento. Fotografía del primer conjunto de componentes pendiente. |
| Funciones existentes y límites comprobados | No hay funciones físicas comprobadas porque todavía no se cuenta con el robot ni con sus componentes. Se plantea desarrollar avance, retroceso, giros, detección del oponente y reconocimiento del borde del Dohyo. | Pruebas de motores y sensores pendientes. |
| Paro de emergencia / desconexión segura ensayados | No se ha ensayado un paro físico. Se contempla integrar un interruptor general, protección de alimentación y un sistema de inicio y paro infrarrojo compatible con el reglamento. | Procedimiento propuesto en `docs/seguridad.md`. Evidencia de prueba pendiente. |
| Restricciones de competición o exhibición verificadas | Se identificaron como requisitos de diseño las dimensiones máximas de 10 × 10 cm, el peso máximo de 500 g, el funcionamiento autónomo y el sistema de inicio y paro infrarrojo. La versión aplicable del reglamento deberá corroborarse antes de fabricar. | [Reglamento Robolympics](https://profcduquetec.github.io/robolympics/). |
| Riesgos vistos y medidas activas | Riesgos previstos: conexiones incorrectas, cortocircuitos, sobrecorriente, movimiento inesperado, daño a la batería y caída del robot. Las medidas están propuestas, pero su implementación física está pendiente. | `docs/seguridad.md` — documento y validación pendientes. |

**Normas específicas según misión:**

- **M01:** verificar la compatibilidad de la alimentación con motores, driver, sensores y microcontrolador.
- Utilizar protección eléctrica adecuada y evitar cables expuestos que puedan provocar cortocircuitos.
- Desconectar la batería antes de modificar conexiones.
- Realizar las primeras pruebas de motores con las ruedas levantadas de la superficie.
- No tocar las ruedas mientras estén girando.
- Mantener el Dohyo o área de pruebas despejada y delimitada.
- Utilizar un objeto o robot de referencia para las pruebas de detección.
- Evitar mecanismos que dañen la superficie de la pista.
- Verificar el sistema de inicio y paro antes de realizar movimientos autónomos.
- Comprobar las dimensiones y el peso del robot antes de la homologación.
- No comenzar pruebas físicas sin autorización del responsable del Laboratorio de Electrónica.

## 3 · Diagnóstico práctico colectivo (35–65 min)

**Condición inicial V0 de la plataforma:**

Nuestro equipo construirá el robot mini-sumo autónomo desde cero.

Actualmente no contamos con materiales físicos para comenzar el montaje, por lo que nuestro punto de partida consiste en definir la propuesta técnica, identificar los componentes necesarios y organizar el trabajo entre los integrantes.

La idea es utilizar un sistema de tracción diferencial con dos motores DC con reductora, un driver de motores, un microcontrolador y sensores para detectar al oponente y el borde del Dohyo.

Proponemos utilizar un ESP32 como controlador principal, aunque tendremos que confirmar que sea compatible con los componentes que seleccionemos.

También debemos definir las dimensiones del chasis y distribuir los elementos de manera que el robot no exceda los 10 × 10 cm ni los 500 gramos.

Como todavía no tenemos componentes, no podemos afirmar que los motores, sensores o sistema de alimentación funcionen. Por esta razón las primeras pruebas estarán enfocadas en verificar cada subsistema por separado.

| Prueba diagnóstica | Condición y procedimiento | Resultado observado / unidad | Problema / causa probable | Evidencia |
|---|---|---|---|---|
| 1. Movimiento y control de motores | Conectar dos motores DC a un driver compatible y ejecutar comandos breves para comprobar avance, retroceso y giros. Realizar las primeras pruebas con las ruedas levantadas. | No realizada. Actualmente no contamos con motores ni driver. Se registrarán voltaje, sentido de giro y respuesta de cada motor cuando se realice. | Bloqueante actual: falta de componentes. Riesgos previstos: conexiones incorrectas, alimentación insuficiente o incompatibilidad. | Pendiente de fotografía, código y video. |
| 2. Lectura de sensores | Conectar los sensores al microcontrolador y registrar sus lecturas al colocar un objeto a diferentes distancias. | No realizada. Actualmente no contamos con sensores. Se registrará distancia de detección en centímetros y número de lecturas correctas. | Bloqueante actual: falta de sensores. Riesgos previstos: interferencia, calibración incorrecta o conexión equivocada. | Pendiente de tabla de lecturas y fotografía. |
| 3. Comportamiento de la misión | Integrar motores y sensores para comprobar que el robot detecte a un oponente, gire hacia él y avance. Realizar cinco intentos documentados. | No realizada. Todavía no existe una plataforma física integrada. | Depende de adquirir componentes, completar el montaje y validar los subsistemas anteriores. | Pendiente de video y registro de cinco intentos. |

**Capacidades ya disponibles y dependencias:**

Aunque todavía no contamos con materiales físicos, podemos aprovechar los conocimientos que hemos adquirido en programación, electrónica, sensores y control de motores durante la carrera.

También tenemos los cuatro compromisos individuales generados mediante Mission Forge C2 y un repositorio de GitHub creado para organizar el proyecto.

Para comenzar la construcción necesitamos seleccionar y conseguir los motores, ruedas, driver, microcontrolador, sensores, batería y materiales del chasis.

El alcance MS03 dependerá principalmente de los motores, el driver, la alimentación y la estructura mecánica.

El alcance MS06 dependerá de contar con sensores compatibles, un controlador programable y un objeto de referencia para realizar las pruebas.

Después de comprobar estos subsistemas por separado podremos integrar la detección con el movimiento del robot.

También necesitamos que la estructura mecánica permita colocar los sensores correctamente y mantener todos los componentes dentro de los límites del reglamento.

## 4 · Integración de Mission Forge C2 y pacto de alcances (65–100 min)

Cada participante debe colocar el archivo **Markdown original generado por la web** en:

`participantes/<alias>/compromiso.md`

Se conserva íntegro (incluido el frontmatter y la lista de katas). Los nuevos alcances/katas diseñados por el participante quedan claramente marcados como *propuesta propia* y requieren aprobación técnica.

**Catálogo de referencia:** [Google Sheets C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit) · **Configurador Mission Forge:** [`herramientas/mission-forge-c2.html`](../../herramientas/mission-forge-c2.html) (descárgalo y ábrelo en el navegador; funciona sin Internet).

Los cuatro integrantes ya generaron sus compromisos individuales. Falta registrar sus rutas exactas dentro del repositorio y comprobar que cada archivo conserve su contenido original.

| Alias | Kit enlazado | Alcance principal | Complementos | Katas elegidos o nuevos | Horas mín.–máx. | Evidencia final esperada | Negociación aprobada |
|---|---|---|---|---|---|---|---|
| Claudio | `participantes/<alias-claudio>/compromiso.md` | Consultar compromiso original. | Consultar compromiso original. | Consultar katas seleccionados en su kit. | Según compromiso original. | Evidencia correspondiente a sus alcances seleccionados. | Pendiente de registrar aprobación docente. |
| Sara | `participantes/<alias-sara>/compromiso.md` | MS03 · Integrar y verificar motorización y tracción. | MS06 · Integrar sensores de detección del oponente. | Montar motor y rueda; probar sentido de giro con comandos breves; ensayar cinco encuentros y documentar errores de percepción. | Según compromiso original; estimación inicial de planeación: 6–8 h. | Video de movimientos básicos, código, conexiones y registro de cinco pruebas de detección. | Pendiente de registrar aprobación docente. |
| Max | `participantes/<alias-max>/compromiso.md` | Consultar compromiso original. | Consultar compromiso original. | Consultar katas seleccionados en su kit. | Según compromiso original. | Evidencia correspondiente a sus alcances seleccionados. | Pendiente de registrar aprobación docente. |
| Joel | `participantes/<alias-joel>/compromiso.md` | Consultar compromiso original. | Consultar compromiso original. | Consultar katas seleccionados en su kit. | Según compromiso original. | Evidencia correspondiente a sus alcances seleccionados. | Pendiente de registrar aprobación docente. |

**Resultado de negociación grupal:**

Como propuesta inicial queremos organizar el desarrollo del mini-sumo en cuatro áreas principales: diseño mecánico, electrónica y alimentación, programación e integración de motores y sensores.

Sara trabajará principalmente en los alcances MS03 y MS06, enfocados en comprobar el funcionamiento de los motores y la detección del oponente.

Para integrar estos sistemas será necesario acordar el modelo del microcontrolador, los pines utilizados, los voltajes de alimentación y las señales que recibirá el programa.

También debemos definir cómo se distribuirán los componentes dentro del chasis, ya que el espacio y el peso disponibles son limitados.

Consideramos que primero debemos conseguir los componentes básicos y comprobar el funcionamiento de los motores. Después podremos conectar los sensores e integrar la programación.

Si tenemos poco tiempo, daremos prioridad a que el robot avance, retroceda, gire y detecte al oponente antes de agregar mejoras adicionales.

Los alcances definitivos de Claudio, Max y Joel, así como las interfaces entre sus trabajos, deberán ajustarse a sus compromisos originales.

## 5 · Inventario exhaustivo y especificación de materiales (obligatorio)

### 5.1 Inventario maestro del equipo

Completar **cada recurso requerido**: estructura, electrónica, actuadores, sensores, herramientas, consumibles, instrumentos, software, datos, red, espacios de ensayo y elementos de seguridad. Añadir filas sin límite.

Actualmente el equipo no cuenta con materiales físicos propios para construir el robot. Por lo tanto, los componentes que necesitamos adquirir tienen cantidad confirmada igual a cero.

Las herramientas, instrumentos y recursos del Laboratorio de Electrónica todavía deben verificarse con el responsable del espacio.

Las especificaciones de los componentes son preliminares y deberán ajustarse después de seleccionar los modelos definitivos.

| ID | Categoría | Material o recurso (especificación exacta: modelo, medida, versión o característica) | Cantidad requerida + unidad | Cantidad confirmada | Fuente/proveedor o dueño | Ubicación física o ruta digital | Responsable | Estado (disponible/reservado/falta) | Alternativa compatible | Día requerido |
|---|---|---|---|---|---|---|---|---|---|---|
| MAT-001 | Robot/plataforma | Mini-sumo autónomo M01, construcción desde cero, máximo 10 × 10 cm y 500 g. | 1 sistema | 0 | Equipo | Laboratorio de Electrónica, CTA | Equipo | Falta construir | Integración por subsistemas | D1–D5 |
| MAT-002 | Mecánica | Chasis compacto de aproximadamente 90 × 90 mm, material ligero y resistente. | 1 ud. | 0 | Por adquirir o fabricar | Laboratorio de Electrónica | Claudio, rol propuesto | Falta | Chasis impreso en 3D o estructura comercial compatible | D2 |
| MAT-003 | Actuadores | Motor DC con reductora, voltaje, relación de reducción y corriente por seleccionar. | 2 uds. | 0 | Por adquirir | Laboratorio de Electrónica | Sara | Falta | Motores DC equivalentes compatibles | D2 |
| MAT-004 | Mecánica | Ruedas de buena adherencia compatibles con los ejes de los motores. | 2 uds. | 0 | Por adquirir | Laboratorio de Electrónica | Claudio, rol propuesto | Falta | Ruedas de goma compatibles | D2 |
| MAT-005 | Electrónica | Driver de dos canales para motores DC, con capacidad suficiente para la corriente de los motores seleccionados. | 1 ud. | 0 | Por adquirir | Laboratorio de Electrónica | Sara / Max, rol propuesto | Falta | TB6612FNG u otro driver compatible tras verificar corriente | D2 |
| MAT-006 | Control | ESP32 DevKit, lógica de 3.3 V y pines suficientes para controlar motores y leer sensores. | 1 ud. | 0 | Por adquirir | Laboratorio de Electrónica | Programación / Sara | Falta | Microcontrolador equivalente | D2 |
| MAT-007 | Sensores | Sensores de proximidad para detección frontal y lateral del oponente; alcance y modelo por seleccionar. | 3 uds. | 0 | Por adquirir | Laboratorio de Electrónica | Sara | Falta | Sensores infrarrojos o de distancia compatibles | D2 |
| MAT-008 | Sensores | Sensores reflectivos inferiores para diferenciar superficie negra y borde blanco. | 2 uds. | 0 | Por adquirir | Laboratorio de Electrónica | Sara / programación | Falta | Módulos reflectivos equivalentes | D2 |
| MAT-009 | Control | Receptor infrarrojo compatible con el protocolo de inicio y paro requerido. | 1 ud. | 0 | Por adquirir | Laboratorio de Electrónica | Max, rol propuesto | Falta | Receptor IR compatible | D2 |
| MAT-010 | Control | Control remoto infrarrojo compatible con el receptor y el reglamento. | 1 ud. | 0 | Por adquirir | Laboratorio de Electrónica | Max, rol propuesto | Falta | Sistema IR compatible autorizado | D2 |
| MAT-011 | Alimentación | Batería recargable, voltaje, capacidad y corriente por definir según motores y electrónica. | 1 ud. | 0 | Por adquirir | Área segura autorizada | Max, rol propuesto | Falta | Batería compatible equivalente | D2 |
| MAT-012 | Alimentación | Cargador adecuado para la química y configuración de la batería seleccionada. | 1 ud. | 0 | Por adquirir | Área autorizada | Max, rol propuesto | Falta | Cargador compatible aprobado | D2 |
| MAT-013 | Seguridad eléctrica | Interruptor general de alimentación con capacidad adecuada para el sistema. | 1 ud. | 0 | Por adquirir | Laboratorio de Electrónica | Max, rol propuesto | Falta | Interruptor equivalente | D2 |
| MAT-014 | Seguridad eléctrica | Protección contra sobrecorriente dimensionada según batería y conductores. | 1 conjunto | 0 | Por adquirir | Laboratorio de Electrónica | Max, rol propuesto | Falta | Fusible o protección equivalente | D2 |
| MAT-015 | Conexiones | Cables de señal y alimentación de calibre adecuado. | 1 juego | 0 | Por adquirir | Laboratorio de Electrónica | Equipo | Falta | Cableado equivalente | D2 |
| MAT-016 | Conexiones | Conectores y terminales compatibles con motores, sensores, controlador y batería. | 1 juego | 0 | Por adquirir | Laboratorio de Electrónica | Equipo | Falta | Conectores equivalentes | D2 |
| MAT-017 | Mecánica | Tornillos, tuercas, separadores y soportes para montaje. | 1 juego | 0 | Por adquirir | Laboratorio de Electrónica | Claudio, rol propuesto | Falta | Sujetadores compatibles | D2 |
| MAT-018 | Mecánica | Pala frontal fija ligera, con bordes seguros para no dañar el Dohyo. | 1 ud. opcional | 0 | Por adquirir o fabricar | Laboratorio de Electrónica | Claudio, rol propuesto | Opcional | Frente inclinado integrado al chasis | D3 |
| MAT-019 | Herramientas | Juego de desarmadores y pinzas de montaje. | 1 juego | 0 propios | Laboratorio / equipo | Laboratorio de Electrónica | Equipo | Disponibilidad del laboratorio por verificar | Herramientas equivalentes | D2 |
| MAT-020 | Herramientas | Cautín, soporte y accesorios de soldadura. | 1 estación | 0 propias | Laboratorio | Área de soldadura por confirmar | Max, rol propuesto | Disponibilidad por verificar | Conectores preensamblados | D2 |
| MAT-021 | Consumibles | Soldadura y material aislante para conexiones. | 1 juego | 0 | Por adquirir / laboratorio | Laboratorio de Electrónica | Equipo | Falta confirmar suministro | Conectores sin soldadura para pruebas | D2 |
| MAT-022 | Medición | Multímetro digital para voltaje y continuidad. | 1 ud. | 0 propios | Laboratorio / equipo | Laboratorio de Electrónica | Max, rol propuesto | Disponibilidad por verificar | Multímetro equivalente | D2 |
| MAT-023 | Medición | Báscula digital con resolución adecuada para verificar peso máximo de 500 g. | 1 ud. | 0 propias | Laboratorio / equipo | Área de medición por confirmar | Equipo | Disponibilidad por verificar | Báscula equivalente | D3 |
| MAT-024 | Medición | Regla o calibrador para verificar dimensiones. | 1 ud. | 0 propios | Laboratorio / equipo | Área de medición por confirmar | Claudio, rol propuesto | Disponibilidad por verificar | Instrumento equivalente | D2 |
| MAT-025 | Software | Arduino IDE compatible con ESP32; versión definitiva por registrar. | 1 instalación | No verificada | Software gratuito | Computadora del equipo | Joel, rol propuesto | Instalación por verificar | PlatformIO compatible | D1 |
| MAT-026 | Software | Paquete de tarjetas ESP32 y controlador USB correspondiente. | 1 instalación | No verificada | Herramientas de desarrollo | Computadora del equipo | Joel, rol propuesto | Instalación por verificar | Entorno compatible equivalente | D1 |
| MAT-027 | Software | Repositorio GitHub para documentación y código del equipo. | 1 repositorio | 1 creado | Equipo Tormenta Negra | Repositorio existente; enlace pendiente de registrar | Equipo | Disponible, ruta pendiente | Copia local del proyecto | D1 |
| MAT-028 | Software/CAD | Herramienta CAD para diseño y revisión dimensional del chasis. | 1 instalación | No verificada | Software académico o gratuito | Computadora del equipo | Claudio, rol propuesto | Por verificar | Software CAD equivalente | D1 |
| MAT-029 | Conectividad | Computadora y cable USB de datos compatible con el microcontrolador. | 1 conjunto | No verificada | Equipo / laboratorio | Laboratorio de Electrónica | Programación | Por verificar | Equipo y cable equivalentes | D2 |
| MAT-030 | Zona de pruebas | Dohyo circular de 75 cm de diámetro, superficie negra y borde blanco de 2.5 cm, conforme a la configuración de referencia. | 1 ud. | 0 propios | Laboratorio / equipo | Zona de pruebas por confirmar | Equipo | Disponibilidad por verificar | Pista de práctica equivalente para diagnóstico | D3 |
| MAT-031 | Pruebas | Objeto o robot de referencia para ensayar detección del oponente. | 1 ud. | 0 | Por conseguir | Zona de pruebas | Sara | Falta | Obstáculo estable de referencia | D3 |
| MAT-032 | Seguridad | Zona delimitada de pruebas, procedimiento de desconexión y superficie de trabajo adecuada. | 1 conjunto | No verificada | Laboratorio de Electrónica | CTA | Equipo | Pendiente de validación | Otra zona autorizada | D1 |
| MAT-033 | Documentación | Cámara o teléfono para registrar fotos y videos. | 1 ud. | No verificada | Equipo | Área de trabajo | Equipo | Por verificar | Dispositivo equivalente | D1 |
| MAT-034 | Fabricación | Acceso a impresora 3D y material de impresión, si se selecciona ese método de fabricación. | 1 servicio | No verificado | Laboratorio / proveedor | Área de fabricación por confirmar | Claudio, rol propuesto | Por verificar | Chasis comercial o fabricación alternativa | D2 |

También disponible el archivo [`datos/inventario_materiales.csv`](../../datos/inventario_materiales.csv) para registrar muchos materiales sin agrandar esta tabla.

### 5.2 Lista de cotejo específica por plataforma (elegir solo la misión asignada)

| Misión | Revisar y especificar (marca/modelo/cantidad reales) |
|---|---|
| M01 · Mini-sumo autónomo | Se construirá desde cero. Se requieren un chasis de máximo 10 × 10 cm, dos motores DC con reductora, dos ruedas de buena adherencia, un driver de motores de dos canales, un ESP32 o controlador equivalente, tres sensores propuestos de detección del oponente, dos sensores reflectivos inferiores, receptor y control infrarrojo, batería y cargador compatibles, protección eléctrica, interruptor general, cableado, conectores, tornillería, herramientas, multímetro, báscula, regla o calibrador, computadora con entorno de programación, software CAD, repositorio GitHub, Dohyo de práctica y objeto de referencia. Actualmente no se cuenta con componentes físicos propios; las marcas y modelos definitivos se seleccionarán antes de adquirirlos. |

**Enlaces a fichas técnicas / instrucciones de conexión, fabricación y seguridad:**

- Reglamento Robolympics: https://profcduquetec.github.io/robolympics/
- Documentación ESP32: https://docs.espressif.com/projects/esp-idf/en/stable/esp32/
- Arduino IDE: https://docs.arduino.cc/software/ide/
- Catálogo Mission Forge C2: https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit
- Protocolo de seguridad del equipo: `docs/seguridad.md` — pendiente de crear y validar.
- Diagrama de conexiones: `docs/conexiones.md` — pendiente de crear.
- Inventario verificable: `datos/inventario_materiales.csv` — pendiente de actualizar.
- Fichas técnicas de motores, driver, sensores y batería: pendientes de seleccionar los modelos reales.

### 5.3 Riesgos de recursos y abastecimiento

| Bloqueante | A qué alcance afecta | Solución prevista / fecha y responsable | Impacto si no se resuelve |
|---|---|---|---|
| No contar todavía con motores y driver | MS03 · Motorización y tracción | Seleccionar motores y driver compatibles antes de D2. Responsable propuesto: Sara y apoyo de electrónica. | No podrán realizarse pruebas de movimiento. |
| No contar con sensores | MS06 · Detección del oponente | Seleccionar sensores compatibles con el controlador y definir cantidades antes de D2. Responsable: Sara. | No podrán realizarse las cinco pruebas de detección. |
| No contar con batería ni protección eléctrica | MS03 y sistema completo | Definir consumo de motores y electrónica para seleccionar alimentación segura. Responsable propuesto: Max. | No podrá energizarse el robot de manera segura. |
| No contar con chasis | Integración mecánica | Diseñar una estructura compacta que cumpla las dimensiones permitidas. Responsable propuesto: Claudio. | No podrán montarse los componentes de forma definitiva. |
| No contar con sistema infrarrojo | Integración general y seguridad | Seleccionar sistema compatible con el reglamento antes de realizar pruebas autónomas completas. Responsable propuesto: Max y Joel. | El robot podría no cumplir los requisitos de competencia. |
| No contar con pista de práctica | Pruebas de detección y movimiento | Solicitar una pista o espacio autorizado de ensayo. Responsable: equipo. | No podrá verificarse el comportamiento completo dentro del Dohyo. |
| Disponibilidad de herramientas del laboratorio no verificada | Construcción y medición | Revisar con el profesor Camilo René Duque qué herramientas pueden utilizarse. Responsable: equipo. | Podría retrasarse el montaje o requerirse conseguir herramientas. |
| No confirmar autorización y condiciones de seguridad | Todos los alcances físicos | Confirmar laboratorio, horario, supervisor y medidas de seguridad antes de energizar. Responsable: equipo y docente. | Las pruebas físicas deberán posponerse. |
| Exceder peso o dimensiones | Diseño e integración | Verificar dimensiones del CAD y pesar el robot durante el montaje. Responsable propuesto: Claudio y equipo. | El robot podría no pasar homologación. |
| Errores de comunicación entre sensores y motores | MS03 y MS06 | Definir pines, voltajes y señales; probar cada subsistema por separado. Responsable: Sara y apoyo de programación. | El robot podría realizar movimientos incorrectos. |

**Materiales completos para ejecutar el Día 2:** **No.** Actualmente no se cuenta con los componentes físicos necesarios.

**Confirmado por:** Equipo Tormenta Negra respecto a la falta de materiales propios. Disponibilidad del laboratorio pendiente de revisión con el profesor Camilo René Duque.

**Fecha/hora:** Registro elaborado el 2026-10-26; hora de validación del inventario pendiente.

## 6 · Kata 0 — exploración técnica de arranque (100–160 min)

| Integrante/alcance | Pregunta técnica | Mini-prueba o prototipo de exploración | Resultado o error observado | Evidencia enlazada | Acción necesaria antes de D2 |
|---|---|---|---|---|---|
| Claudio / alcance individual por registrar | ¿Cómo podemos distribuir todos los componentes dentro de 10 × 10 cm sin exceder 500 g? | Propuesta: realizar un boceto o modelo CAD del chasis, considerando motores, ruedas, sensores, batería y controlador. | No realizado o no documentado. El equipo todavía no cuenta con componentes físicos para verificar dimensiones reales. | CAD o boceto pendiente de enlazar. | Consultar compromiso de Claudio y definir medidas de los componentes seleccionados. |
| Sara / MS03 | ¿Podemos lograr que los dos motores avancen, retrocedan y giren correctamente? | Propuesta: conectar los motores al driver y ejecutar comandos breves para comprobar su sentido de giro. | No realizado. Actualmente no se cuenta con motores ni driver. | Código, fotografías y video pendientes. | Conseguir motores, driver, alimentación y cables compatibles. |
| Sara / MS06 | ¿Podemos detectar al oponente desde diferentes posiciones y utilizar esa información para orientar el robot? | Propuesta: conectar sensores de proximidad, colocar un objeto de referencia y realizar cinco pruebas de detección. | No realizado. Actualmente no se cuenta con sensores. | Tabla de cinco pruebas y video pendientes. | Conseguir sensores y confirmar compatibilidad con el controlador. |
| Max / alcance individual por registrar | ¿Qué alimentación y conexiones necesitamos para operar motores y microcontrolador de manera segura? | Propuesta: revisar fichas técnicas, elaborar un diagrama eléctrico y calcular las necesidades de alimentación. | No realizado o no documentado. Los modelos definitivos de componentes aún no se han seleccionado. | Diagrama eléctrico pendiente. | Consultar compromiso de Max y seleccionar batería, protección y driver compatibles. |
| Joel / alcance individual por registrar | ¿Cómo podemos programar los movimientos básicos y después integrar la detección del oponente? | Propuesta: definir funciones de avance, retroceso, giro, espera y paro, además de la lógica de lectura de sensores. | No realizado o no documentado. Todavía no existe un robot físico integrado. | Código y diagrama de estados pendientes. | Consultar compromiso de Joel y acordar controlador, pines e interfaces. |

**Integración entre subequipos:**

Para integrar el robot necesitamos que los subsistemas mecánico, electrónico y de programación sean compatibles.

La propuesta consiste en utilizar dos motores DC con reductora para generar movimiento mediante tracción diferencial. El driver permitirá controlar ambos motores de manera independiente.

El microcontrolador recibirá las señales de los sensores y decidirá si el robot debe buscar al oponente, girar hacia él, avanzar o evitar el borde del Dohyo.

También necesitamos integrar un sistema de inicio y paro infrarrojo para cumplir con los requisitos de competencia.

Antes de comenzar el montaje debemos acordar el modelo de los motores, la corriente que necesitan, el voltaje de alimentación, los pines del microcontrolador y el tipo de señal de cada sensor.

La primera prioridad será comprobar el movimiento básico. Después integraremos los sensores y verificaremos que sus lecturas permitan modificar el comportamiento del robot.

Por el momento no se ha validado ninguna interfaz física porque todavía no contamos con materiales.

## 7 · Cierre: contrato técnico y puerta de salida E1 (160–180 min)

- [x] El objetivo colectivo tiene condición de éxito verificable.
- [ ] Cada estudiante depositó **su kit Markdown original** en `participantes/<alias>/compromiso.md`. Los cuatro compromisos ya fueron generados; falta verificar su ubicación dentro del repositorio.
- [ ] Cada estudiante completó [E1 personal](../../participantes/_plantilla/dias/E1.md) y definió frontera, evidencia y alcance negociado. Los compromisos existen, pero falta confirmar las evidencias personales y la negociación.
- [ ] El inventario está **completo** y cada recurso indica cantidad, especificación, disponibilidad y responsable. Se elaboró el inventario preliminar, pero faltan modelos definitivos y verificación de recursos del laboratorio.
- [ ] Se asignó **dōjō específico** con edificio, salón/taller, horarios, supervisión y autorización. Se identificó el Laboratorio de Electrónica del CTA y el horario de trabajo; falta confirmar número de laboratorio, reserva y autorización.
- [ ] Se inspeccionaron riesgos, paro y condiciones de seguridad de la plataforma. Se identificaron riesgos previstos, pero todavía no hay plataforma física ni pruebas de seguridad.
- [x] Se identificaron dependencias y bloqueos del Día 2; se documentó la falta de materiales y las acciones necesarias para resolverla.
- [ ] El profesor aprobó el alcance y la seguridad, o registró observaciones y una alternativa viable. Pendiente de revisión del profesor Camilo René Duque.

**Estado del gate:** **REPLANIFICAR**.

**Condiciones, responsables, fecha y próxima decisión:**

Para continuar con el desarrollo del robot mini-sumo necesitamos completar la selección y adquisición de materiales.

Como todavía no contamos con componentes físicos, primero debemos definir los modelos de motores, driver, sensores, microcontrolador y batería, verificando que sean compatibles entre sí.

También necesitamos confirmar qué herramientas e instrumentos están disponibles en el Laboratorio de Electrónica del CTA para evitar adquirir recursos que podamos utilizar ahí con autorización.

Claudio, Sara, Max y Joel deberán revisar sus compromisos individuales y acordar cómo se relacionan sus alcances para evitar problemas durante la integración.

Sara continuará con la planeación de MS03 y MS06, enfocándose en el control de motores y la detección del oponente.

Una vez que tengamos los componentes necesarios podremos realizar las primeras pruebas de movimiento y sensores, documentando los resultados con fotografías, videos, código y tablas.

Antes de comenzar cualquier prueba física debemos confirmar las condiciones de seguridad, el espacio exacto y la autorización correspondiente.

**Próxima decisión:** Revisar con el profesor Camilo René Duque la selección de componentes, disponibilidad de herramientas, condiciones de seguridad y viabilidad del plan de construcción desde cero.

**Revisor docente:** Camilo René Duque — revisión pendiente.

**Enlace a commit/PR:** Repositorio GitHub creado; enlace al commit o pull request de E1 pendiente de registrar.

**Criterio mínimo E1:** existe un contrato de misión y frontera individual, hay evidencia del punto de partida, un inventario verificable y un espacio de trabajo autorizado. La ausencia de algún material crítico NO debe esconderse.



