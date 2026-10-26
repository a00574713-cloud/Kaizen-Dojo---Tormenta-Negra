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
| Fecha y horario de esta sesión | Fecha de elaboración: 2026-10-26. Fecha y horario de la sesión presencial de 180 minutos: pendiente de confirmar. |
| Nombre / alias del equipo | Tormenta Negra. Alias propuesto para GitHub: `kd26-m01-tormenta-negra`. |
| Misión / plataforma | M01 · Mini-sumo autónomo. |
| Objetivo verificable del robot (una frase) | Integrar los motores y sensores de un robot mini-sumo autónomo para lograr que avance, retroceda, gire y detecte a un oponente, comprobando su funcionamiento mediante cinco pruebas de detección y registrando los resultados. |
| **Dōjō asignado — campus, edificio y sala/taller exactos** | **Tecnológico de Monterrey, Campus León / Laboratorio de Electrónica / Edificio y número de laboratorio pendientes de confirmar.** |
| Puesto o zona dentro del dōjō | Mesa de trabajo del equipo Tormenta Negra dentro del Laboratorio de Electrónica. Para las pruebas de movimiento se utilizará una zona despejada y delimitada, autorizada por el responsable del laboratorio. |
| Horario / reserva confirmada | Sesión de 180 minutos. Fecha, horario y autorización de uso pendientes de confirmar con el docente o responsable del laboratorio. |
| Responsable del espacio y contacto institucional | Docente responsable de Kaizen Dōjō 2026 y encargado del Laboratorio de Electrónica. Nombre y contacto institucional pendientes de confirmar. |
| Acceso, aforo y ajustes de accesibilidad | Acceso para los integrantes del equipo y personas autorizadas. Se respetará el aforo establecido por el laboratorio, se mantendrán libres los pasillos y se acordarán los apoyos de accesibilidad necesarios sin registrar información personal sensible. |
| Salidas, botiquín, extintor y punto de reunión | Se identificarán físicamente al ingresar al Laboratorio de Electrónica y se confirmarán con el responsable del espacio antes de comenzar las pruebas. |
| Zonas segregadas por riesgo | Área de conexiones y programación, área de herramientas y área delimitada para pruebas del mini-sumo. Las pruebas de movimiento se realizarán lejos de los bordes de las mesas y de otros equipos. |
| Ubicación de materiales y resguardo nocturno | Los componentes se organizarán en una caja identificada con el nombre del equipo. El lugar de resguardo dentro del laboratorio deberá ser autorizado; de lo contrario, los materiales serán retirados al finalizar la sesión. |
| Plan de sustitución si falla el espacio | Reprogramar las pruebas físicas y solicitar otro laboratorio o área de trabajo autorizada. Mientras tanto, avanzar con programación, diagramas, revisión de componentes y documentación sin energizar el robot. |
| Instructor o supervisor presente en la sesión | Docente o encargado autorizado del Laboratorio de Electrónica. Identidad pendiente de confirmar. |

> ⛔ **No se permite avanzar a pruebas físicas sin dōjō concreto y autorización del responsable.** El Laboratorio de Electrónica es el espacio previsto, pero todavía debemos confirmar el edificio, número de laboratorio, horario y autorización correspondiente.

## 1 · Integrantes, responsabilidades, accesibilidad y decisiones (0–15 min)

| Alias GitHub | Rol inicial | Carta y frontera (D/S/E; F1–F4) | Alcances ID (1–3) | Kit personal (archivo) | Necesidad de apoyo o accesibilidad acordada |
|---|---|---|---|---|---|
| Sara Gabriela Díaz Rayas (alias GitHub por confirmar) | Integración de motores y sensores, programación de movimientos y pruebas de detección. | S · SUPERAR / F1 · INTEGRAR / D1 · AUTONOMOUS SYSTEM. | MS03, MS06. | `participantes/sara-gabriela/compromiso.md` | Se trabajará de manera colaborativa y se solicitará apoyo en conexiones o pruebas cuando sea necesario. |
| Integrante 2 (nombre y alias pendientes) | Diseño mecánico del chasis, distribución de componentes y revisión de dimensiones. | Por definir mediante Mission Forge C2. | Por definir. | Pendiente de crear. | Se acordarán los apoyos necesarios con el integrante. |
| Integrante 3 (nombre y alias pendientes) | Electrónica, alimentación, conexiones y verificación de compatibilidad. | Por definir mediante Mission Forge C2. | Por definir. | Pendiente de crear. | Se acordarán los apoyos necesarios con el integrante. |
| Integrante 4 (nombre y alias pendientes) | Programación general, lógica autónoma e integración del sistema. | Por definir mediante Mission Forge C2. | Por definir. | Pendiente de crear. | Se acordarán los apoyos necesarios con el integrante. |
| Integrante 5, si aplica (nombre y alias pendientes) | Documentación, seguridad, pruebas y verificación del reglamento. | Por definir mediante Mission Forge C2. | Por definir. | Pendiente de crear. | Se acordarán los apoyos necesarios con el integrante. |

**Acuerdo de colaboración:**

Como equipo proponemos dividir el trabajo de acuerdo con los conocimientos y alcances de cada integrante, pero también ayudarnos cuando alguien tenga dificultades con alguna parte del proyecto.

Las decisiones importantes, como la selección de componentes, cambios en el diseño o modificaciones en la programación, se discutirán entre todos antes de realizarlas.

En caso de que existan diferentes opiniones, compararemos las alternativas considerando su funcionamiento, costo, seguridad y tiempo disponible.

También buscaremos que todos participen tanto en el desarrollo como en las pruebas, ya que aunque cada persona tenga una responsabilidad principal, el robot necesita que todos los subsistemas funcionen juntos.

Si algún integrante tiene más experiencia con una herramienta o componente podrá apoyar a los demás, siguiendo la idea de colaboración senpai–kōhai.

Durante las pruebas físicas mantendremos el área de trabajo organizada, realizaremos pausas cuando sea necesario y evitaremos modificar conexiones mientras el sistema esté energizado.

## 2 · Demostración de la plataforma y seguridad (15–35 min)

| Elemento | Observación directa | Evidencia / vínculo |
|---|---|---|
| Plataforma base inspeccionada (estado, modelo, ID inventario) | Pendiente de inspección física. La plataforma seleccionada es M01 mini-sumo autónomo. Debemos confirmar si partiremos de un kit, un chasis existente o componentes individuales. | Fotografía de la plataforma y registro de componentes pendientes. |
| Funciones existentes y límites comprobados | Todavía no se cuenta con resultados de pruebas documentados. Se revisará si los motores funcionan, si el controlador puede comunicarse con los sensores y qué componentes necesitan integrarse. | Registro diagnóstico V0 pendiente. |
| Paro de emergencia / desconexión segura ensayados | Pendiente de prueba. Se propone utilizar un interruptor general para desconectar la alimentación y un sistema de inicio y paro mediante control infrarrojo, como establece el reglamento. | Evidencia de prueba del sistema de paro pendiente. |
| Restricciones de competición o exhibición verificadas | Se revisó el reglamento de Mini Sumo Robolympics 2026. El robot debe medir máximo 10 × 10 cm, pesar máximo 500 g, funcionar de manera autónoma y contar con arranque y paro infrarrojo. | [Reglamento oficial Robolympics 2026](https://profcduquetec.github.io/robolympics/). |
| Riesgos vistos y medidas activas | Se identificaron riesgos relacionados con conexiones incorrectas, cortocircuitos, movimiento inesperado de motores, baterías y caída del robot desde una mesa. Las medidas preventivas deberán verificarse antes de energizarlo. | `docs/seguridad.md` — pendiente de crear y validar. |

**Normas específicas según misión:**

- **M01:** utilizar una alimentación compatible con los componentes y proteger las conexiones para evitar cortocircuitos.
- Desconectar la alimentación antes de modificar cables, motores o sensores.
- No tocar las ruedas mientras los motores estén funcionando.
- Realizar las primeras pruebas de giro con las ruedas levantadas de la superficie.
- Mantener despejada y delimitada el área de pruebas.
- Utilizar un objeto o robot de referencia para las pruebas de detección.
- Evitar mecanismos que puedan dañar la superficie del Dohyo.
- Verificar el funcionamiento del sistema de inicio y paro infrarrojo.
- Revisar que el robot no exceda los 500 gramos ni las dimensiones de 10 × 10 cm.
- No realizar pruebas físicas sin la autorización del responsable del Laboratorio de Electrónica.

## 3 · Diagnóstico práctico colectivo (35–65 min)

**Condición inicial V0 de la plataforma:**

Nuestra misión consiste en desarrollar un robot mini-sumo autónomo capaz de desplazarse y detectar a su oponente.

Como punto de partida tenemos definida una propuesta de integración de dos motores DC con reductora, un driver de motores, un microcontrolador, sensores de detección del oponente y sensores inferiores para reconocer el borde de la pista.

Todavía debemos confirmar físicamente qué componentes tenemos disponibles y cuáles necesitamos conseguir.

También falta verificar el estado de los motores, la compatibilidad del driver, el funcionamiento de los sensores y la alimentación.

Por lo tanto, consideramos que la versión V0 corresponde a la etapa inicial de selección y diagnóstico de componentes, sin resultados de funcionamiento documentados.

| Prueba diagnóstica | Condición y procedimiento | Resultado observado / unidad | Problema / causa probable | Evidencia |
|---|---|---|---|---|
| 1. Movimiento de motores | Conectar cada motor al driver compatible, verificar alimentación y realizar comandos breves de avance, retroceso y giro con las ruedas levantadas. | Pendiente de realizar. Se registrará sentido de giro, respuesta y voltaje de alimentación. | Posibles conexiones invertidas, alimentación insuficiente o incompatibilidad entre motor y driver. | Fotografía de conexiones y video de prueba pendientes. |
| 2. Lectura de sensores | Conectar los sensores al microcontrolador y registrar sus lecturas al acercar y alejar un objeto de referencia. | Pendiente de realizar. Se registrará distancia de detección y lectura de cada sensor. | Posible calibración incorrecta, interferencia de iluminación o conexiones equivocadas. | Registro de lecturas y fotografía del montaje pendientes. |
| 3. Comportamiento de la misión | Integrar motores y sensores para comprobar si el robot puede buscar, detectar y orientarse hacia un oponente. | Pendiente de realizar. Se evaluará el número de respuestas correctas en cinco pruebas. | Posibles errores de programación, lectura de sensores o coordinación de movimientos. | Video y tabla de resultados pendientes. |

**Capacidades ya disponibles y dependencias:**

Como equipo contamos con conocimientos académicos de programación, electrónica y control de motores que podemos aplicar durante el desarrollo.

La propuesta contempla utilizar un sistema de tracción diferencial para controlar el movimiento mediante dos motores independientes.

Para integrar los sensores necesitamos primero comprobar que el microcontrolador pueda recibir sus señales correctamente.

La programación de búsqueda y ataque dependerá de que los motores puedan realizar los movimientos básicos y de que los sensores proporcionen información confiable.

Por esta razón consideramos que primero debemos verificar los componentes por separado y después comenzar con la integración.

También necesitamos que el diseño mecánico permita colocar los sensores y motores en posiciones adecuadas sin exceder el peso y las dimensiones permitidas.

## 4 · Integración de Mission Forge C2 y pacto de alcances (65–100 min)

Cada participante debe colocar el archivo **Markdown original generado por la web** en:

`participantes/<alias>/compromiso.md`

Se conserva íntegro, incluido el frontmatter y la lista de katas. Los nuevos alcances o katas diseñados por el participante quedan claramente marcados como *propuesta propia* y requieren aprobación técnica.

**Catálogo de referencia:** [Google Sheets C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit) · **Configurador Mission Forge:** [`herramientas/mission-forge-c2.html`](../../herramientas/mission-forge-c2.html).

| Alias | Kit enlazado | Alcance principal | Complementos | Katas elegidos o nuevos | Horas mín.–máx. | Evidencia final esperada | Negociación aprobada |
|---|---|---|---|---|---|---|---|
| Sara Gabriela Díaz Rayas | `participantes/sara-gabriela/compromiso.md` | MS03 · Integrar y verificar motorización y tracción. | MS06 · Integrar sensores de detección del oponente. | MS03: montar motor y rueda, probar sentido de giro con comandos breves. MS06: ensayar cinco encuentros y documentar errores de percepción. | 6–8 h. | Video del mini-sumo avanzando, retrocediendo, girando y realizando cinco pruebas de detección del oponente. | Pendiente de validación docente. |
| Integrante 2 | Pendiente de generar. | Diseño mecánico y estructura, ID por definir. | Integración física de componentes. | Por seleccionar en Mission Forge C2. | Por definir. | Diseño del chasis y evidencia del montaje. | Pendiente. |
| Integrante 3 | Pendiente de generar. | Electrónica y alimentación, ID por definir. | Conexiones y seguridad eléctrica. | Por seleccionar en Mission Forge C2. | Por definir. | Diagrama de conexiones y pruebas de alimentación. | Pendiente. |
| Integrante 4 | Pendiente de generar. | Programación autónoma, ID por definir. | Integración del sistema de control. | Por seleccionar en Mission Forge C2. | Por definir. | Código de búsqueda, detección y movimiento. | Pendiente. |
| Integrante 5, si aplica | Pendiente de generar. | Pruebas y documentación, ID por definir. | Verificación del reglamento. | Por seleccionar en Mission Forge C2. | Por definir. | Registro de pruebas y evidencia de cumplimiento. | Pendiente. |

**Resultado de negociación grupal:**

La propuesta inicial consiste en dividir el robot en cuatro subsistemas principales: estructura mecánica, alimentación y electrónica, control de motores y detección del oponente.

Sara se enfocará principalmente en la integración de motores y sensores, de acuerdo con los alcances MS03 y MS06 seleccionados en su compromiso individual.

Para que esta integración funcione será necesario acordar las conexiones entre el microcontrolador, el driver y los sensores, además de definir los pines que utilizará cada componente.

También debemos establecer las dimensiones disponibles dentro del chasis y revisar que la batería proporcione la alimentación necesaria.

La prioridad será conseguir que el robot avance, retroceda y gire correctamente. Después integraremos la detección del oponente y realizaremos las cinco pruebas propuestas.

Si el tiempo resulta insuficiente, daremos prioridad al funcionamiento de motores y sensores antes de agregar mejoras como una pala frontal o estrategias de movimiento más complejas.

Esta distribución es una propuesta inicial y deberá revisarse con los demás integrantes y el docente.

## 5 · Inventario exhaustivo y especificación de materiales (obligatorio)

### 5.1 Inventario maestro del equipo

Completar **cada recurso requerido**: estructura, electrónica, actuadores, sensores, herramientas, consumibles, instrumentos, software, datos, red, espacios de ensayo y elementos de seguridad.

Las cantidades indicadas corresponden a lo que proponemos utilizar. La cantidad confirmada se mantiene como pendiente hasta revisar físicamente el inventario del equipo y del Laboratorio de Electrónica.

| ID | Categoría | Material o recurso (especificación exacta: modelo, medida, versión o característica) | Cantidad requerida + unidad | Cantidad confirmada | Fuente/proveedor o dueño | Ubicación física o ruta digital | Responsable | Estado (disponible/reservado/falta) | Alternativa compatible | Día requerido |
|---|---|---|---|---|---|---|---|---|---|---|
| MAT-001 | Robot/plataforma | Robot mini-sumo M01, dimensiones máximas 10 × 10 cm y peso máximo 500 g. | 1 sistema | Por confirmar | Equipo / Laboratorio de Electrónica | Mesa de trabajo asignada | Equipo | Por confirmar | Construcción por subsistemas | D1 |
| MAT-002 | Mecánica | Chasis compacto de aproximadamente 90 × 90 mm, material ligero y resistente. | 1 ud. | Por confirmar | Equipo / proveedor | Caja de componentes | Diseño mecánico | Por confirmar | Chasis impreso en 3D o estructura ligera compatible | D2 |
| MAT-003 | Actuadores | Motores DC con reductora, voltaje y corriente por definir según modelo seleccionado. | 2 uds. | Por confirmar | Equipo / laboratorio | Caja de componentes | Sara / electrónica | Por confirmar | Motores equivalentes compatibles con el driver | D1 |
| MAT-004 | Mecánica | Ruedas con buena adherencia y diámetro compatible con el chasis. | 2 uds. | Por confirmar | Equipo / proveedor | Caja de componentes | Diseño mecánico | Por confirmar | Ruedas de goma compatibles | D2 |
| MAT-005 | Electrónica | Driver de dos canales para motores DC, compatible con la corriente de arranque y operación de los motores. | 1 ud. | Por confirmar | Equipo / laboratorio | Caja de componentes | Sara / electrónica | Por confirmar | TB6612FNG o equivalente, sujeto a verificación eléctrica | D1 |
| MAT-006 | Control | ESP32 DevKit, lógica de 3.3 V, con pines suficientes para sensores y motores. | 1 ud. | Por confirmar | Equipo / laboratorio | Caja de componentes | Programación | Por confirmar | Microcontrolador equivalente compatible | D1 |
| MAT-007 | Sensores | Sensores de proximidad para detectar al oponente, con alcance y voltaje compatibles con el controlador. | 3 uds. | Por confirmar | Equipo / proveedor | Caja de componentes | Sara | Por confirmar | Sensores infrarrojos o de distancia equivalentes | D2 |
| MAT-008 | Sensores | Sensores reflectivos inferiores para diferenciar la superficie negra y el borde blanco. | 2 uds. | Por confirmar | Equipo / proveedor | Caja de componentes | Sensores / integración | Por confirmar | Sensores reflectivos compatibles | D2 |
| MAT-009 | Control | Receptor infrarrojo compatible con el sistema de arranque y paro reglamentario. | 1 ud. | Por confirmar | Equipo / proveedor | Caja de componentes | Electrónica | Por confirmar | Receptor IR equivalente | D2 |
| MAT-010 | Control | Control remoto infrarrojo compatible con el receptor y protocolo de inicio y paro. | 1 ud. | Por confirmar | Equipo / proveedor | Caja de componentes | Electrónica | Por confirmar | Control IR compatible | D2 |
| MAT-011 | Alimentación | Batería recargable con voltaje, capacidad y corriente adecuados para el sistema. | 1 ud. | Por confirmar | Equipo / proveedor | Contenedor seguro para batería | Electrónica | Por confirmar | Batería equivalente compatible | D2 |
| MAT-012 | Alimentación | Cargador específico para la química y configuración de la batería seleccionada. | 1 ud. | Por confirmar | Equipo / laboratorio | Área autorizada | Electrónica | Por confirmar | Cargador compatible aprobado | D2 |
| MAT-013 | Seguridad eléctrica | Interruptor general de alimentación, con capacidad adecuada para la corriente del sistema. | 1 ud. | Por confirmar | Equipo / proveedor | Caja de componentes | Electrónica | Por confirmar | Interruptor equivalente | D2 |
| MAT-014 | Seguridad eléctrica | Protección contra sobrecorriente adecuada a la batería y conductores seleccionados. | 1 conjunto | Por confirmar | Equipo / proveedor | Caja de componentes | Electrónica | Por confirmar | Fusible o protección equivalente dimensionada | D2 |
| MAT-015 | Conexiones | Cables de conexión con calibre apropiado para señales y alimentación. | 1 juego | Por confirmar | Equipo / laboratorio | Caja de componentes | Electrónica | Por confirmar | Cableado equivalente | D1 |
| MAT-016 | Conexiones | Conectores y terminales compatibles con batería, driver, sensores y controlador. | 1 juego | Por confirmar | Equipo / laboratorio | Caja de componentes | Electrónica | Por confirmar | Conectores equivalentes | D2 |
| MAT-017 | Montaje | Tornillos, tuercas, separadores y soportes para fijar componentes. | 1 juego | Por confirmar | Equipo / laboratorio | Caja de componentes | Diseño mecánico | Por confirmar | Sujetadores mecánicos compatibles | D2 |
| MAT-018 | Mecánica | Pala frontal fija de material ligero, sin bordes que dañen el Dohyo. | 1 ud. opcional | Por confirmar | Equipo / proveedor | Caja de componentes | Diseño mecánico | Opcional | Diseño sin pala | D3 |
| MAT-019 | Herramientas | Juego de desarmadores y pinzas para montaje electrónico. | 1 juego | Por confirmar | Laboratorio / equipo | Laboratorio de Electrónica | Equipo | Por confirmar | Herramientas equivalentes autorizadas | D1 |
| MAT-020 | Herramientas | Cautín, soporte y accesorios de soldadura para conexiones permanentes. | 1 estación | Por confirmar | Laboratorio | Área autorizada de soldadura | Electrónica | Por confirmar | Conectores preensamblados | D2 |
| MAT-021 | Consumibles | Soldadura, material aislante y consumibles de montaje compatibles. | 1 juego | Por confirmar | Equipo / laboratorio | Área de materiales | Electrónica | Por confirmar | Conectores sin soldadura | D2 |
| MAT-022 | Medición | Multímetro digital para medir voltaje, continuidad y corriente dentro de sus rangos permitidos. | 1 ud. | Por confirmar | Laboratorio / equipo | Laboratorio de Electrónica | Electrónica | Por confirmar | Multímetro equivalente | D1 |
| MAT-023 | Medición | Báscula digital con resolución adecuada para verificar el límite de 500 g. | 1 ud. | Por confirmar | Laboratorio / equipo | Área de medición | Documentación | Por confirmar | Báscula equivalente | D3 |
| MAT-024 | Medición | Regla o calibrador para verificar dimensiones máximas de 10 × 10 cm. | 1 ud. | Por confirmar | Laboratorio / equipo | Área de medición | Diseño mecánico | Por confirmar | Instrumento equivalente | D1 |
| MAT-025 | Software | Arduino IDE compatible con ESP32, versión instalada por registrar. | 1 instalación | Por confirmar | Equipo | Computadora de programación | Programación | Por confirmar | PlatformIO compatible | D1 |
| MAT-026 | Software | Controladores USB y paquete de tarjetas ESP32 compatibles con la computadora. | 1 instalación | Por confirmar | Equipo | Computadora de programación | Programación | Por confirmar | Entorno equivalente | D1 |
| MAT-027 | Software | Git y repositorio GitHub del equipo para control de versiones. | 1 repositorio | Por confirmar | Equipo | Repositorio digital | Documentación | Por confirmar | Registro local temporal y posterior sincronización | D1 |
| MAT-028 | Software/CAD | Herramienta CAD para diseñar el chasis y comprobar dimensiones. | 1 instalación | Por confirmar | Equipo / laboratorio | Computadora de diseño | Diseño mecánico | Por confirmar | Software CAD equivalente | D2 |
| MAT-029 | Conectividad | Cable USB de datos compatible con el microcontrolador. | 1 ud. | Por confirmar | Equipo / laboratorio | Caja de componentes | Programación | Por confirmar | Cable USB equivalente | D1 |
| MAT-030 | Zona de pruebas | Dohyo o pista de ensayo de 75 cm de diámetro con superficie negra y borde blanco de 2.5 cm, según reglamento. | 1 ud. | Por confirmar | Laboratorio / equipo | Zona de pruebas autorizada | Equipo | Por confirmar | Pista de ensayo equivalente para diagnóstico, no homologación | D3 |
| MAT-031 | Pruebas | Objeto o robot de referencia para ensayar detección del oponente. | 1 ud. | Por confirmar | Equipo / laboratorio | Zona de pruebas | Sara | Por confirmar | Obstáculo de referencia estable | D2 |
| MAT-032 | Seguridad | Área despejada, delimitación de pruebas y procedimiento de desconexión. | 1 conjunto | Por confirmar | Laboratorio | Laboratorio de Electrónica | Equipo | Por confirmar | Otra zona autorizada | D1 |
| MAT-033 | Documentación | Computadora o celular para registrar fotografías, videos y resultados. | 1 ud. | Por confirmar | Equipo | Área de trabajo | Documentación | Por confirmar | Equipo de registro equivalente | D1 |
| MAT-034 | Fabricación | Acceso a impresora 3D y material de impresión, si se selecciona chasis impreso. | 1 servicio | Por confirmar | Laboratorio / proveedor | Área de fabricación autorizada | Diseño mecánico | Por confirmar | Chasis comercial compatible | D2 |

También disponible el archivo [`datos/inventario_materiales.csv`](../../datos/inventario_materiales.csv) para registrar muchos materiales sin agrandar esta tabla.

### 5.2 Lista de cotejo específica por plataforma (elegir solo la misión asignada)

| Misión | Revisar y especificar (marca/modelo/cantidad reales) |
|---|---|
| M01 · Mini-sumo autónomo | Chasis compacto de máximo 10 × 10 cm, dos motores DC con reductora, dos ruedas de buena adherencia, un driver de motores de dos canales, un microcontrolador ESP32 o equivalente, tres sensores propuestos de detección del oponente, dos sensores reflectivos inferiores, un receptor y control infrarrojo para inicio y paro, batería y cargador compatibles, protección eléctrica, interruptor general, cableado, conectores, soportes, herramientas de montaje, multímetro, báscula, regla o calibrador, computadora con entorno de programación, repositorio GitHub, Dohyo de pruebas y objeto de referencia. Las marcas y modelos definitivos se registrarán después de revisar el inventario físico. |

**Enlaces a fichas técnicas / instrucciones de conexión, fabricación y seguridad:**

- [Reglamento oficial Robolympics 2026](https://profcduquetec.github.io/robolympics/).
- [Documentación oficial de ESP32](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/).
- [Arduino IDE](https://docs.arduino.cc/software/ide/).
- [Catálogo Kaizen Dōjō C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit).
- `docs/seguridad.md` — pendiente de crear.
- `docs/conexiones.md` — pendiente de crear.
- `datos/inventario_materiales.csv` — pendiente de completar.
- Fichas técnicas de motores, driver, sensores y batería: pendientes de seleccionar según los modelos reales.

### 5.3 Riesgos de recursos y abastecimiento

| Bloqueante | A qué alcance afecta | Solución prevista / fecha y responsable | Impacto si no se resuelve |
|---|---|---|---|
| No contar con motores o driver compatibles | MS03 · Motorización y tracción | Revisar inventario en D1 y seleccionar componentes compatibles antes de D2. Responsable: Sara y área de electrónica. | No se podrán realizar pruebas de movimiento. |
| No contar con sensores adecuados | MS06 · Detección del oponente | Verificar sensores disponibles y seleccionar alternativas compatibles. Responsable: Sara y área de sensores. | No se podrán completar las cinco pruebas de detección. |
| Alimentación insuficiente o incompatible | MS03 y MS06 | Revisar voltaje, corriente y batería antes de energizar el sistema. Responsable: electrónica. | Riesgo de fallas, reinicios o daño de componentes. |
| Exceder el peso máximo de 500 g | Integración general | Pesar componentes y revisar distribución antes del montaje definitivo. Responsable: diseño mecánico y documentación. | El robot podría no pasar la homologación. |
| No contar con control infrarrojo compatible | Integración general y seguridad | Conseguir y verificar un sistema de inicio y paro conforme al reglamento. Responsable: electrónica y programación. | El robot no cumpliría los requisitos de competencia. |
| Falta de pista o zona de ensayo autorizada | Pruebas de movimiento y detección | Solicitar espacio y materiales de prueba al docente antes de D2. Responsable: equipo. | Las pruebas físicas deberán reprogramarse. |
| Falta de autorización o identificación exacta del laboratorio | Todas las pruebas físicas | Confirmar edificio, laboratorio, horario y supervisor antes de comenzar. Responsable: equipo y docente. | No se podrán iniciar las pruebas físicas. |
| Errores de integración entre sensores y motores | MS03 y MS06 | Definir pines, señales y lógica de control; probar subsistemas por separado. Responsable: Sara y programación. | El robot podría moverse incorrectamente o no detectar al oponente. |

**Materiales completos para ejecutar el Día 2:** Por confirmar mediante inventario físico.

**Confirmado por:** Pendiente de validación del docente y responsable del equipo.

**Fecha/hora:** Pendiente de confirmación.

## 6 · Kata 0 — exploración técnica de arranque (100–160 min)

| Integrante/alcance | Pregunta técnica | Mini-prueba o prototipo de exploración | Resultado o error observado | Evidencia enlazada | Acción necesaria antes de D2 |
|---|---|---|---|---|---|
| Sara / MS03 | ¿Los motores y el driver permiten avanzar, retroceder y girar correctamente? | Conectar un motor a la vez y ejecutar comandos breves para comprobar el sentido de giro. | Pendiente de realizar. | Video y registro de conexiones pendientes. | Confirmar modelos, voltajes y compatibilidad del driver. |
| Sara / MS06 | ¿Los sensores pueden detectar al oponente desde diferentes posiciones? | Colocar un objeto de referencia frente y a los lados de los sensores y registrar las lecturas. | Pendiente de realizar. | Tabla de lecturas y fotografías pendientes. | Confirmar modelo de sensores y distancias de detección. |
| Integrante de diseño mecánico / ID por definir | ¿Todos los componentes caben dentro de 10 × 10 cm? | Realizar una distribución preliminar de componentes y verificar dimensiones. | Pendiente de realizar. | Boceto o CAD pendiente. | Confirmar medidas de motores, batería, sensores y controlador. |
| Integrante de electrónica / ID por definir | ¿La alimentación es suficiente y segura para motores y controlador? | Revisar fichas técnicas y medir voltajes antes de realizar conexiones definitivas. | Pendiente de realizar. | Diagrama eléctrico y mediciones pendientes. | Seleccionar batería, protección y conexiones adecuadas. |
| Integrante de programación / ID por definir | ¿Podemos integrar la lectura de sensores con el control de motores? | Desarrollar un programa básico que reciba una señal de sensor y ejecute un movimiento. | Pendiente de realizar. | Código y registro de prueba pendientes. | Definir pines y funciones de control. |
| Integrante de documentación / ID por definir | ¿La propuesta cumple con los requisitos de la competencia? | Revisar peso, dimensiones, funcionamiento autónomo, inicio y paro infrarrojo y seguridad. | Requisitos documentales identificados; homologación física pendiente. | Reglamento oficial y lista de verificación. | Completar inventario y registrar evidencias. |

**Integración entre subequipos:**

Para integrar los diferentes subsistemas necesitamos definir cómo se conectarán los motores, sensores y sistema de alimentación con el microcontrolador.

Proponemos utilizar el ESP32 como unidad principal de control, conectado a un driver de dos canales para manejar los motores de manera independiente.

Los sensores de detección enviarán información al microcontrolador para determinar si el oponente se encuentra al frente o hacia alguno de los lados.

También se propone utilizar sensores inferiores para identificar el borde blanco del Dohyo y evitar que el robot salga de la pista.

La programación deberá dar prioridad a la señal de paro y a la detección del borde antes de ejecutar movimientos de búsqueda o ataque.

Como primera integración queremos lograr que los motores respondan correctamente a comandos básicos. Después conectaremos los sensores y verificaremos que sus lecturas puedan utilizarse para modificar el movimiento.

Hasta el momento esta arquitectura corresponde a una propuesta de integración y todavía necesita validarse mediante pruebas físicas.

## 7 · Cierre: contrato técnico y puerta de salida E1 (160–180 min)

- [x] El objetivo colectivo tiene condición de éxito verificable.
- [ ] Cada estudiante depositó **su kit Markdown original** en `participantes/<alias>/compromiso.md`.
- [ ] Cada estudiante completó [E1 personal](../../participantes/_plantilla/dias/E1.md) y definió frontera, evidencia y alcance negociado.
- [ ] El inventario está **completo** y cada recurso indica cantidad, especificación, disponibilidad y responsable.
- [ ] Se asignó **dōjō específico** con edificio, salón/taller, horarios, supervisión y autorización.
- [ ] Se inspeccionaron riesgos, paro y condiciones de seguridad de la plataforma.
- [x] Se identificaron dependencias y posibles bloqueos del Día 2; falta confirmar disponibilidad de recursos y responsables.
- [ ] El profesor aprobó el alcance y la seguridad, o registró observaciones y una alternativa viable.

**Estado del gate:** REPLANIFICAR hasta completar las verificaciones obligatorias.

**Condiciones, responsables, fecha y próxima decisión:**

Antes de comenzar el Día 2 necesitamos confirmar los integrantes y sus responsabilidades, revisar físicamente los componentes disponibles y verificar que contamos con motores, driver, sensores y alimentación compatibles.

También debemos confirmar el edificio y número del Laboratorio de Electrónica, el horario autorizado y el responsable que supervisará las actividades.

Sara continuará con la preparación de los alcances MS03 y MS06, enfocándose en las pruebas de motorización y detección del oponente.

Los demás integrantes deberán confirmar sus alcances individuales y colocar sus compromisos originales en el repositorio.

Una vez que se revise el inventario y se obtenga la autorización correspondiente podremos comenzar con las pruebas físicas y registrar los primeros resultados.

**Próxima decisión:** Validar con el docente la viabilidad del diseño, la disponibilidad de recursos y las condiciones de seguridad antes de iniciar las pruebas.

**Revisor docente:** Pendiente de confirmación.

**Enlace a commit/PR:** Pendiente de agregar después de guardar el archivo en GitHub.

**Criterio mínimo E1:** existe un contrato de misión y frontera individual, hay evidencia del punto de partida, un inventario verificable y un espacio de trabajo autorizado. La ausencia de algún material crítico NO debe esconderse.
