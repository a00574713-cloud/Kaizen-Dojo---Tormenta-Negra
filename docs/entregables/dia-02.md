---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E2"
dia: 2
responsable_registro: "equipo"
estado: "REGISTRADO"
fecha: "2026-10-27"
revision_docente: "PENDIENTE"
---

# E2 · Día 2 — HACER | Primera integración del mini-sumo

Durante el segundo día pasamos de la planeación a las conexiones físicas del mini-sumo. Trabajamos con la placa controladora, los sensores, los motores y el cableado. También preparamos cables mediante soldadura y resolvimos dificultades para conseguir conectores. El armado y las primeras pruebas continuaron el [Día 3](dia-03.md).

## 0 · Identificación y continuidad

| Campo | Dato |
|---|---|
| Fecha, equipo, misión y plataforma | 27 de octubre de 2026 · Tormenta Negra · M01, mini-sumo autónomo. |
| Dōjō real y zona utilizada | Laboratorio de Electrónica, edificio CTA, Tecnológico de Monterrey Campus León. |
| Estado del E1 y avance desde D1 | En el [E1](dia-01.md) organizamos el proyecto y el inventario. En D2 comenzamos la integración física del robot. |
| Compromisos de cada integrante | [Joel](../../participantes/A00574713/compromiso.md) · [Sara](../../participantes/saragdr/compromiso.md) · [Max](../../participantes/MaxAmCam/compromiso.md) · [Claudio](../../participantes/A00574802/compromiso.md). Mantuvimos los alcances seleccionados. |
| Materiales utilizados | Placa controladora, sensores, dos motores con ruedas, batería, cables, conectores y componentes del montaje. Referencias del inventario: MAT-003, MAT-006, MAT-007, MAT-010, MAT-012 y MAT-013. |
| Objetivo técnico del día | Realizar las conexiones de los sensores y actuadores a la placa para preparar el primer montaje del robot. |

## 1 · Actividades del día (ruta de 180 minutos)

| Bloque de la guía | Minutos | Trabajo registrado |
|---|---:|---|
| Revisión de misión y compromisos | 0–15 | Retomamos las tareas planteadas en el E1 y organizamos los componentes que utilizaríamos. |
| Microlección aplicada | 15–35 | Trabajamos en la adaptación de cables y conectores a las entradas de la tarjeta y en la preparación de cables mediante soldadura. |
| Katas de integración | 35–105 | Realizamos conexiones de sensores y motores; Sara soldó cables, Joel y Max apoyaron en las conexiones y Claudio consiguió materiales. |
| Ensayos iniciales / línea base | 105–145 | Dedicamos la sesión al cableado y la preparación del robot. La revisión del funcionamiento se dejó para el Día 3. |
| Consolidación de evidencia | 145–170 | Registramos las actividades y tomamos cuatro fotografías del proceso, disponibles en [evidencias del Día 2](../../evidencias/dia-02/README.md). |
| Gate E2 | 170–180 | Acordamos continuar con las adaptaciones del chasis, las conexiones y las primeras pruebas durante el siguiente día de trabajo. |

Los intervalos organizan las actividades del día.

## 2 · Integración por alcances

El principal reto de la sesión fue adaptar los conectores a la placa y preparar los cables para conectar los componentes. También encontramos que la base metálica y otra pieza gruesa del montaje necesitaban ajustes.

| Integrante | Alcance | Actividad realizada | Evidencia | Avance |
|---|---|---|---|---|
| Sara · `saragdr` | MS03 y MS06 | Seleccionó componentes y realizó principalmente la soldadura de cables para las conexiones. | [Fotos del montaje](../../evidencias/dia-02/README.md) · [E2 personal](../../participantes/saragdr/dias/E2.md) | Cables preparados para la integración. |
| Joel · `A00574713` | MS01 y MS06; apoyo a motorización | Conectó sensores y motores a la placa junto con Max y apoyó a Sara con la soldadura. | [Fotos tomadas durante la sesión](../../evidencias/dia-02/README.md) · [E2 personal](../../participantes/A00574713/dias/E2.md) | Conexiones físicas realizadas. |
| Max · `MaxAmCam` | MS01 y MS03; apoyo a sensores | Ayudó a conectar los sensores a la placa controladora. | [Fotos del montaje](../../evidencias/dia-02/README.md) · [E2 personal](../../participantes/MaxAmCam/dias/E2.md) | Conexiones de sensores realizadas. |
| Claudio · `A00574802` | MS03, MS07 y MS10 | Consiguió materiales que necesitábamos para continuar con la construcción del robot. | [Registro del equipo](dia-02.md) · [E2 personal](../../participantes/A00574802/dias/E2.md) | Abastecimiento para continuar las conexiones. |

## 3 · Estado de integración al terminar el día

| Subsistema | Avance del 27 de octubre | Participantes relacionados | Evidencia |
|---|---|---|---|
| Estructura mecánica | Contábamos con la base metálica y las piezas del montaje; quedaban ajustes para armar el chasis. | Max y Joel | [Pieza metálica](../../evidencias/dia-02/IMG_3583.jpg) |
| Motores y accionamiento | Preparamos y conectamos el cableado de los motores a la placa. | Sara, Joel y Max; Claudio apoyó con materiales | [Motores y tarjeta](../../evidencias/dia-02/IMG_3584.jpg) |
| Sensores | Conectamos los sensores a la placa controladora. | Joel, Max y Sara | [Cableado](../../evidencias/dia-02/IMG_3585.jpg) |
| Control | Trabajamos con la placa que controlará el robot y sus conectores. | Equipo | [Placa controladora](../../evidencias/dia-02/IMG_3580.jpg) |
| Integración del robot | Terminamos la jornada con los componentes conectados y el montaje en preparación. | Equipo | [Galería del E2](../../evidencias/dia-02/README.md) |

**Identificación de esta etapa:** D2-CABLEADO · 27-10-2026. Fue la base del montaje y de las pruebas de motores y sensores realizadas el 28 de octubre.

### Evidencias fotográficas

**Fotografía 1. Conexiones de la placa y motor.**

![Conexiones de la placa y motor](../../evidencias/dia-02/IMG_3585.jpg)

**Fotografía 2. Motores, batería y placa controladora.**

![Motores, batería y placa controladora](../../evidencias/dia-02/IMG_3584.jpg)

**Fotografía 3. Pieza metálica del montaje.**

![Pieza metálica del montaje](../../evidencias/dia-02/IMG_3583.jpg)

**Fotografía 4. Vista detallada de la placa.**

![Vista detallada de la placa](../../evidencias/dia-02/IMG_3580.jpg)

## 4 · Protocolo y línea base del robot

El trabajo de este día se concentró en la integración de los componentes. Para la siguiente sesión planteamos revisar la respuesta de los motores y la lectura de los sensores con la placa controladora.

| Prueba prevista | Qué revisaríamos | Responsables relacionados | Registro |
|---|---|---|---|
| Motorización (MS03) | Respuesta de ambos motores y sentido de giro al recibir comandos. | Sara y Claudio, con apoyo del equipo. | [Protocolo de pruebas](../../pruebas/protocolo.md) |
| Sensores (MS06) | Lectura de sensores y respuesta frente a las condiciones utilizadas durante la prueba. | Joel y Sara. | [Protocolo de pruebas](../../pruebas/protocolo.md) |
| Integración física (MS01) | Ajuste de la base, fijaciones y distribución de componentes. | Max y Joel. | [E3 del equipo](dia-03.md) |

Las pruebas comenzaron el **28 de octubre**, como se registra en el [E3](dia-03.md). El [CSV de ensayos](../../datos/ensayos.csv) se reserva para los resultados cuantitativos de los ensayos.

## 5 · Decisiones y trabajo para Kaizen 1

| Situación del Día 2 | Acción siguiente | Responsable |
|---|---|---|
| Tuvimos dificultades para conseguir adaptadores y conectores. | Conseguir los materiales adecuados y terminar el cableado. | Claudio y Sara, con apoyo del equipo. |
| La base de acero y la pieza gruesa requerían ajustes. | Adecuar y ensamblar el chasis. | Max y Joel. |
| Los motores y sensores ya estaban conectados. | Preparar programas y revisar su respuesta. | Joel, Sara y Claudio. |
| El robot necesitaba continuar su integración. | Organizar los componentes sobre el chasis y avanzar hacia el funcionamiento autónomo. | Equipo Tormenta Negra. |

- [x] Se documentaron las conexiones realizadas durante el Día 2.
- [x] Se agregaron cuatro fotografías del proceso.
- [x] Se registraron las aportaciones de los cuatro integrantes.
- [x] Se enlazó el protocolo y la continuación del trabajo en E3.
- [ ] Revisión del profesor Camilo René Duque.

**Gate E2:** continuamos el montaje y las pruebas en E3. **Revisión docente:** pendiente.
**Siguiente avance:** [E3 · Día 3 — Montaje y pruebas iniciales](dia-03.md).  
