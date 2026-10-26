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
| Fecha y horario de esta sesión | 26 de octubre de 2026. Nuestro horario de trabajo es de 9:00 a 12:00, durante los cinco días de Kaizen Dōjō. |
| Nombre / alias del equipo | Tormenta Negra. |
| Misión / plataforma | M01 · Mini-sumo autónomo. |
| Objetivo verificable del robot (una frase) | Construir desde cero un robot mini-sumo autónomo que pueda avanzar, retroceder, girar, detectar a un oponente y reaccionar según las lecturas de sus sensores, comprobando su funcionamiento mediante pruebas documentadas. |
| **Dōjō asignado — campus, edificio y sala/taller exactos** | Tecnológico de Monterrey, Campus León / Edificio CTA / Laboratorio de Electrónica. Número de laboratorio pendiente de confirmar. |
| Puesto o zona dentro del dōjō | Trabajaremos en una mesa del Laboratorio de Electrónica. Para las pruebas de movimiento utilizaremos una zona despejada donde podamos observar el comportamiento del robot sin poner en riesgo a otras personas o equipos. |
| Horario / reserva confirmada | Nuestro horario de trabajo es de 9:00 a 12:00 durante la semana. La autorización específica del espacio está pendiente de confirmar. |
| Responsable del espacio y contacto institucional | Profesor Camilo René Duque. El contacto será mediante los canales institucionales de la materia. |
| Acceso, aforo y ajustes de accesibilidad | Seguiremos las indicaciones del laboratorio y mantendremos despejados los pasillos y nuestra mesa de trabajo. Si algún integrante necesita apoyo con alguna actividad, nos organizaremos para ayudarlo. |
| Salidas, botiquín, extintor y punto de reunión | Antes de comenzar las pruebas físicas identificaremos las salidas, el botiquín, el extintor y el punto de reunión, con apoyo del responsable del laboratorio. |
| Zonas segregadas por riesgo | Separaremos el área de programación y conexiones del espacio donde realicemos las pruebas de movimiento. También tendremos cuidado con las herramientas y los componentes eléctricos. |
| Ubicación de materiales y resguardo nocturno | Nos proporcionarán un kit para construir el mini-sumo desde cero. Cuando lo recibamos, revisaremos sus componentes y los organizaremos en un lugar seguro. El sitio de resguardo se acordará con el responsable del laboratorio. |
| Plan de sustitución si falla el espacio | Si no podemos utilizar el Laboratorio de Electrónica, avanzaremos con el diseño, programación, revisión de componentes y documentación hasta contar con otro espacio autorizado para realizar pruebas físicas. |
| Instructor o supervisor presente en la sesión | Profesor Camilo René Duque. Presencia en el bloque específico pendiente de confirmar. |

> ⛔ **No se permite avanzar a pruebas físicas sin dōjō concreto y autorización del responsable.** Aunque ya tenemos identificado el Laboratorio de Electrónica del CTA, antes de comenzar debemos confirmar que podemos utilizarlo y revisar las condiciones de seguridad.

## 1 · Integrantes, responsabilidades, accesibilidad y decisiones (0–15 min)

Nuestro equipo está formado por cuatro integrantes: Claudio, Sara, Max y Joel. Cada uno realizó su compromiso individual en Mission Forge C2 y seleccionó los alcances que quiere desarrollar durante el proyecto.

Al revisar nuestros compromisos vimos que algunos alcances se repiten. Consideramos que esto puede ayudarnos porque podremos trabajar juntos en ciertas partes del robot, pero también tendremos que organizar las actividades para que cada integrante pueda demostrar su propia contribución.

| Alias GitHub | Rol inicial | Carta y frontera (D/S/E; F1–F4) | Alcances ID (1–3) | Kit personal (archivo) | Necesidad de apoyo o accesibilidad acordada |
|---|---|---|---|---|---|
| Claudio Gómez (alias de GitHub pendiente de registrar) | Integración de motores, programación de movimientos y desarrollo de una estrategia de ataque. | D · DOMINAR / F1 · INTEGRAR. Cartas D1 · AUTONOMOUS SYSTEM y S1 · STRATEGY 2.0. | MS03, MS07 y MS10. | `participantes/<alias-claudio>/compromiso.md` | Como todavía no tiene experiencia construyendo un mini-sumo, trabajará con apoyo del equipo para revisar conexiones, programación y pruebas. |
| Sara Gabriela Díaz Rayas (alias de GitHub pendiente de registrar) | Integración y verificación de motores y sensores de detección del oponente. | S · SUPERAR / F1 · INTEGRAR. Carta D1 · AUTONOMOUS SYSTEM. | MS03 y MS06. | `participantes/<alias-sara>/compromiso.md` | Se coordinará con los integrantes que también trabajan en motores y sensores para revisar conexiones y registrar sus propias pruebas. |
| Max Emiliano Amezcua Camacho (alias de GitHub pendiente de registrar) | Diseño y fabricación de la estructura mecánica, además de integración y pruebas de motorización. | S · SUPERAR / F1 · INTEGRAR. Carta D1 · AUTONOMOUS SYSTEM. | MS01 y MS03. | `participantes/<alias-max>/compromiso.md` | Trabajará con el equipo para verificar que el diseño mecánico sea compatible con los motores y los demás componentes. |
| Joel Alejandro Soto Muñoz (alias de GitHub pendiente de registrar) | Diseño y fabricación de la estructura mecánica e integración de sensores de detección. | D · DOMINAR / F1 · INTEGRAR. Carta D1 · AUTONOMOUS SYSTEM. | MS01 y MS06. | `participantes/<alias-joel>/compromiso.md` | Se apoyará en el equipo para aprender a integrar los componentes y relacionar las lecturas de los sensores con el funcionamiento del robot. |

**Acuerdo de colaboración:**

Como equipo queremos organizarnos para que todos podamos participar en la construcción del mini-sumo y no solamente trabajar en una parte sin entender lo que hacen los demás.

Cada integrante tiene sus propios alcances, pero sabemos que varias actividades están relacionadas. Por ejemplo, Claudio, Sara y Max seleccionaron MS03, mientras que Sara y Joel seleccionaron MS06. Por eso, tendremos que dividir las tareas de forma que cada uno pueda aportar algo diferente y documentar sus resultados.

Para MS03 proponemos que Max se enfoque en el montaje mecánico de los motores, Sara en la verificación de conexiones y movimientos, y Claudio en las funciones de control y las pruebas de respuesta. Esta distribución todavía debe acordarse entre nosotros.

Para MS06 proponemos que Joel trabaje principalmente en la ubicación y medición de los sensores, mientras que Sara se enfoque en comprobar sus lecturas y cómo se pueden utilizar para modificar el movimiento del robot.

Max y Joel también comparten MS01, por lo que podrán trabajar juntos en el diseño y fabricación del chasis, dividiendo el modelado, la fabricación y la verificación del ensamblaje.

Cuando tengamos que tomar una decisión importante, primero revisaremos las opciones entre todos. Consideraremos el costo, la facilidad de implementación, el tiempo disponible y las restricciones del reglamento.

Si alguno tiene dificultades con una herramienta o componente, los demás trataremos de ayudarlo. Queremos aprovechar este proyecto para aprender cosas que todavía no sabemos hacer y aplicar los conocimientos que ya tenemos de otras materias.

También acordamos que durante las pruebas mantendremos nuestra área ordenada y que no modificaremos conexiones eléctricas mientras el robot esté energizado.

## 2 · Demostración de la plataforma y seguridad (15–35 min)

| Elemento | Observación directa | Evidencia / vínculo |
|---|---|---|
| Plataforma base inspeccionada (estado, modelo, ID inventario) | Nuestra plataforma será un mini-sumo autónomo M01 que construiremos desde cero. Nos proporcionarán un kit, pero todavía no tenemos confirmados sus componentes. Por esta razón aún no podemos inspeccionar una plataforma ensamblada. | Registro inicial V0 en este documento. Fotografías del kit pendientes de agregar cuando lo recibamos. |
| Funciones existentes y límites comprobados | Todavía no tenemos funciones físicas comprobadas. Queremos que el robot pueda avanzar, retroceder, girar, detectar al oponente y reconocer el borde del Dohyo. Estas funciones deberán verificarse después de integrar los componentes. | Registro de pruebas pendiente. |
| Paro de emergencia / desconexión segura ensayados | Todavía no hemos realizado pruebas de paro. Tenemos que revisar qué sistema de alimentación e inicio/paro incluye el kit y verificar que sea compatible con el reglamento. | Evidencia de prueba de paro pendiente. |
| Restricciones de competición o exhibición verificadas | Identificamos como restricciones de diseño las dimensiones máximas de 10 × 10 cm, el peso máximo de 500 g, el funcionamiento autónomo y el inicio y paro infrarrojo. Debemos comprobar estos requisitos con el reglamento aplicable antes de realizar la homologación. | [Reglamento Robolympics](https://profcduquetec.github.io/robolympics/). |
| Riesgos vistos y medidas activas | Identificamos posibles riesgos por conexiones incorrectas, cortocircuitos, baterías, herramientas y movimientos inesperados. Todavía tenemos que revisar físicamente el kit y confirmar las medidas de seguridad antes de energizar los componentes. | `docs/seguridad.md` — pendiente de completar y validar. |

**Normas específicas según misión:**

- **M01:** revisar los voltajes y corrientes de los componentes antes de conectarlos.
- Verificar que el driver sea compatible con los motores que utilizaremos.
- Desconectar la alimentación antes de modificar conexiones.
- No tocar las ruedas mientras los motores estén funcionando.
- Realizar las primeras pruebas de movimiento con las ruedas levantadas.
- Mantener despejada la zona de pruebas.
- No dejar herramientas o cables sueltos cerca del robot.
- Utilizar un objeto de referencia para las pruebas de detección.
- Verificar que los sensores inferiores puedan reconocer el borde blanco del Dohyo.
- Comprobar que el sistema de inicio y paro funcione correctamente.
- Evitar partes que puedan dañar la superficie de la pista.
- Revisar que el robot cumpla con el peso y las dimensiones permitidas.
- No comenzar pruebas físicas sin autorización del responsable del laboratorio.

## 3 · Diagnóstico práctico colectivo (35–65 min)

**Condición inicial V0 de la plataforma:**

Nuestro proyecto consiste en construir desde cero un robot mini-sumo autónomo.

Actualmente estamos en la etapa inicial de organización y planeación. Ya seleccionamos nuestra misión, tenemos los compromisos individuales y contamos con un repositorio de GitHub para documentar el trabajo.

Nos proporcionarán un kit con materiales para construir el robot, pero todavía necesitamos revisar qué componentes incluye, sus características y si será necesario conseguir algo adicional.

Por el momento no tenemos una estructura ensamblada ni hemos comprobado el funcionamiento de motores o sensores.

Nuestra propuesta inicial es utilizar dos motores para controlar el movimiento del robot, sensores para detectar al oponente y sensores inferiores para identificar el borde del Dohyo.

También necesitamos un controlador que reciba las señales de los sensores y determine qué movimiento debe realizar el robot.

Antes de comenzar el montaje tendremos que revisar los componentes del kit, identificar sus conexiones y verificar que sean compatibles.

Por esta razón consideramos que nuestra versión V0 corresponde a la etapa de planeación e identificación de recursos, sin pruebas físicas documentadas.

| Prueba diagnóstica | Condición y procedimiento | Resultado observado / unidad | Problema / causa probable | Evidencia |
|---|---|---|---|---|
| 1. Movimiento de motores | Cuando recibamos el kit, identificaremos los motores y el driver. Después revisaremos sus conexiones y realizaremos comandos breves para comprobar avance, retroceso y giros. | Pendiente de realizar. Todavía no contamos con los componentes para comprobar el funcionamiento. | Dependemos de recibir el kit y verificar la compatibilidad entre motores, driver y alimentación. | Fotografía de conexiones y video de prueba pendientes. |
| 2. Lectura de sensores | Identificaremos los sensores incluidos en el kit y realizaremos pruebas acercando y alejando un objeto de referencia para registrar sus lecturas. | Pendiente de realizar. Registraremos distancia y respuesta de los sensores cuando tengamos el material. | Todavía no sabemos qué modelos de sensores recibiremos ni sus características. | Tabla de lecturas y fotografías pendientes. |
| 3. Comportamiento de la misión | Después de integrar motores y sensores, comprobaremos si el robot puede detectar al oponente, orientarse hacia él y avanzar. Realizaremos cinco intentos documentados. | Pendiente de realizar. Todavía no existe una plataforma física integrada. | Primero necesitamos completar el montaje y verificar cada subsistema por separado. | Video y registro de cinco pruebas pendientes. |

**Capacidades ya disponibles y dependencias:**

Como equipo contamos con conocimientos de programación, electrónica, sensores y motores que hemos aprendido durante la carrera.

Aunque ninguno ha construido este mini-sumo completo, creemos que podemos aprovechar esos conocimientos para comenzar a trabajar por subsistemas.

También tenemos los compromisos individuales de los cuatro integrantes y un repositorio donde podremos guardar los archivos y evidencias del proyecto.

La principal dependencia actual es recibir el kit y revisar los materiales que contiene.

Para el diseño mecánico necesitamos conocer las medidas reales de los motores, batería, controlador y sensores.

Para las pruebas de movimiento necesitamos contar con motores, driver y alimentación compatibles.

Para la detección del oponente necesitamos identificar los sensores, revisar cómo se conectan y conocer el tipo de señal que entregan.

La programación autónoma dependerá de que los motores y sensores funcionen correctamente por separado.

Consideramos que primero debemos revisar los componentes y después realizar pruebas pequeñas antes de intentar integrar todo el robot.

## 4 · Integración de Mission Forge C2 y pacto de alcances (65–100 min)

Cada participante debe colocar el archivo **Markdown original generado por la web** en:

`participantes/<alias>/compromiso.md`

Se conserva íntegro, incluido el frontmatter y la lista de katas. Los nuevos alcances o katas diseñados por el participante quedan claramente marcados como *propuesta propia* y requieren aprobación técnica.

**Catálogo de referencia:** [Google Sheets C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit) · **Configurador Mission Forge:** [`herramientas/mission-forge-c2.html`](../../herramientas/mission-forge-c2.html).

Los cuatro integrantes ya generamos nuestros compromisos individuales. Cada uno seleccionó los alcances que quiere desarrollar y las evidencias que espera presentar.

| Alias | Kit enlazado | Alcance principal | Complementos | Katas elegidos o nuevos | Horas mín.–máx. | Evidencia final esperada | Negociación aprobada |
|---|---|---|---|---|---|---|---|
| Claudio Gómez | `participantes/<alias-claudio>/compromiso.md` | MS03 · Integrar y verificar motorización y tracción. | MS07 · Crear biblioteca de primitivas de movimiento; MS10 · Diseñar y comparar una estrategia de ataque. | Identificar polaridad, relaciones de transmisión y límites del driver; montar motor y rueda; programar una función segura de velocidad y parada; definir condición de disparo y trayectoria; implementar ataque frontal, lateral o condicionado por sensor. | 9–12 h. | Pruebas y mediciones del movimiento, biblioteca de funciones y comparación de estrategias de ataque, con videos cuando sea posible. | Pendiente de validación docente. |
| Sara Gabriela Díaz Rayas | `participantes/<alias-sara>/compromiso.md` | MS03 · Integrar y verificar motorización y tracción. | MS06 · Integrar sensores de detección del oponente. | Montar motor y rueda y probar sentido de giro con comandos breves; ensayar cinco encuentros y documentar errores de percepción. | 6–8 h. | Video del mini-sumo avanzando, retrocediendo, girando y realizando cinco pruebas de detección del oponente. | Pendiente de validación docente. |
| Max Emiliano Amezcua Camacho | `participantes/<alias-max>/compromiso.md` | MS01 · Diseñar y fabricar la estructura mecánica. | MS03 · Integrar y verificar motorización y tracción. | Medir componentes y dibujar envolvente; fabricar y ensamblar una versión; montar motor y rueda; comparar deslizamiento y respuesta en tres maniobras repetidas. | 9–12 h. | Evidencia del modelado, fabricación y ensamblaje, además de pruebas de motorización y tracción. | Pendiente de validación docente. |
| Joel Alejandro Soto Muñoz | `participantes/<alias-joel>/compromiso.md` | MS01 · Diseñar y fabricar la estructura mecánica. | MS06 · Integrar sensores de detección del oponente. | Medir componentes y dibujar envolvente; fabricar y ensamblar una versión; medir rango efectivo de sensores en distancias y ángulos conocidos; ensayar cinco encuentros y documentar errores de percepción. | 9–12 h. | CAD, evidencia del ensamblaje, mapa de detección y video del mini-sumo funcionando autónomamente. | Pendiente de validación docente. |

**Resultado de negociación grupal:**

Al comparar nuestros compromisos nos dimos cuenta de que varios seleccionamos los mismos alcances.

Claudio, Sara y Max eligieron MS03, relacionado con la motorización y tracción. Sara y Joel eligieron MS06, relacionado con la detección del oponente. Max y Joel eligieron MS01, enfocado en la estructura mecánica.

Consideramos que esto puede ayudarnos porque varias actividades necesitan trabajo en conjunto, pero también tenemos que definir responsabilidades para que las evidencias individuales no sean iguales.

Como propuesta inicial, Max y Joel podrán colaborar en el diseño del chasis. Max puede enfocarse en el montaje y ajuste de los motores, mientras que Joel puede trabajar en las medidas, distribución de componentes y espacio para los sensores.

En MS03, Sara podrá encargarse de comprobar las conexiones y los movimientos básicos, mientras que Claudio desarrollará las funciones de movimiento y Max revisará la respuesta mecánica y el deslizamiento de las ruedas.

Para MS06, Joel podrá realizar mediciones de distancia y ángulo de detección, mientras que Sara comprobará cómo se utilizan esas lecturas para orientar el robot y documentará los cinco intentos de detección.

Claudio también trabajará en MS07 y MS10, por lo que necesitará que primero estén funcionando los movimientos básicos antes de programar y comparar estrategias de ataque.

Esta distribución es una propuesta inicial y deberá acordarse entre los cuatro integrantes y validarse con el profesor.

También observamos que Claudio, Max y Joel tienen una estimación de 9–12 horas técnicas, mientras que sus compromisos indican una disponibilidad orientativa de 8–10 horas. Por eso tendremos que revisar la viabilidad de esos alcances antes de comprometernos a completarlos todos.

## 5 · Inventario exhaustivo y especificación de materiales (obligatorio)

### 5.1 Inventario maestro del equipo

Completar **cada recurso requerido**: estructura, electrónica, actuadores, sensores, herramientas, consumibles, instrumentos, software, datos, red, espacios de ensayo y elementos de seguridad.

Nos proporcionarán un kit para construir el robot mini-sumo desde cero. Todavía no tenemos la lista completa de sus componentes, por lo que las cantidades requeridas de esta tabla son una propuesta inicial.

Cuando recibamos el kit revisaremos cada material, registraremos su modelo y cantidad real, y compararemos lo que tenemos con lo que necesitamos.

Por el momento no vamos a marcar como disponible ningún componente físico que todavía no hayamos recibido o verificado.

| ID | Categoría | Material o recurso (especificación exacta: modelo, medida, versión o característica) | Cantidad requerida + unidad | Cantidad confirmada | Fuente/proveedor o dueño | Ubicación física o ruta digital | Responsable | Estado (disponible/reservado/falta) | Alternativa compatible | Día requerido |
|---|---|---|---|---|---|---|---|---|---|---|
| MAT-001 | Robot/plataforma | Robot mini-sumo M01 construido desde cero, máximo 10 × 10 cm y 500 g. | 1 sistema | 0 ensamblados | Kit proporcionado para el proyecto | Laboratorio de Electrónica, CTA | Equipo | Pendiente de construcción | Integración por subsistemas | D1–D5 |
| MAT-002 | Mecánica | Chasis compacto y ligero; dimensiones definitivas por definir según los componentes reales. | 1 ud. | Por confirmar | Kit / fabricación | Laboratorio de Electrónica | Max y Joel | Pendiente de revisar kit | Chasis impreso en 3D o estructura compatible | D2 |
| MAT-003 | Actuadores | Motores DC con reductora; modelo, voltaje y corriente por identificar. | 2 uds. | Por confirmar | Kit | Laboratorio de Electrónica | Claudio, Sara y Max | Pendiente de revisar kit | Motores compatibles equivalentes | D2 |
| MAT-004 | Mecánica | Ruedas con buena adherencia y diámetro compatible con los motores. | 2 uds. | Por confirmar | Kit | Laboratorio de Electrónica | Max y Joel | Pendiente de revisar kit | Ruedas de goma compatibles | D2 |
| MAT-005 | Electrónica | Driver para controlar dos motores DC, compatible con sus voltajes y corrientes. | 1 ud. | Por confirmar | Kit | Laboratorio de Electrónica | Claudio, Sara y Max | Pendiente de revisar kit | TB6612FNG o equivalente, previa verificación | D2 |
| MAT-006 | Control | Microcontrolador programable con entradas y salidas suficientes; modelo por identificar. | 1 ud. | Por confirmar | Kit | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | ESP32 o equivalente compatible | D2 |
| MAT-007 | Sensores | Sensores de proximidad para detectar al oponente; modelo y alcance por confirmar. | 3 uds. propuestas | Por confirmar | Kit | Laboratorio de Electrónica | Sara y Joel | Pendiente de revisar kit | Sensores infrarrojos o de distancia compatibles | D2 |
| MAT-008 | Sensores | Sensores reflectivos inferiores para reconocer el borde blanco del Dohyo. | 2 uds. propuestas | Por confirmar | Kit | Laboratorio de Electrónica | Sara y Joel | Pendiente de revisar kit | Sensores reflectivos equivalentes | D2 |
| MAT-009 | Control | Receptor infrarrojo para inicio y paro, compatible con el sistema requerido. | 1 ud. | Por confirmar | Kit | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Receptor IR compatible | D2 |
| MAT-010 | Control | Control remoto infrarrojo compatible con el receptor. | 1 ud. | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Control IR compatible autorizado | D2 |
| MAT-011 | Alimentación | Batería recargable con voltaje y capacidad adecuados para el sistema. | 1 ud. | Por confirmar | Kit | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Batería compatible equivalente | D2 |
| MAT-012 | Alimentación | Cargador adecuado para la batería seleccionada. | 1 ud. | Por confirmar | Kit / laboratorio | Área autorizada | Equipo | Pendiente de revisar kit | Cargador compatible aprobado | D2 |
| MAT-013 | Seguridad eléctrica | Interruptor general de alimentación. | 1 ud. | Por confirmar | Kit | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Interruptor equivalente | D2 |
| MAT-014 | Seguridad eléctrica | Protección contra sobrecorriente adecuada a batería y conductores. | 1 conjunto | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Fusible o protección equivalente | D2 |
| MAT-015 | Conexiones | Cables para señales y alimentación. | 1 juego | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Cableado compatible | D2 |
| MAT-016 | Conexiones | Conectores y terminales para motores, sensores y controlador. | 1 juego | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Conectores equivalentes | D2 |
| MAT-017 | Montaje | Tornillos, tuercas, separadores y soportes para fijar componentes. | 1 juego | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica | Max y Joel | Pendiente de revisar kit | Sujetadores compatibles | D2 |
| MAT-018 | Mecánica | Pala frontal ligera, sin bordes que dañen el Dohyo. | 1 ud. opcional | Por confirmar | Kit / fabricación | Laboratorio de Electrónica | Max y Joel | Opcional | Frente inclinado integrado al chasis | D3 |
| MAT-019 | Herramientas | Desarmadores y pinzas para montaje. | 1 juego | Por confirmar | Laboratorio / kit | Laboratorio de Electrónica | Equipo | Disponibilidad por verificar | Herramientas equivalentes | D2 |
| MAT-020 | Herramientas | Cautín y accesorios de soldadura. | 1 estación | Por confirmar | Laboratorio | Área autorizada | Equipo | Disponibilidad por verificar | Conectores preensamblados | D2 |
| MAT-021 | Consumibles | Soldadura y material aislante. | 1 juego | Por confirmar | Laboratorio / kit | Laboratorio de Electrónica | Equipo | Disponibilidad por verificar | Conectores sin soldadura para pruebas | D2 |
| MAT-022 | Medición | Multímetro digital para medir voltaje y continuidad. | 1 ud. | Por confirmar | Laboratorio | Laboratorio de Electrónica | Equipo | Disponibilidad por verificar | Multímetro equivalente | D2 |
| MAT-023 | Medición | Báscula digital para comprobar el peso máximo de 500 g. | 1 ud. | Por confirmar | Laboratorio | Área de medición | Equipo | Disponibilidad por verificar | Báscula equivalente | D3 |
| MAT-024 | Medición | Regla o calibrador para verificar dimensiones. | 1 ud. | Por confirmar | Laboratorio | Área de medición | Max y Joel | Disponibilidad por verificar | Instrumento equivalente | D2 |
| MAT-025 | Software | Arduino IDE o entorno de programación compatible con el controlador. | 1 instalación | Por verificar | Software gratuito | Computadora del equipo | Equipo | Por verificar | PlatformIO u otro entorno compatible | D1 |
| MAT-026 | Software | Controladores USB y paquetes necesarios para programar el microcontrolador. | 1 instalación | Por verificar | Software del fabricante | Computadora del equipo | Equipo | Por verificar | Controladores compatibles | D1 |
| MAT-027 | Software | Repositorio GitHub del equipo. | 1 repositorio | 1 creado | Tormenta Negra | Repositorio existente; enlace pendiente | Equipo | Disponible | Copia local de respaldo | D1 |
| MAT-028 | Software/CAD | Software CAD para diseñar el chasis y revisar dimensiones. | 1 instalación | Por verificar | Software académico o gratuito | Computadora del equipo | Max y Joel | Por verificar | Software CAD equivalente | D1 |
| MAT-029 | Conectividad | Cable USB de datos compatible con el controlador. | 1 ud. | Por confirmar | Kit / equipo | Laboratorio de Electrónica | Equipo | Pendiente de revisar kit | Cable equivalente | D2 |
| MAT-030 | Zona de pruebas | Dohyo circular de referencia de 75 cm de diámetro, superficie negra y borde blanco de 2.5 cm. | 1 ud. | Por confirmar | Laboratorio | Zona de pruebas autorizada | Equipo | Disponibilidad por verificar | Pista de práctica equivalente | D3 |
| MAT-031 | Pruebas | Objeto o robot de referencia para comprobar la detección del oponente. | 1 ud. | Por confirmar | Laboratorio / equipo | Zona de pruebas | Sara y Joel | Por verificar | Obstáculo estable de referencia | D3 |
| MAT-032 | Seguridad | Área despejada, delimitación de pruebas y procedimiento de desconexión. | 1 conjunto | Por verificar | Laboratorio | Laboratorio de Electrónica | Equipo | Pendiente de validación | Otra zona autorizada | D1 |
| MAT-033 | Documentación | Computadora o celular para registrar fotografías, videos y resultados. | 1 ud. | Por verificar | Equipo | Mesa de trabajo | Equipo | Por verificar | Dispositivo equivalente | D1 |
| MAT-034 | Fabricación | Acceso a impresora 3D y material de impresión, si utilizamos ese método para el chasis. | 1 servicio | Por confirmar | Laboratorio / proveedor | Área de fabricación autorizada | Max y Joel | Por verificar | Chasis comercial o fabricación alternativa | D2 |

También disponible el archivo [`datos/inventario_materiales.csv`](../../datos/inventario_materiales.csv) para registrar muchos materiales sin agrandar esta tabla.

### 5.2 Lista de cotejo específica por plataforma (elegir solo la misión asignada)

| Misión | Revisar y especificar (marca/modelo/cantidad reales) |
|---|---|
| M01 · Mini-sumo autónomo | Necesitamos revisar el contenido del kit para identificar el chasis o material de fabricación, motores, ruedas, driver, controlador, sensores de detección, sensores inferiores, sistema infrarrojo de inicio y paro, batería, cargador, protección eléctrica, cables, conectores y elementos de montaje. También verificaremos qué herramientas, instrumentos y espacios de ensayo proporciona el laboratorio. Los modelos y cantidades reales se registrarán después de recibir el kit. |

**Enlaces a fichas técnicas / instrucciones de conexión, fabricación y seguridad:**

- [Reglamento Robolympics](https://profcduquetec.github.io/robolympics/).
- [Documentación oficial de ESP32](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/), en caso de utilizar este controlador.
- [Arduino IDE](https://docs.arduino.cc/software/ide/), si es compatible con el controlador del kit.
- [Catálogo Kaizen Dōjō C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit).
- `docs/seguridad.md` — pendiente de completar.
- `docs/conexiones.md` — pendiente de crear.
- `datos/inventario_materiales.csv` — pendiente de completar con los materiales reales.
- Fichas técnicas de los componentes del kit — pendientes de identificar.

### 5.3 Riesgos de recursos y abastecimiento

| Bloqueante | A qué alcance afecta | Solución prevista / fecha y responsable | Impacto si no se resuelve |
|---|---|---|---|
| Todavía no conocemos los componentes exactos del kit | Todos los alcances | Revisar el kit cuando nos lo entreguen y registrar modelos, cantidades y características. Responsable: equipo. | No podremos confirmar la compatibilidad de los componentes ni planear el montaje definitivo. |
| El kit podría no incluir todos los componentes necesarios | Todos los alcances | Comparar su contenido con el inventario maestro y registrar los faltantes antes de D2. Responsable: equipo. | Podríamos necesitar conseguir materiales adicionales y retrasar la construcción. |
| Motores o driver incompatibles | MS03 · Motorización y tracción | Revisar voltajes, corrientes y conexiones antes de energizar. Responsables: Claudio, Sara y Max. | No podremos controlar correctamente el movimiento del robot. |
| Problemas en el diseño del chasis | MS01 · Estructura mecánica | Medir componentes reales y verificar distribución, peso y dimensiones. Responsables: Max y Joel. | Los componentes podrían no caber o el robot podría exceder los límites permitidos. |
| Sensores con alcance insuficiente | MS06 · Detección del oponente | Medir distancias y ángulos de detección y ajustar su ubicación. Responsables: Sara y Joel. | El robot podría no detectar correctamente al oponente. |
| Problemas con las funciones de movimiento | MS07 · Biblioteca de primitivas | Probar avance, retroceso, giro y paro por separado. Responsable: Claudio. | Las estrategias de búsqueda y ataque no funcionarían de forma confiable. |
| No contar con una estrategia de ataque funcional | MS10 · Estrategia de ataque | Implementar primero una estrategia básica y después compararla con otra. Responsable: Claudio. | No podremos comprobar cuál estrategia funciona mejor. |
| Falta de pista o zona de pruebas | MS03, MS06 y MS10 | Confirmar disponibilidad de un Dohyo o zona de ensayo autorizada. Responsable: equipo. | No podremos realizar pruebas completas del comportamiento del robot. |
| Falta de validación docente | Todos los alcances | Revisar la viabilidad de los compromisos con el profesor Camilo René Duque. Responsable: equipo. | Podríamos tener que modificar los alcances o reorganizar el trabajo. |
| Falta de autorización para pruebas físicas | Todos los alcances | Confirmar el espacio y las medidas de seguridad antes de energizar. Responsable: equipo y docente. | Las pruebas deberán posponerse. |

**Materiales completos para ejecutar el Día 2:** Pendiente de confirmar cuando recibamos el kit y revisemos su contenido.

**Confirmado por:** Equipo Tormenta Negra. Verificación física de materiales y validación docente pendientes.

**Fecha/hora:** 26 de octubre de 2026. Hora de revisión del kit pendiente.

## 6 · Kata 0 — exploración técnica de arranque (100–160 min)

| Integrante/alcance | Pregunta técnica | Mini-prueba o prototipo de exploración | Resultado o error observado | Evidencia enlazada | Acción necesaria antes de D2 |
|---|---|---|---|---|---|
| Claudio / MS03 | ¿Cómo podemos controlar los motores para que el robot avance, retroceda y gire correctamente? | Identificar la polaridad de los motores, revisar los límites del driver y probar comandos breves de movimiento cuando tengamos el kit. | Pendiente de realizar. Todavía no contamos con los componentes. | Fotografías, código y video pendientes. | Revisar motores y driver del kit y verificar sus conexiones. |
| Claudio / MS07 | ¿Cómo podemos programar funciones independientes para controlar el movimiento del robot? | Crear funciones de avance, retroceso, giro y paro, y probarlas por separado. | Pendiente de realizar. Primero necesitamos definir el controlador y las conexiones. | Código y pruebas unitarias pendientes. | Confirmar microcontrolador y pines utilizados para los motores. |
| Claudio / MS10 | ¿Qué estrategia de ataque podría funcionar mejor para nuestro mini-sumo? | Definir una estrategia básica de aproximación y otra alternativa para compararlas bajo condiciones similares. | Pendiente de realizar. Todavía no tenemos el robot integrado. | Diagrama de estrategia, código y comparación pendientes. | Contar con movimientos básicos y detección del oponente. |
| Sara / MS03 | ¿Los motores y el driver permiten realizar los movimientos básicos de forma controlada? | Montar motor y rueda, comprobar el sentido de giro y realizar comandos breves de avance, retroceso y giro. | Pendiente de realizar. Todavía no contamos con los componentes. | Video y registro de conexiones pendientes. | Revisar compatibilidad entre motores, driver y alimentación. |
| Sara / MS06 | ¿Podemos utilizar las lecturas de los sensores para detectar al oponente y orientar el robot? | Realizar cinco pruebas de detección con un objeto de referencia y registrar los resultados. | Pendiente de realizar. Todavía no contamos con sensores. | Tabla de cinco pruebas y video pendientes. | Identificar los sensores del kit y comprobar sus lecturas. |
| Max / MS01 | ¿Cómo podemos diseñar un chasis que permita acomodar todos los componentes sin exceder las dimensiones permitidas? | Medir los componentes del kit y elaborar un modelo CAD con su distribución. | Pendiente de realizar. Todavía no conocemos las dimensiones reales de los componentes. | Boceto o archivo CAD pendiente. | Revisar el kit y definir las dimensiones de motores, batería y controlador. |
| Max / MS03 | ¿Qué tan bien responde el sistema de tracción durante diferentes movimientos? | Montar motores y ruedas y comparar la respuesta y el deslizamiento en tres maniobras repetidas. | Pendiente de realizar. Todavía no contamos con un sistema de tracción ensamblado. | Videos y tabla comparativa pendientes. | Contar con chasis, motores, ruedas y driver compatibles. |
| Joel / MS01 | ¿Cómo podemos fabricar y ensamblar la estructura para que los componentes queden bien sujetos? | Participar en el diseño del chasis, fabricar una versión y comprobar ajuste, rigidez y acceso a los componentes. | Pendiente de realizar. Todavía no se ha fabricado la estructura. | CAD, fotografías y registro de ensamblaje pendientes. | Definir materiales y método de fabricación. |
| Joel / MS06 | ¿Desde qué distancias y ángulos pueden detectar al oponente los sensores? | Medir el rango efectivo de los sensores en diferentes posiciones y realizar cinco encuentros de prueba. | Pendiente de realizar. Todavía no conocemos los sensores que recibiremos. | Tabla de distancias, fotografías y video pendientes. | Identificar los sensores del kit y preparar un objeto de referencia. |

**Integración entre subequipos:**

Para construir nuestro mini-sumo necesitamos que todos los subsistemas funcionen juntos.

Max y Joel trabajarán en la estructura mecánica, por lo que deberán considerar las dimensiones de los motores, sensores, batería y controlador antes de fabricar el chasis.

Claudio, Sara y Max compartirán actividades relacionadas con los motores. Tendremos que ponernos de acuerdo sobre las conexiones, los movimientos que queremos realizar y las pruebas que documentará cada uno.

Sara y Joel también compartirán actividades de detección del oponente. Joel podrá enfocarse en medir las distancias y ángulos de detección, mientras que Sara podrá comprobar cómo utilizar las lecturas para orientar el robot.

Claudio necesitará los movimientos básicos y las lecturas de los sensores para desarrollar las funciones de movimiento y las estrategias de ataque.

Consideramos que primero debemos comprobar los componentes por separado. Después podremos integrar motores y sensores, y finalmente programar el comportamiento autónomo.

También será importante que todos utilicemos las mismas conexiones y nombres de variables para evitar problemas al integrar el código.

Por ahora esta es nuestra propuesta de organización. La ajustaremos cuando recibamos el kit y conozcamos los componentes reales.

## 7 · Cierre: contrato técnico y puerta de salida E1 (160–180 min)

- [x] El objetivo colectivo tiene condición de éxito verificable.
- [ ] Cada estudiante depositó **su kit Markdown original** en `participantes/<alias>/compromiso.md`. Los cuatro compromisos ya fueron generados, pero falta confirmar que estén guardados en las rutas correctas del repositorio.
- [ ] Cada estudiante completó [E1 personal](../../participantes/_plantilla/dias/E1.md) y definió frontera, evidencia y alcance negociado. Los compromisos individuales ya están definidos, pero falta confirmar el E1 personal y la aprobación de la negociación.
- [ ] El inventario está **completo** y cada recurso indica cantidad, especificación, disponibilidad y responsable. Tenemos el inventario preliminar, pero todavía falta revisar el kit y confirmar los materiales reales.
- [ ] Se asignó **dōjō específico** con edificio, salón/taller, horarios, supervisión y autorización. Sabemos que trabajaremos en el Laboratorio de Electrónica del CTA de 9:00 a 12:00, pero falta confirmar el número de laboratorio y la autorización.
- [ ] Se inspeccionaron riesgos, paro y condiciones de seguridad de la plataforma. Identificamos riesgos previstos, pero todavía no hemos recibido ni inspeccionado los componentes.
- [x] Se identificaron dependencias y posibles bloqueos del Día 2. Principalmente necesitamos recibir el kit, revisar sus componentes y confirmar que sean suficientes para comenzar.
- [ ] El profesor aprobó el alcance y la seguridad, o registró observaciones y una alternativa viable. Pendiente de revisión con el profesor Camilo René Duque.

**Estado del gate:** REPLANIFICAR hasta completar las verificaciones obligatorias.

**Condiciones, responsables, fecha y próxima decisión:**

Antes de comenzar el Día 2 necesitamos recibir el kit y revisar todos sus componentes.

Lo primero será identificar qué materiales incluye, registrar sus modelos y cantidades, y compararlos con el inventario que elaboramos.

También tendremos que revisar que los motores, driver, sensores y controlador sean compatibles, además de comprobar que contamos con una alimentación adecuada.

Max y Joel podrán comenzar a definir el diseño del chasis cuando conozcamos las medidas reales de los componentes.

Claudio, Sara y Max podrán organizar las pruebas de motorización, mientras que Sara y Joel podrán preparar las pruebas de detección del oponente.

Claudio también podrá avanzar con la planeación de las funciones de movimiento y las estrategias de ataque, aunque las pruebas físicas dependerán de que el robot esté integrado.

Como varios de nuestros alcances se repiten, tendremos que acordar qué actividades realizará cada integrante y cómo documentaremos las evidencias individuales.

Además, necesitamos revisar con el profesor la viabilidad de los compromisos de Claudio, Max y Joel, ya que su estimación máxima de trabajo supera las 10 horas técnicas orientativas.

Antes de energizar el robot confirmaremos la autorización del laboratorio, las condiciones de seguridad y el procedimiento de desconexión.

**Próxima decisión:** Revisar el kit con el profesor Camilo René Duque, confirmar los componentes disponibles, acordar la distribución de actividades y validar que podamos comenzar la construcción y las pruebas de manera segura.

**Revisor docente:** Camilo René Duque — revisión pendiente.

**Enlace a commit/PR:** Repositorio GitHub del equipo creado; enlace al commit o pull request de E1 pendiente de agregar.

**Criterio mínimo E1:** existe un contrato de misión y frontera individual, hay evidencia del punto de partida, un inventario verificable y un espacio de trabajo autorizado. La ausencia de algún material crítico NO debe esconderse.
