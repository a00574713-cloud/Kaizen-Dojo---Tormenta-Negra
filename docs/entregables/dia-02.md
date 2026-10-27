---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E2"
dia: 2
responsable_registro: "equipo"
estado: "PENDIENTE"
fecha: "2026-10-27"
revision_docente: "PENDIENTE"
---

# E2 · Día 2 — HACER | Primera integración funcional y línea base V1

> **Regla:** registrar lo realmente observado y enlazar las evidencias disponibles. **No se realizaron pruebas el Día 2 y todavía no existe una V1 funcional comprobada.** Las actividades de hoy corresponden a conexiones e integración física parcial. Los resultados que dependan de ensayos se mantienen pendientes.

## 0 · Identificación y continuidad

| Campo | Dato |
|---|---|
| Fecha, equipo, misión y plataforma | 27 de octubre de 2026. Tormenta Negra; M01 · Mini-sumo autónomo que construiremos desde cero. |
| Dōjō real y mesa/zona utilizada | Tecnológico de Monterrey, Campus León; edificio CTA, Laboratorio de Electrónica. Mesa o puesto exacto no registrado. |
| Estado del gate E1 / cambios desde D1 | E1 cerró como **REPLANIFICAR**, por verificaciones y autorización pendientes. En D2 se avanzó de la planeación a conectar físicamente sensores y actuadores con la placa de control; la aprobación docente y la validación de seguridad siguen sin registrarse. [E1 del equipo](dia-01.md). |
| Kit por integrante / compromisos modificados | Compromisos originales consultables: [Joel](../../participantes/A00574713/compromiso.md), [Sara](../../participantes/saragdr/compromiso.md), [Max](../../participantes/MaxAmCam/compromiso.md) y [Claudio](../../participantes/A00574802/compromiso.md). No se reportaron cambios a alcances ni katas; falta reorganizar los archivos en las carpetas individuales y validarlos con el profesor. |
| Materiales recibidos y pendientes | Se trabajó con **sensores, motores/actuadores, una placa de control y cables**; se desconocen modelos y cantidades verificadas. Relación preliminar con E1: MAT-003, MAT-006, MAT-007 y MAT-012. **No está confirmada** la identidad ni presencia de los sensores de borde MAT-008, la tarjeta MAT-005 o el driver MAT-011. Hubo dificultades para encontrar adaptadores/conectores del cableado (MAT-013). La **base de acero y una placa gruesa del montaje** todavía requerían adecuación; falta confirmar su denominación y registrar su correspondencia con MAT-002/MAT-014. El chasis no se terminó. No se ha conciliado el inventario completo del kit ni confirmado el resto de materiales. |
| Objetivo técnico del Día 2 | Preparar la primera integración física mediante las conexiones de sensores y actuadores con la placa controladora, como paso previo al montaje completo y a las pruebas. **Resultado alcanzado: cableado parcial.** La V1 funcional propuesta (al menos un subsistema comprobado) **no se alcanzó**. |

## 1 · Ruta de las actividades de hoy (180 min)

Los intervalos de esta tabla son los **bloques previstos por la plantilla**; el equipo no registró horas reales de inicio/fin de cada actividad.

| Bloque | Minutos previstos | Registro requerido / evidencia real |
|---|---:|---|
| Revisión de misión y compromisos | 0–15 | Se conservan los compromisos y alcances del E1. No se reportaron modificaciones ni una nueva aprobación; quedó pendiente la revisión del profesor. |
| Microlección aplicada | 15–35 | No se documentó una microlección formal. El reto práctico fue conseguir adaptadores para el cableado y realizar conexiones y soldadura; no hay fuente técnica o ejercicio específico registrado. |
| Katas de integración | 35–105 | Sara seleccionó componentes y soldó cables; Joel conectó sensores y motores junto con Max, además de apoyar en la soldadura; Max ayudó con la conexión de sensores; Claudio consiguió materiales faltantes. Son actividades preparatorias de sus alcances: ningún kata de montaje y **prueba** quedó validado. |
| Ensayos iniciales / línea base | 105–145 | **0 pruebas ejecutadas.** No se energizó ni se verificó el funcionamiento en un ensayo reportado. No existen lecturas, medidas de desempeño, observaciones de giro ni línea base numérica. |
| Consolidación de evidencia | 145–170 | Se registraron las actividades declaradas en este E2 y el estado del protocolo. No se proporcionaron fotos de conexión, video, CAD, firmware o mediciones del Día 2; añadir sus enlaces cuando existan. |
| Gate E2 | 170–180 | No hubo revisión del profesor. Se mantiene **REPLANIFICAR** como propuesta documental del equipo por falta de pruebas y de una función V1 demostrable. Próximo paso: terminar el montaje y verificar componentes de manera segura. |

## 2 · Microlección e integración por alcances

**Tema práctico que generó dificultades:** adaptación de conectores/cables a los puntos de conexión de la placa y preparación de cables soldados. También quedó pendiente adecuar la base de acero y la placa gruesa del montaje. **Material o referencia utilizada:** componentes físicos del robot; no se registraron manuales, modelos ni referencias consultadas. No se reportó una microlección formal.

| Alias | Alcance | Kata seleccionado / relación con D2 | Acción técnica realmente ejecutada | Archivo, commit o plano | Estado (pendiente/probado/bloqueado) | Dependencia de otro integrante |
|---|---|---|---|---|---|---|
| `saragdr` (Sara) | MS03 y MS06 | Preparación para montaje y prueba de motores y para ensayos de detección; **katas aún no verificados**. | Seleccionó componentes y realizó principalmente la soldadura de cables. | [Compromiso de Sara](../../participantes/saragdr/compromiso.md); evidencia fotográfica aún no enlazada. | Conexiones en proceso; funcionamiento **no probado**. | Integración de placa, sensores y motores con Joel y Max; materiales obtenidos con apoyo de Claudio. |
| `A00574713` (Joel) | MS01 y MS06; apoyo a motorización | Preparación de integración mecánica/sensores; medición del rango y ensayos de detección **pendientes**. | Conectó sensores y motores a la placa junto con Max y apoyó a Sara en la soldadura. | [Compromiso de Joel](../../participantes/A00574713/compromiso.md); evidencia de cableado aún no enlazada. | Cableado en proceso; funcionamiento **no probado**. | Montaje mecánico con Max y pruebas de sensores con Sara. |
| `MaxAmCam` (Max) | MS01 y MS03; apoyo a sensores | Preparación de ensamblaje y motorización; montaje completo y maniobras **pendientes**. | Ayudó a conectar sensores a la placa. | [Compromiso de Max](../../participantes/MaxAmCam/compromiso.md); fotografía o plano aún no enlazado. | Conexiones en proceso; funcionamiento **no probado**. | Adaptación de la base y placa gruesa; integración de motores con Joel y Sara. |
| `A00574802` (Claudio) | MS03, MS07 y MS10 | Apoyo de abastecimiento para integrar motorización; las funciones de movimiento y estrategia de ataque **no se han programado ni probado**. | Consiguió principalmente los materiales que necesitaba el equipo y no estaban disponibles. | [Compromiso de Claudio](../../participantes/A00574802/compromiso.md); comprobación del material conseguido pendiente. | Abastecimiento atendido parcialmente; pruebas y software **pendientes**. | Que el equipo finalice cableado/montaje y confirme compatibilidad eléctrica. |

La distribución describe el trabajo real del Día 2, incluso cuando una persona apoyó un subsistema fuera de sus alcances principales. **No se adjudican ensayos ni archivos técnicos que aún no existen en el repositorio.**

## 3 · Estado de integración V1

| Subsistema | Entrada | Salida esperada | Responsable | Prueba de integración y observación | Evidencia |
|---|---|---|---|---|---|
| Estructura/mecánica | Base de acero, placa gruesa del montaje y piezas aún por identificar. | Chasis armado y fijaciones compatibles con placa, motores y sensores. | Max y Joel. | Se reportó que la base y la placa gruesa necesitaban adecuación; **montaje incompleto, sin prueba mecánica**. | Descripción en este E2; fotos/CAD pendientes. |
| Energía y accionamiento | Motores, conexiones hacia placa de control; alimentación y driver por especificar. | Giro correcto de motores, avance/retroceso y detención controlada. | Sara y Claudio, con apoyo de Joel y Max. | Los motores se conectaron, pero **no se probó** si giran ni se comprobó su sentido de giro o polaridad. | Descripción en este E2; esquema eléctrico y video pendientes. |
| Sensores/percepción | Sensores y cableado a la placa; tipo y pines por documentar. | Lecturas reconocidas por el controlador para detectar oponente y, si aplica, borde. | Sara y Joel, con apoyo de Max. | Se hicieron conexiones físicas; **no hubo pruebas de lectura ni calibración**. | Descripción en este E2; tabla de lecturas pendiente. |
| Control/software | Placa controladora con componentes conectados; modelo y firmware por identificar. | Ejecutar comandos de movimiento e interpretar sensores. | Claudio; integración conjunta. | **No se reportó programación ni carga de firmware funcional**. | No hay código funcional de D2 enlazado; [carpeta de código](../../codigo/README.md). |
| Integración global | Chasis parcial, sensores y actuadores conectados a placa. | Robot autónomo capaz de desplazarse y reaccionar a un oponente. | Equipo Tormenta Negra. | **No probada.** No funciona todavía ningún subsistema según el registro del equipo. | Este registro; demostración y ensayos pendientes. |

**Versión identificable:** **D2 · conexión física parcial (27-10-2026)**, estado documental previo a V1. El historial de este archivo identifica la actualización del equipo. **No se ha producido una V1 funcional verificable ni un firmware/CAD etiquetado.**

**Comportamiento que SÍ demuestra esta etapa:** se realizaron conexiones físicas de sensores y actuadores a la placa controladora, además de soldar cables. **Esto no comprueba señales, movimiento ni autonomía.**

**Lo que aún falla o está pendiente:** adaptar las piezas de la estructura, terminar el chasis, identificar conexiones y componentes, comprobar sensores, verificar motores y polaridad/sentido de giro y programar el robot. No se diagnosticó un fallo funcional porque no se hicieron ensayos.

## 4 · Protocolo y línea base del robot (datos observados)

Consultar [protocolo de pruebas](../../pruebas/protocolo.md) y [registro de ensayos](../../datos/ensayos.csv). **Las condiciones propuestas a continuación son para pruebas posteriores; ninguna fue ejecutada el Día 2.**

| Campo de validez experimental | Respuesta obligatoria |
|---|---|
| Pregunta y resultado que se quiere medir | **Próxima prueba de sensores (MS06):** determinar si el robot identifica un objeto de referencia y bajo qué distancias/ángulos. **Próxima prueba de motores (MS03):** confirmar movimiento y sentido de giro esperado con comandos breves. |
| Métrica primaria + unidad | **Propuesta para detección:** aciertos de detección en 5 intentos (n y porcentaje, %). Como medición complementaria: distancia efectiva (cm) y ángulo (°). **No hay valores medidos**. En motorización: maniobra correcta/incorrecta por comando (n), todavía sin medición. |
| Éxito/fallo (criterio cuantitativo u observable) | Para detección: éxito cuando el controlador registra al objeto colocado en la posición de referencia, fallo si no lo detecta. Para motores: éxito cuando cada motor responde en el sentido ordenado y puede detenerse; fallo si no responde o gira en sentido contrario. **Criterios por validar antes del ensayo**, con configuración y posiciones fijas. |
| Lugar, configuración, pista/dohyō/estaciones/marcadores | Laboratorio de Electrónica, CTA. **Dohyō, superficie exacta, mesa y objeto de referencia para futuras pruebas: sin confirmar.** |
| Configuración del robot: batería, firmware y sensores | Se conectaron sensores y actuadores a una placa controladora; faltan identificar el modelo de placa, sensores, batería, alimentación, firmware y pinout. **Ninguna configuración energizada o ensayada está documentada**. |
| Condiciones controladas: luz, rival, posición de inicio, etc. | Todavía sin definir o registrar; para ensayos futuros se documentarán iluminación, posición inicial, distancia y orientación del objeto, superficie y alimentación. |
| Número de corridas planeadas / ejecutadas | **5 / 0** para detección del oponente, de acuerdo con el compromiso de MS06. Se realizaron 0 porque el equipo dedicó la sesión a conectar componentes y el montaje no estaba listo para pruebas. |
| Procedimiento reproducible, responsable y seguridad/aborto | **Propuesta no ejecutada:** (1) confirmar montaje, voltajes, compatibilidad y autorización; (2) inspeccionar conexiones con el robot desconectado; (3) probar motores con ruedas levantadas y comandos cortos; (4) ubicar objeto a una distancia/ángulo fijados y anotar 5 lecturas; (5) registrar resultados y detener/desconectar ante movimiento inesperado, calentamiento o conexión insegura. Sara y Joel documentarán detección; Claudio y Max apoyarán motorización. Se deben definir los valores exactos antes de ensayar. |
| Datos sin procesar y video/foto corta | [CSV de ensayos](../../datos/ensayos.csv) **sin filas porque no se hicieron pruebas**. No se proporcionó ni enlazó video/foto técnica del Día 2. |

| Ensayo previsto | Condición inicial | Valor (+ unidad) | Éxito/fallo | Observación relevante / incidencia |
|---:|---|---|---|---|
| 1 | Pendiente de definir; **no ejecutado**. | Sin medición. | No evaluado. | Conexiones físicas realizadas, sin prueba. |
| 2 | Pendiente de definir; **no ejecutado**. | Sin medición. | No evaluado. | Sin prueba. |
| 3 | Pendiente de definir; **no ejecutado**. | Sin medición. | No evaluado. | Sin prueba. |
| 4 | Pendiente de definir; **no ejecutado**. | Sin medición. | No evaluado. | Sin prueba. |
| 5 | Pendiente de definir; **no ejecutado**. | Sin medición. | No evaluado. | Sin prueba. |

**Línea base resumida (no fabricada):** **n = 0 ensayos ejecutados; n = 0 válidos.** Media, mediana, dispersión y tasa de éxito: **no calculables**, no 0 %. No existen casos descartados porque no hubo corridas. La línea base cuantitativa deberá obtenerse cuando exista un subsistema probado.

## 5 · Decisiones al cierre, bloqueos y Kaizen de mañana

| Fallo o cuello de botella observado | Hipótesis preliminar (sin confirmar) | Prioridad | Responsable | Material / apoyo necesario |
|---|---|---|---|---|
| Dificultad para conseguir adaptadores/conectores para los puntos de la placa. | Los cables/conectores disponibles podrían no corresponder al tipo de terminal de la placa. | Alta | Sara, con apoyo de Claudio para materiales. | Identificar tipo de conector, revisar MAT-012/MAT-013 y documentar pinout; conseguir adaptadores compatibles si aún hacen falta. |
| Base de acero y placa gruesa sin adecuación final; chasis incompleto. | Las piezas requieren ajustes de fijación o montaje antes de integrar todo el robot. | Alta | Max y Joel. | Medidas de piezas, elementos de fijación y herramientas disponibles; identificar el nombre técnico de la placa gruesa. |
| No se comprobó el sentido de giro de los motores ni su respuesta. | Falta terminar montaje y confirmar conexión correcta, driver y alimentación. | Alta | Claudio y Sara; apoyo de Max. | Revisión eléctrica, prueba breve y segura de sentido de giro; registro de resultado real. |
| Sensores conectados, pero sin lecturas probadas. | No se ha validado pinout, señal ni programa de lectura. | Alta | Joel y Sara. | Identificación de sensores, programa de lectura, objeto de referencia y protocolo de 5 intentos. |
| Robot aún sin comportamiento autónomo programado o probado. | La estrategia depende de motorización y percepción comprobadas. | Media, después de las pruebas básicas | Claudio. | Firmware, documentación de pines y resultados de pruebas previas. |
| Gate E1 y seguridad pendientes de autorización/revisión. | La falta de verificaciones impide dar por validada la integración. | Alta | Equipo; revisión del profesor Camilo René Duque. | Verificar seguridad eléctrica, autorización de pruebas y viabilidad de alcances. |

- [ ] Hay prototipo V1, subsistema funcional verificable o fallo reproducible con condiciones registradas. **No: aún no hubo pruebas.**
- [ ] Existen archivos fuente o evidencia técnica enlazada, además de videos de uso controlado cuando correspondan. **Aún no se enlazaron evidencias de conexiones ni firmware.**
- [x] Hay una **justificación explícita** de la ausencia de datos basales y una propuesta de protocolo para cuando el robot esté listo. **No implica que ya exista línea base medida.**
- [ ] Cada alumno actualizó su E2 personal ([Joel](../../participantes/A00574713/dias/E2.md), [Sara](../../participantes/saragdr/dias/E2.md), [Max](../../participantes/MaxAmCam/dias/E2.md) y [Claudio](../../participantes/A00574802/dias/E2.md)) con contribución propia y límite de capacidad actual. **Se crearon los registros iniciales el 27 de octubre; cada integrante debe revisar su autoría y agregar reflexiones/evidencias personales antes de marcarlo terminado.**
- [ ] Se mantuvieron límites de seguridad y protección de datos. **No se reportaron ensayos, pero falta verificación y registro formal de seguridad.**

**Gate E2:** **REPLANIFICAR (estado propuesto en el registro, sin aprobación docente).** **Revisor:** Camilo René Duque, revisión pendiente. **Fecha:** 27 de octubre de 2026 (registro del equipo; sin fecha de revisión docente).

**Próxima prioridad de Kaizen 1:** terminar de armar el chasis y adecuar sus piezas; identificar placa, conectores, alimentación y pinout; ejecutar pruebas individuales de motores y sensores con autorización, guardando resultados reales en el CSV. Después, comenzar la programación autónoma según los subsistemas que hayan funcionado.

**Enlace al commit/PR:** consultar el [historial del archivo E2](https://github.com/a00574713-cloud/Kaizen-Dojo---Tormenta-Negra/commits/main/docs/entregables/dia-02.md) para identificar el commit de este registro. **No hay commit de firmware validado ni V1 funcional.**
