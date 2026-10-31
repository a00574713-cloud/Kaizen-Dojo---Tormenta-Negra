# E1 · Día 1 — ATREVERSE | Contrato de misión, inventario y dōjō



## 0 · Identificación, equipo y logística del dōjō

| Campo obligatorio | Dato |
|---|---|
| Fecha y horario de esta sesión | 26 de octubre de 2026. Nuestro horario de trabajo es de 9:00 a 12:00, durante los cinco días de Kaizen Dōjō. |
| Nombre / alias del equipo | Tormenta Negra. |
| Misión / plataforma | M01 · Mini-sumo autónomo. |
| Objetivo verificable del robot (una frase) | Construir desde cero un robot mini-sumo autónomo que pueda avanzar, retroceder, girar, detectar a un oponente y reaccionar según las lecturas de sus sensores, comprobando su funcionamiento mediante pruebas documentadas. |
| **Dōjō asignado — campus, edificio y sala/taller exactos** | Tecnológico de Monterrey, Campus León / Edificio CTA / Laboratorio de Electrónica. |
| Puesto o zona dentro del dōjō | Trabajaremos en una mesa del Laboratorio de Electrónica. Para las pruebas de movimiento utilizaremos una zona despejada donde podamos observar el comportamiento del robot sin poner en riesgo a otras personas o equipos. |
| Horario / reserva confirmada | Nuestro horario de trabajo es de 9:00 a 12:00 durante la semana. La autorización específica del espacio está pendiente de confirmar. |
| Responsable del espacio y contacto institucional | Profesor Camilo René Duque. El contacto será mediante el correo institucional camilo.duque@tec.mx en un horario adecuado. |
| Acceso, aforo y ajustes de accesibilidad | Seguiremos las indicaciones del laboratorio y mantendremos despejados los pasillos y nuestra mesa de trabajo. Si algún integrante necesita apoyo con alguna actividad, nos organizaremos para ayudarlo. |
| Salidas, botiquín, extintor y punto de reunión | Antes de comenzar las pruebas físicas identificaremos las salidas, el botiquín, el extintor y el punto de reunión, con apoyo del responsable del laboratorio. |
| Zonas segregadas por riesgo | Separaremos el área de programación y conexiones del espacio donde realicemos las pruebas de movimiento. También tendremos cuidado con las herramientas y los componentes eléctricos. |
| Ubicación de materiales y resguardo nocturno | Nos proporcionarán un kit para construir el mini-sumo desde cero. Cuando lo recibamos, revisaremos sus componentes y los organizaremos en un lugar seguro. El sitio de resguardo se acordará con el responsable del laboratorio. |
| Plan de sustitución si falla el espacio | Si no podemos utilizar el Laboratorio de Electrónica, avanzaremos con el diseño, programación, revisión de componentes y documentación hasta contar con otro espacio autorizado para realizar pruebas físicas. |
| Instructor o supervisor presente en la sesión | Profesor Camilo René Duque. |

> ⛔ **No se permite avanzar a pruebas físicas sin dōjō concreto y autorización del responsable.** Aunque ya tenemos identificado el Laboratorio de Electrónica del CTA, antes de comenzar debemos confirmar que podemos utilizarlo y revisar las condiciones de seguridad.

## 1 · Integrantes, responsabilidades, accesibilidad y decisiones (0–15 min)

Nuestro equipo está formado por cuatro integrantes: Claudio, Sara, Max y Joel. Cada uno realizó su compromiso individual en Mission Forge C2 y seleccionó los alcances que quiere desarrollar durante el proyecto.

Al revisar nuestros compromisos vimos que algunos alcances se repiten. Consideramos que esto puede ayudarnos porque podremos trabajar juntos en ciertas partes del robot, pero también tendremos que organizar las actividades para que cada integrante pueda demostrar su propia contribución.

Los usuarios de GitHub que utilizaremos para nuestros archivos personales son `A00574802` (Claudio), `saragdr` (Sara), `MaxAmCam` (Max) y `A00574713` (Joel). En las tablas de materiales y riesgos asignamos una persona responsable por actividad para distribuir el seguimiento; esto no impide que otros integrantes colaboren.

| Alias GitHub | Rol inicial | Carta y frontera (D/S/E; F1–F4) | Alcances ID (1–3) | Kit personal (archivo) | Necesidad de apoyo o accesibilidad acordada |
|---|---|---|---|---|---|
| A00574802 (Claudio Gómez) | Integración de motores, programación de movimientos y desarrollo de una estrategia de ataque. | D · DOMINAR / F1 · INTEGRAR. Cartas D1 · AUTONOMOUS SYSTEM y S1 · STRATEGY 2.0. | MS03, MS07 y MS10. | [`participantes/A00574802/compromiso.md`](../../participantes/A00574802/compromiso.md) | Como todavía no tiene experiencia construyendo un mini-sumo, trabajará con apoyo del equipo para revisar conexiones, programación y pruebas. |
| saragdr (Sara Gabriela Díaz Rayas) | Integración y verificación de motores y sensores de detección del oponente. | S · SUPERAR / F1 · INTEGRAR. Carta D1 · AUTONOMOUS SYSTEM. | MS03 y MS06. | [`participantes/saragdr/compromiso.md`](../../participantes/saragdr/compromiso.md) | Se coordinará con los integrantes que también trabajan en motores y sensores para revisar conexiones y registrar sus propias pruebas. |
| MaxAmCam (Max Emiliano Amezcua Camacho) | Diseño y fabricación de la estructura mecánica, además de integración y pruebas de motorización. | S · SUPERAR / F1 · INTEGRAR. Carta D1 · AUTONOMOUS SYSTEM. | MS01 y MS03. | [`participantes/MaxAmCam/compromiso.md`](../../participantes/MaxAmCam/compromiso.md) | Trabajará con el equipo para verificar que el diseño mecánico sea compatible con los motores y los demás componentes. |
| A00574713 (Joel Alejandro Soto Muñoz) | Diseño y fabricación de la estructura mecánica e integración de sensores de detección. | D · DOMINAR / F1 · INTEGRAR. Carta D1 · AUTONOMOUS SYSTEM. | MS01 y MS06. | [`participantes/A00574713/compromiso.md`](../../participantes/A00574713/compromiso.md) | Se apoyará en el equipo para aprender a integrar los componentes y relacionar las lecturas de los sensores con el funcionamiento del robot. |

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

| Prueba diagnóstica | Responsable principal | Condición y procedimiento | Resultado observado / unidad | Problema / causa probable | Evidencia |
|---|---|---|---|---|---|
| 1. Movimiento de motores | Claudio, con apoyo de Sara | Cuando recibamos el kit, identificaremos los motores y el driver. Después revisaremos sus conexiones y realizaremos comandos breves para comprobar avance, retroceso y giros. | Pendiente de realizar. Todavía no contamos con los componentes para comprobar el funcionamiento. | Dependemos de recibir el kit y verificar la compatibilidad entre motores, driver y alimentación. | Fotografía de conexiones y video de prueba pendientes. |
| 2. Lectura de sensores | Sara, con apoyo de Joel | Identificaremos los sensores incluidos en el kit y acercaremos y alejaremos un objeto de referencia para registrar sus lecturas. | Pendiente de realizar. Registraremos distancia y respuesta cuando tengamos el material. | Todavía no sabemos qué modelos de sensores recibiremos ni sus características. | Tabla de lecturas y fotografías pendientes. |
| 3. Revisión del montaje mecánico | Max, con apoyo de Joel | Mediremos los componentes y revisaremos cómo acomodar motores, sensores, controlador y batería dentro de la estructura. | Pendiente de realizar. El chasis y las medidas reales aún no se han verificado. | No conocemos las dimensiones ni los puntos de fijación de todos los componentes. | Croquis, fotografías y registro de medidas pendientes. |
| 4. Comportamiento de la misión | Joel, con apoyo del equipo | Después de integrar motores y sensores, comprobaremos si el robot detecta al oponente, se orienta hacia él y avanza; registraremos cinco intentos. | Pendiente de realizar. Todavía no existe una plataforma física integrada. | Primero necesitamos completar el montaje y verificar cada subsistema por separado. | Video y registro de cinco pruebas pendientes. |

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
| Claudio Gómez | [`participantes/A00574802/compromiso.md`](../../participantes/A00574802/compromiso.md) | MS03 · Integrar y verificar motorización y tracción. | MS07 · Crear biblioteca de primitivas de movimiento; MS10 · Diseñar y comparar una estrategia de ataque. | Identificar polaridad, relaciones de transmisión y límites del driver; montar motor y rueda; programar una función segura de velocidad y parada; definir condición de disparo y trayectoria; implementar ataque frontal, lateral o condicionado por sensor. | 9–12 h. | Pruebas y mediciones del movimiento, biblioteca de funciones y comparación de estrategias de ataque, con videos cuando sea posible. | Pendiente de validación docente. |
| Sara Gabriela Díaz Rayas | [`participantes/saragdr/compromiso.md`](../../participantes/saragdr/compromiso.md) | MS03 · Integrar y verificar motorización y tracción. | MS06 · Integrar sensores de detección del oponente. | Montar motor y rueda y probar sentido de giro con comandos breves; ensayar cinco encuentros y documentar errores de percepción. | 6–8 h. | Video del mini-sumo avanzando, retrocediendo, girando y realizando cinco pruebas de detección del oponente. | Pendiente de validación docente. |
| Max Emiliano Amezcua Camacho | [`participantes/MaxAmCam/compromiso.md`](../../participantes/MaxAmCam/compromiso.md) | MS01 · Diseñar y fabricar la estructura mecánica. | MS03 · Integrar y verificar motorización y tracción. | Medir componentes y dibujar envolvente; fabricar y ensamblar una versión; montar motor y rueda; comparar deslizamiento y respuesta en tres maniobras repetidas. | 9–12 h. | Evidencia del modelado, fabricación y ensamblaje, además de pruebas de motorización y tracción. | Pendiente de validación docente. |
| Joel Alejandro Soto Muñoz | [`participantes/A00574713/compromiso.md`](../../participantes/A00574713/compromiso.md) | MS01 · Diseñar y fabricar la estructura mecánica. | MS06 · Integrar sensores de detección del oponente. | Medir componentes y dibujar envolvente; fabricar y ensamblar una versión; medir rango efectivo de sensores en distancias y ángulos conocidos; ensayar cinco encuentros y documentar errores de percepción. | 9–12 h. | CAD, evidencia del ensamblaje, mapa de detección y video del mini-sumo funcionando autónomamente. | Pendiente de validación docente. |

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

Nos proporcionarán un kit para construir el robot mini-sumo desde cero, pero todavía no conocemos su contenido completo. Los materiales MAT-001 a MAT-025 corresponden a nuestra lista de trabajo actual. Los MAT-026 a MAT-032 son **elementos adicionales que debemos revisar**, no compras aprobadas ni piezas confirmadas. Si alguno no aplica, registraremos esa decisión después de inspeccionar el kit.

Cada fila tiene **una persona responsable principal** de verificar el recurso, sin impedir que los demás participen en el montaje. La distribución queda equilibrada con **8 recursos para Claudio, 8 para Sara, 8 para Max y 8 para Joel**. No registramos como disponible ningún material físico que aún no hayamos recibido o revisado.

| ID | Categoría | Material o recurso (especificación exacta: modelo, medida, versión o característica) | Cantidad requerida + unidad | Cantidad confirmada | Fuente/proveedor o dueño | Ubicación física o ruta digital | Responsable | Estado (disponible/reservado/falta) | Alternativa compatible | Día requerido |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| MAT-001 | Robot/plataforma | Robot mini-sumo autónomo M01 que construiremos desde cero. | 1 robot | 0 ensamblados | Proyecto del equipo | Laboratorio de Electrónica, CTA | Claudio | Pendiente de construcción | No aplica | D1–D5 |
| MAT-002 | Mecánica | Chasis para colocar motores, sensores, controlador y batería. Material y dimensiones por definir. | 1 ud. | Por confirmar | Kit / fabricación | Laboratorio de Electrónica, CTA | Max | Pendiente de verificar | Chasis fabricado por el equipo | D2 |
| MAT-003 | Actuadores | Motores para el movimiento del mini-sumo. Modelo y voltaje por confirmar. | 2 uds. | 2 previstos, 0 recibidos | Kit proporcionado | Laboratorio de Electrónica, CTA | Claudio | Pendiente de entrega | Motores compatibles | D2 |
| MAT-004 | Mecánica | Bases o soportes para las llantas. Falta confirmar si también incluyen las ruedas. | Cantidad por confirmar | Previstas, sin cantidad confirmada | Kit proporcionado | Laboratorio de Electrónica, CTA | Max | Pendiente de entrega | Soportes compatibles | D2 |
| MAT-005 | Electrónica | Tarjeta identificada provisionalmente como «2qtr». Confirmar modelo y función antes de utilizarla. | 1 ud. | 1 prevista, 0 recibidas | Kit proporcionado | Laboratorio de Electrónica, CTA | Sara | Pendiente de entrega | Por definir | D2 |
| MAT-006 | Control | Controlador para programar el mini-sumo autónomo. Modelo por confirmar. | 1 ud. | 1 previsto, 0 recibidos | Kit proporcionado | Laboratorio de Electrónica, CTA | Claudio | Pendiente de entrega | Controlador compatible | D2 |
| MAT-007 | Sensores | Sensores para detectar objetos u oponentes. Modelo y alcance por confirmar. | 2–3 uds. | 2–3 previstos, 0 recibidos | Kit proporcionado | Laboratorio de Electrónica, CTA | Sara | Pendiente de entrega | Sensores compatibles | D2 |
| MAT-008 | Sensores | Sensores para detectar el borde blanco del Dohyo. Confirmar si esta función la realiza la tarjeta «2qtr». | Por definir | Por confirmar | Kit proporcionado / por verificar | Laboratorio de Electrónica, CTA | Joel | Pendiente de verificar | Sensores reflectivos compatibles | D2 |
| MAT-009 | Control | Sistema de inicio y paro infrarrojo, si lo requiere el reglamento aplicable. | 1 sistema | Por confirmar | Kit / por verificar | Laboratorio de Electrónica, CTA | Sara | Pendiente de verificar | Sistema compatible autorizado | D2 |
| MAT-010 | Alimentación | Pila o batería para alimentar el robot. Voltaje y capacidad por confirmar. | 1 ud. | 1 prevista, 0 recibidas | Kit proporcionado | Laboratorio de Electrónica, CTA | Joel | Pendiente de entrega | Batería compatible | D2 |
| MAT-011 | Electrónica | Driver de motores, si no está integrado en el controlador. | 1 ud. | Por confirmar | Kit / por verificar | Laboratorio de Electrónica, CTA | Claudio | Pendiente de verificar | Driver compatible con los motores | D2 |
| MAT-012 | Conexiones | Cables para conectar motores, sensores, controlador y alimentación. | 1 juego | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica, CTA | Sara | Pendiente de verificar | Cableado compatible | D2 |
| MAT-013 | Conexiones | Conectores para las conexiones eléctricas del robot. | 1 juego | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica, CTA | Sara | Pendiente de verificar | Conectores compatibles | D2 |
| MAT-014 | Montaje | Tornillos, tuercas y separadores para fijar componentes. | 1 juego | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica, CTA | Max | Pendiente de verificar | Sujetadores compatibles | D2 |
| MAT-015 | Alimentación | Interruptor para encender y apagar el robot. | 1 ud. | Por confirmar | Kit / por verificar | Laboratorio de Electrónica, CTA | Joel | Pendiente de verificar | Interruptor compatible | D2 |
| MAT-016 | Herramientas | Desarmadores, pinzas y herramientas básicas de ensamblaje. | 1 juego | Por confirmar | Laboratorio | Laboratorio de Electrónica, CTA | Max | Disponibilidad por verificar | Herramientas equivalentes | D2 |
| MAT-017 | Medición | Multímetro para revisar voltajes y continuidad. | 1 ud. | Por confirmar | Laboratorio | Laboratorio de Electrónica, CTA | Sara | Disponibilidad por verificar | Multímetro equivalente | D2 |
| MAT-018 | Medición | Regla o calibrador para medir el chasis y los componentes. | 1 ud. | Por confirmar | Laboratorio | Laboratorio de Electrónica, CTA | Joel | Disponibilidad por verificar | Instrumento equivalente | D2 |
| MAT-019 | Medición | Báscula para comprobar el límite de peso del robot. | 1 ud. | Por confirmar | Laboratorio | Laboratorio de Electrónica, CTA | Max | Disponibilidad por verificar | Báscula digital equivalente | D3 |
| MAT-020 | Software | Programa compatible con el controlador para desarrollar y cargar el código. | 1 instalación | Por confirmar | Software gratuito o académico | Computadora del equipo | Claudio | Pendiente de definir | Entorno compatible con el controlador | D1–D2 |
| MAT-021 | Software | Programa CAD para diseñar la estructura del mini-sumo. | 1 instalación | Por confirmar | Software académico | Computadora del equipo | Joel | Pendiente de verificar | Software CAD equivalente | D1–D2 |
| MAT-022 | Documentación | Repositorio GitHub para código, diseño y evidencias. | 1 repositorio | 1 creado | Equipo Tormenta Negra | GitHub del equipo | Joel | Disponible | Copia local de respaldo | D1–D5 |
| MAT-023 | Pruebas | Dohyo o pista para probar el movimiento y la detección del borde. | 1 ud. | Por confirmar | Laboratorio | Zona de pruebas autorizada | Claudio | Disponibilidad por verificar | Pista de práctica equivalente | D3 |
| MAT-024 | Pruebas | Objeto de referencia para comprobar la detección del oponente. | 1 ud. | Por confirmar | Laboratorio / equipo | Zona de pruebas | Sara | Pendiente de verificar | Obstáculo estable | D3 |
| MAT-025 | Documentación | Celular o cámara para grabar funcionamiento y pruebas. | 1 ud. | Por confirmar | Equipo | Laboratorio de Electrónica, CTA | Claudio | Pendiente de verificar | Dispositivo equivalente | D2–D5 |
| MAT-026 | Mecánica (por verificar) | Ruedas compatibles con los motores; comprobar si vienen con MAT-004. | 2 uds. propuestas | Por confirmar | Kit / por verificar | Laboratorio de Electrónica, CTA | Max | Pendiente de verificar | Ruedas compatibles de buena adherencia | D2 |
| MAT-027 | Alimentación (condicional) | Cargador adecuado, solamente si la batería seleccionada es recargable y el kit no lo incluye. | 1 ud. si aplica | Por confirmar | Kit / laboratorio | Área de carga autorizada | Joel | Pendiente de verificar | Cargador compatible aprobado | D2 |
| MAT-028 | Conexiones (por verificar) | Cable USB de datos para programar el controlador, si ese es su método de carga de código. | 1 ud. si aplica | Por confirmar | Kit / equipo | Laboratorio de Electrónica, CTA | Claudio | Pendiente de verificar | Cable de datos compatible | D2 |
| MAT-029 | Seguridad eléctrica (condicional) | Protección contra sobrecorriente adecuada a la batería y conductores, según el diseño final. | 1 conjunto si aplica | Por confirmar | Kit / laboratorio | Laboratorio de Electrónica, CTA | Sara | Pendiente de verificar | Fusible o protección adecuada | D2 |
| MAT-030 | Herramientas (condicional) | Cautín o estación de soldadura, únicamente si las conexiones requieren soldadura. | 1 estación si aplica | Por confirmar | Laboratorio | Área de trabajo autorizada | Max | Disponibilidad por verificar | Conectores preensamblados | D2 |
| MAT-031 | Consumibles (condicional) | Soldadura y material aislante, únicamente si los requiere el montaje. | 1 juego si aplica | Por confirmar | Laboratorio / kit | Laboratorio de Electrónica, CTA | Joel | Disponibilidad por verificar | Conectores y aislantes equivalentes | D2 |
| MAT-032 | Mecánica (opcional) | Pala o frente inclinado para empuje, sólo si se decide incorporarlo y el reglamento lo admite. | 1 ud. opcional | Por confirmar | Kit / fabricación | Laboratorio de Electrónica, CTA | Max | Opcional, pendiente de decidir | Frente inclinado integrado al chasis | D3 |

En `datos/inventario_materiales.csv` debe conservarse esta misma lista; cuando recibamos el kit se anotarán los modelos, cantidades y ubicaciones reales. Es posible que varios recursos aparezcan integrados dentro de una misma pieza, por lo que habrá que actualizar las filas sin duplicar componentes.

### 5.2 Lista de cotejo específica por plataforma (elegir solo la misión asignada)

| Misión | Revisar y especificar (marca/modelo/cantidad reales) |
|---|---|
| M01 · Mini-sumo autónomo | Revisaremos el chasis, los motores, sus soportes y ruedas; también el controlador, el driver (si se requiere), los sensores del oponente, la tarjeta llamada provisionalmente «2qtr» y los sensores de borde. Confirmaremos la batería, el sistema de inicio/paro que pida el reglamento y las conexiones necesarias. El cargador, la protección eléctrica, las herramientas de soldadura y el frente inclinado sólo se incluirán si corresponden al diseño final. Registraremos modelos, cantidades y disponibilidad después de recibir el kit. |

**Enlaces a fichas técnicas / instrucciones de conexión, fabricación y seguridad:**

- [Reglamento Robolympics](https://profcduquetec.github.io/robolympics/).
- [Documentación oficial de ESP32](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/), en caso de utilizar este controlador.
- [Arduino IDE](https://docs.arduino.cc/software/ide/), si es compatible con el controlador del kit.
- [Catálogo Kaizen Dōjō C2](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit).
- `docs/seguridad.md` — pendiente de completar.
- `docs/conexiones.md` — pendiente de crear.
- `datos/inventario_materiales.csv` — lista preliminar para actualizar con el kit real.
- Fichas técnicas de los componentes del kit — pendientes de identificar.

### 5.3 Riesgos de recursos y abastecimiento

El seguimiento inicial también se repartió entre los cuatro integrantes, con **tres riesgos a cargo de cada uno**. Son responsables de revisar y documentar el problema; las decisiones que afecten al robot se tomarán en equipo.

| Bloqueante | A qué alcance afecta | Solución prevista / responsable principal | Impacto si no se resuelve |
|---|---|---|---|
| No conocemos los componentes exactos del kit | Todos los alcances | Sara: coordinar la revisión inicial y anotar modelos y cantidades cuando se entregue el kit. | No podremos confirmar compatibilidades ni definir el montaje. |
| El kit podría no incluir todos los recursos necesarios | Todos los alcances | Joel: comparar lo entregado con MAT-001 a MAT-032, distinguir lo necesario de lo condicional y anotar faltantes antes de D2. | La construcción podría retrasarse si falta una pieza necesaria. |
| Motores o driver incompatibles | MS03 · Motorización y tracción | Claudio: revisar voltajes, corrientes y conexiones antes de energizar, con apoyo de Sara. | No podremos controlar correctamente el movimiento. |
| Problemas de dimensiones y montaje del chasis | MS01 · Estructura mecánica | Max: medir componentes y revisar distribución, peso y dimensiones, con apoyo de Joel. | Los componentes podrían no caber o superar las restricciones. |
| Sensores de detección con alcance insuficiente | MS06 · Detección del oponente | Sara: coordinar pruebas de lectura; Joel apoyará con medidas de distancia y ángulo. | El robot podría no reconocer al oponente correctamente. |
| Fallas en funciones de movimiento | MS07 · Biblioteca de primitivas | Claudio: verificar avance, retroceso, giro y paro por separado. | La búsqueda y el ataque no funcionarían correctamente. |
| Estrategia de ataque sin respuesta reproducible | MS10 · Estrategia de ataque | Claudio: proponer dos estrategias comparables cuando el robot esté integrado. | No podremos contrastar comportamientos bajo pruebas similares. |
| Falta de pista de pruebas o agarre inadecuado | MS03, MS06 y MS10 | Max: revisar disponibilidad del Dohyo y condiciones mecánicas de ruedas y superficie; confirmar el área con el profesor. | No podremos ensayar tracción ni detección del borde en condiciones adecuadas. |
| Falta de validación de compromisos y horas | Todos los alcances | Joel: reunir los compromisos individuales y registrar observaciones del profesor. | Quizá debamos ajustar tareas o tiempos del equipo. |
| Falta de autorización para pruebas físicas | Todos los alcances | Sara: consultar con el responsable del laboratorio las condiciones para realizar pruebas seguras. | Las pruebas físicas no deben comenzar. |
| Batería, carga o alimentación no compatibles | Todos los alcances físicos | Joel: verificar voltaje, conectores y forma segura de carga con el equipo antes de energizar. | Podríamos dañar componentes o no lograr alimentar el robot. |
| Ruedas, soporte o pala incompatible con el chasis | MS01 y MS03 | Max: revisar fijaciones, medidas y contacto con el suelo; decidir junto al equipo si se necesita frente inclinado. | El robot podría presentar deslizamiento o fallas de montaje. |

**Materiales completos para ejecutar el Día 2:** Pendiente de confirmar cuando recibamos y revisemos el kit. La lista actual es preliminar; los renglones condicionales no se deben tratar como faltantes confirmados.

**Confirmado por:** Lista propuesta por el equipo Tormenta Negra. Verificación física y aprobación docente pendientes.

**Fecha/hora:** 26 de octubre de 2026. Hora de revisión del kit pendiente.

## 6 · Kata 0 — exploración técnica de arranque (100–160 min)

Cada integrante tiene **tres actividades de exploración propuestas**, alineadas con sus alcances personales. No representan pruebas realizadas ni nuevos katas aprobados; se revisarán con el profesor.

| Integrante/alcance | Pregunta técnica | Mini-prueba o prototipo de exploración | Resultado o error observado | Evidencia enlazada | Acción necesaria antes de D2 |
|---|---|---|---|---|---|
| Claudio (`A00574802`) / MS03 | ¿Cómo controlar los motores para que el robot avance, retroceda y gire? | Identificar polaridad, revisar límites del driver y preparar comandos breves para cuando llegue el kit. | Pendiente de realizar; no contamos con componentes verificados. | Fotografía de conexiones y video pendientes. | Revisar motores, driver y alimentación. |
| Claudio (`A00574802`) / MS07 | ¿Cómo separar las maniobras en funciones de programación? | Preparar funciones de avance, retroceso, giro y paro y probarlas de manera individual cuando exista hardware compatible. | Pendiente de realizar. | Código y pruebas pendientes. | Confirmar controlador y pines usados. |
| Claudio (`A00574802`) / MS10 | ¿Cómo comparar dos estrategias de ataque? | Proponer una estrategia frontal y otra condicionada por sensores para compararlas más adelante. | Pendiente de realizar; el robot aún no está integrado. | Diagrama y comparación pendientes. | Contar con movimientos y detección funcionales. |
| Sara (`saragdr`) / MS03 | ¿Las conexiones permiten movimientos básicos seguros? | Revisar cableado de motores y realizar comandos cortos de avance, retroceso y giro cuando se reciba el kit. | Pendiente de realizar. | Registro de conexiones y video pendientes. | Confirmar motores, driver y batería. |
| Sara (`saragdr`) / MS06 | ¿Qué lecturas permiten identificar al oponente? | Medir la respuesta de los sensores frente a un objeto de referencia. | Pendiente de realizar; sensores aún no recibidos. | Tabla de lecturas pendiente. | Identificar modelos y conexiones del kit. |
| Sara (`saragdr`) / MS06 | ¿Con qué frecuencia el robot detecta correctamente al oponente durante cinco intentos? | Preparar una hoja de cinco pruebas controladas y registrar detecciones y errores cuando el sistema funcione. | Pendiente de realizar. | Registro de cinco pruebas y video pendientes. | Definir el procedimiento de prueba con Joel. |
| Max (`MaxAmCam`) / MS01 | ¿Cómo acomodar los componentes dentro del tamaño permitido? | Medir piezas recibidas y elaborar un CAD preliminar de la distribución. | Pendiente de realizar; faltan medidas reales. | Croquis o CAD pendiente. | Inspeccionar chasis, motores y batería. |
| Max (`MaxAmCam`) / MS03 | ¿Cómo cambia el deslizamiento durante maniobras repetidas? | Comparar respuesta de ruedas y soporte en tres maniobras iguales después del montaje. | Pendiente de realizar. | Videos y tabla comparativa pendientes. | Confirmar ruedas, motores y pista autorizada. |
| Max (`MaxAmCam`) / MS01 | ¿Las fijaciones permiten un montaje estable y dentro del límite de peso? | Revisar soportes, tornillería, distribución y peso con los componentes reales. | Pendiente de realizar. | Fotografías, medidas y peso pendientes. | Confirmar componentes, báscula y calibrador. |
| Joel (`A00574713`) / MS01 | ¿Cómo fabricar y ensamblar la estructura sin interferencias entre piezas? | Apoyar en el diseño, preparar el montaje y verificar sujeción y accesos. | Pendiente de realizar; estructura no fabricada. | CAD, fotos y registro de montaje pendientes. | Definir dimensiones y método de fabricación con Max. |
| Joel (`A00574713`) / MS06 | ¿Desde qué distancias y ángulos detectan al oponente los sensores? | Registrar el rango efectivo a distintas posiciones y compararlo en pruebas repetidas. | Pendiente de realizar. | Tabla de distancias y video pendientes. | Identificar sensores y objeto de referencia. |
| Joel (`A00574713`) / MS01–MS06 | ¿Dónde conviene colocar los sensores sin interferir con el chasis? | Revisar espacio, fijación y orientación de sensores; verificar también la posible función de borde de la tarjeta «2qtr». | Pendiente de realizar. | Croquis de ubicación y fotografías pendientes. | Verificar dimensiones del chasis y función real de la tarjeta. |

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
- [ ] El inventario está **completo** y cada recurso indica cantidad, especificación, disponibilidad y responsable. Tenemos 32 renglones preliminares (25 de la lista original y 7 verificaciones adicionales), pero aún falta inspeccionar el kit y confirmar cantidades y modelos.
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

Como varios de nuestros alcances se repiten, propusimos responsables principales en las tablas. Todavía debemos confirmar entre los cuatro integrantes cómo colaboraremos y qué evidencia individual entregará cada uno.

Además, necesitamos revisar con el profesor la viabilidad de los compromisos de Claudio, Max y Joel, ya que su estimación máxima de trabajo supera las 10 horas técnicas orientativas.

Antes de energizar el robot confirmaremos la autorización del laboratorio, las condiciones de seguridad y el procedimiento de desconexión.

**Próxima decisión:** Revisar el kit con el profesor Camilo René Duque, confirmar los componentes disponibles, revisar la distribución propuesta de actividades y validar que podamos comenzar la construcción y las pruebas de manera segura.

**Revisor docente:** Camilo René Duque — revisión pendiente.

**Repositorio:** [Kaizen-Dojo---Tormenta-Negra](https://github.com/a00574713-cloud/Kaizen-Dojo---Tormenta-Negra). **Commit del E1 del 26 de octubre:** [b5ea58d](https://github.com/a00574713-cloud/Kaizen-Dojo---Tormenta-Negra/commit/b5ea58dea1f2e93ab4a48c1a004822817c3520c9).

**Criterio mínimo E1:** existe un contrato de misión y frontera individual, hay evidencia del punto de partida, un inventario verificable y un espacio de trabajo autorizado. La ausencia de algún material crítico NO debe esconderse.


**Archivo del Día 1:** esta bitácora conserva el estado de planeación del 26 de octubre. Los compromisos de los cuatro integrantes están enlazados; el montaje y las pruebas posteriores se registran en [E2](dia-02.md), [E3](dia-03.md), [E4](dia-04.md) y [E5](dia-05.md).
