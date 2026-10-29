---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E3"
dia: 3
responsable_registro: "equipo"
estado: "EN_PROCESO"
fecha: "2026-10-28"
revision_docente: "PENDIENTE"
---

# E3 · Día 3 — MEDIR Y APRENDER | Kaizen 1: ensayo, hipótesis y mejora

> **Actualización del 28 de octubre de 2026 después del ensamblaje.** El equipo reporta que terminó de montar el chasis y que las pruebas exploratorias de motores y sensores fueron satisfactorias. Se recibieron cinco fotografías del robot ensamblado. No se han entregado lecturas numéricas, medidas físicas o cinco ensayos comparables. Las fotografías documentan el montaje, no prueban por sí solas el funcionamiento. Las contribuciones de cada integrante requieren confirmación personal.

## 0 · Contexto de investigación de hoy

| Campo | Registro |
|---|---|
| Fecha, equipo y misión | 28 de octubre de 2026 · Tormenta Negra · M01, mini-sumo autónomo. |
| Dōjō de referencia | Tecnológico de Monterrey, Campus León; edificio CTA, Laboratorio de Electrónica. No se ha confirmado en qué mesa o espacio exacto se realizaron las pruebas de hoy. |
| Continuidad con E2 | El 27 de octubre se conectaron sensores y motores a la placa, pero no se hicieron pruebas funcionales. Consultar [E2](dia-02.md). |
| Controlador y alimentación identificados en D3 | Tarjeta Azimov Team programada desde Arduino IDE; batería con etiqueta nominal de 7.4 V y capacidad de 500 mAh. El profesor indicó que la tarjeta ya cuenta con regulador; no se documentó medición de tensión, referencia del regulador o verificación de su capacidad. |
| Versión de partida | **Referencia descriptiva, no versión de firmware validada:** D2-CABLEADO (27-10-2026). Antes de estos ensayos no había V1 funcional medida ni commit de código de prueba en el repositorio. |
| Protocolo de partida | [Protocolo propuesto en E2](../../pruebas/protocolo.md) y [datos de ensayos](../../datos/ensayos.csv). Este protocolo requiere actualización/validación antes de realizar los ensayos formales de E3. |

## 1 · Ruta del Día 3 (180 min)

Los tiempos son **los bloques de la plantilla**, no tiempos reales registrados. El trabajo práctico y el montaje del día no se presentan como una sesión cronometrada de 180 minutos.

| Actividad | Minutos previstos | Evidencia y estado al corte |
|---|---:|---|
| Analizar un fallo real / demostración | 0–15 | **Realizado a nivel exploratorio:** los motores no giraban durante la prueba con solamente USB. La comunicación serie sí funcionó. Sin video o mediciones cargadas. |
| Diseño del experimento | 15–40 | **Propuesta documentada aquí:** contrastar la respuesta a comandos de motor bajo una alimentación adecuada, con condiciones y controles definidos previamente. Aún no se realizaron cinco corridas comparables. |
| Diagnóstico del prototipo V1 | 40–80 | **Observación exploratoria:** con la batería de 7.4 V los motores sí giraron. Esto apunta a una diferencia de alimentación, pero no determina la causa eléctrica exacta. |
| Kaizen 1: cambio técnico | 80–125 | **Cambio de configuración realizado:** pasar de una prueba solo por USB a probar con batería. **Pendiente:** identificar y guardar versión reproducible de firmware, condiciones eléctricas y evidencia. |
| Reensayo equivalente | 125–160 | **Pendiente:** no hay cinco pares V1/K1, tiempos, tensiones ni tasas de éxito registrados. |
| Documentar, debatir, reflejar | 160–180 | **Actualizado:** se documentaron las pruebas exploratorias y el chasis ensamblado mostrado en cinco fotos; las fotografías están en el repositorio; siguen en preparación las mediciones comparables, el firmware y la revisión docente. |

### Avances funcionales exploratorios comunicados hoy

- **Comunicación:** Arduino IDE cargó el programa y el Monitor Serie mostró «Conexion correcta».
- **Motores:** con solo USB no se observó giro; al utilizar la batería de 7.4 V / 500 mAh se reportó giro de los dos motores.
- **Sensores de oponente:** se reportó respuesta correcta de los tres JS40F.
- **Sensores de línea:** se reportó respuesta correcta de los dos QTR-1A.
- **Estructura:** se completó el montaje físico de un prototipo con base metálica, dos ruedas motrices, placa de control, batería, cables y sensores visibles en las cinco fotografías. No se registraron peso, dimensiones, pruebas de rigidez ni revisión de sujeciones.
- **Integración total:** no se ha demostrado funcionamiento autónomo, reconocimiento del borde durante desplazamiento ni ataque a un oponente. Las pruebas reportadas fueron de subsistemas.

Los resultados anteriores son **observaciones cualitativas reportadas**, no ensayos repetidos ni valores crudos almacenados. Ahora hay **cinco fotografías del chasis ensamblado** aportadas en esta conversación; sus fotografías JPG están disponibles en la [galería del Día 3](../../evidencias/dia-03/README.md). No se aportaron videos de pruebas, lecturas crudas ni métricas cuantitativas.

## 2 · Problema, hipótesis y trazabilidad

| Campo | Registro |
|---|---|
| Fallo / oportunidad de mejora observada | Durante la prueba de los motores conectados a la tarjeta, ninguno giraba cuando se usaba únicamente el USB. |
| Dónde se presenta y cuántas veces | En una prueba inicial reportada el 28-10-2026. **Número de repeticiones no registrado**; no se puede afirmar una tasa de fallo. |
| Diagnóstico: causas alternativas | Posible falta de energía para la etapa de potencia de los motores, diferencia en la ruta de alimentación, condición de habilitación del controlador o conexión. No se midieron tensión ni corriente para discriminar entre las alternativas. |
| Hipótesis contrastable | **Si alimentamos el sistema mediante la entrada y la fuente aprobadas para la etapa de motores, manteniendo el comando y el montaje de prueba, esperamos observar respuesta de giro y paro controlado porque la alimentación necesaria estará disponible.** La explicación sobre suficiencia eléctrica debe verificarse, no darse por probada. |
| Variable independiente | Configuración de alimentación para el ensayo (solo USB frente a alimentación adecuada según diseño del controlador). No volver a energizar entradas de tensión incierta; confirmar esquema y seguridad con el profesor. |
| Métrica de resultado y criterio de mejora | Por cada orden a cada motor: respuesta correcta/incorrecta (conteo y porcentaje sobre ensayos válidos), sentido observado y parada. Mejora: mayor proporción de órdenes cumplidas sin fallos, con el mismo protocolo. |
| Variables a mantener iguales | Placa, motores, conexión de control, comandos, firmware, tiempo de orden y soporte seguro con ruedas levantadas. Registrar voltaje real y condiciones antes de cada corrida. Estas condiciones **todavía no fueron verificadas ni registradas**. |
| Ensayos requeridos y muestreo | **Plan:** cinco pruebas comparables por condición, tras revisión eléctrica; una orden de giro y paro por motor en cada repetición, con resultados separados por motor. Acordar con el profesor si la comparación USB/batería puede ejecutarse en condiciones seguras y si es una línea base válida. |
| Riesgo de sesgo/confusión | USB y batería pueden alimentar rutas distintas; no se comprobó que la única diferencia entre pruebas fuera la fuente. Un chasis nuevo también alteraría las condiciones. Registrar conexiones, tensión, firmware y sujeción; no comparar pruebas antes/después del chasis como si fueran idénticas. |
| Parada de seguridad / aborto | Detener, apagar y revisar ante calentamiento, olor, cortocircuito, cable suelto, pérdida de control o movimiento inesperado. No modificar conexiones energizadas. Elevar las ruedas para las pruebas iniciales; usar la alimentación aprobada por el profesor. |

**Pines de referencia del documento de la tarjeta Azimov Team utilizado para las pruebas:** QTR izquierdo A2, derecho A3; JS40F izquierdo D2, central A5, derecho A4; motor izquierdo D5/D6 y derecho D10/D11. Esta correspondencia proviene de la tabla de conexiones del documento proporcionado al equipo, no de mediciones eléctricas registradas en E3.

## 3 · Colaboración y cambio técnico Kaizen 1

**Cambio observado:** se pasó de ejecutar la prueba de motores con únicamente el cable USB a utilizar la batería nominal de 7.4 V. Los motores giraron después del cambio. **No se puede atribuir la ejecución física a una persona concreta del equipo sin confirmación individual.**

| Alias y alcance | Kata asociado | Qué cambió / qué corresponde documentar | Por qué | Código/CAD/commit y revisión | Validación de interfaz |
|---|---|---|---|---|---|
| Equipo (autoría del cambio por confirmar) | Diagnóstico de motorización MS03 | Cambio de la configuración de alimentación durante la prueba; funcionamiento reportado de ambos motores. | Investigar la falta de giro con alimentación solo USB. | Aún no hay firmware de prueba ni commit técnico identificados; revisión con el profesor pendiente. | Respuesta de los motores observada, sin registro cuantitativo ni verificación eléctrica del regulador. |
| `A00574713` (Joel), MS01/MS06 | Estructura mecánica y ensayos de sensores | Se reportó funcionamiento de los cinco sensores. Las nuevas fotografías muestran el chasis ya ensamblado por el equipo; quién fabricó o fijó cada parte está por confirmar. Rangos cuantitativos pendientes. | Verificar entradas antes de la programación autónoma. | [E3 de Joel](../../participantes/A00574713/dias/E3.md); sin archivo de mediciones personales. | Respuesta cualitativa reportada; sin distancias, ángulos ni tasa de aciertos. |
| `saragdr` (Sara), MS03/MS06 | Montaje/motorización y detección | Participación específica en las pruebas de hoy **pendiente de confirmar**. Su aportación en cableado y soldadura corresponde al E2. | Coordinar el seguimiento de motorización y sensores. | [E3 personal](../../participantes/saragdr/dias/E3.md), por completar. | Pendiente de evidencia individual. |
| `MaxAmCam` (Max), MS01/MS03 | Chasis y motores | El chasis ya aparece ensamblado en las fotos. La participación específica de Max en el montaje de hoy queda pendiente de confirmar. | Completar fijaciones e integración física. | [E3 personal](../../participantes/MaxAmCam/dias/E3.md), por completar. | Montaje físico mostrado, sin verificación dimensional ni ensayos repetidos. |
| `A00574802` (Claudio), MS03/MS07/MS10 | Motores, control y estrategia | Aporte concreto a las pruebas de hoy **pendiente de confirmar**; programación autónoma no validada. | Integrar las funciones conforme avance el montaje. | [E3 personal](../../participantes/A00574802/dias/E3.md), por completar. | Sin prueba autónoma registrada. |

**Identificadores descriptivos de condiciones (NO versiones de firmware ni commits):**
- **OBS-D3-USB:** ensayo informal, cable USB sin batería; motores sin giro observado.
- **OBS-D3-BAT:** ensayo informal, batería de 7.4 V; motores con giro reportado.

**Identificador de versión K1 formal:** pendiente de asignar al guardar el firmware/configuración y la evidencia comparable. **Otras modificaciones o perturbaciones:** no documentadas; podrían haber existido diferencias en el estado de alimentación/control. No se atribuye causalidad exclusiva a la corriente disponible.

## 4 · Ensayos comparables

**Enlace a datos crudos CSV:** [`../../datos/ensayos.csv`](../../datos/ensayos.csv) · **Protocolo de referencia:** [`../../pruebas/protocolo.md`](../../pruebas/protocolo.md).

**Observación previa, fuera de la tabla de cinco ensayos:** USB → sin giro; batería 7.4 V → motores giran. No existe número de corridas, unidad cuantitativa, medición de voltaje, registro de condiciones ni comprobación de equivalencia para considerarla una prueba emparejada formal.

| Prueba emparejada o bloque | Condición/escenario idéntico | V1, valor + unidad | K1, valor + unidad | Cambio / resultado | Incidencia o desviación |
|---:|---|---|---|---|---|
| 1 | Por definir y aprobar | No medido | No medido | Pendiente | No ejecutada |
| 2 | Por definir y aprobar | No medido | No medido | Pendiente | No ejecutada |
| 3 | Por definir y aprobar | No medido | No medido | Pendiente | No ejecutada |
| 4 | Por definir y aprobar | No medido | No medido | Pendiente | No ejecutada |
| 5 | Por definir y aprobar | No medido | No medido | Pendiente | No ejecutada |

**N válido V1 / K1:** 0 / 0 ensayos formales comparables. **Resumen, variabilidad y tasa de éxito:** no calculables (no equivale a 0 %). **Incertidumbres/limitaciones:** no hay medidas crudas ni video de las pruebas; no se midieron voltajes y falta controlar condiciones. El montaje físico quedó armado, pero no se registraron dimensiones, peso ni prueba repetida sobre el chasis final.

## 5 · Interpretación y decisión

- **¿La evidencia respalda, contradice o no permite decidir la hipótesis?** La observación es compatible con que la configuración de alimentación influyó en el giro de los motores; no permite concluir cuál fue la causa eléctrica exacta ni cuantificar la mejora.
- **Si no hubo mejora, qué aprendimos:** No aplica aún como comparación formal. La lección preliminar es que comunicación por USB y funcionamiento de la etapa motriz son verificaciones distintas.
- **¿Qué riesgo o compromiso generó el cambio?** Debe confirmarse con el docente la ruta de alimentación, la compatibilidad del regulador y el voltaje real. La batería está identificada por su etiqueta, pero la tensión no se midió.
- **Decisión:** mantener la configuración que funcionó **solo para ensayos autorizados y verificados eléctricamente**; registrar un firmware reproducible y efectuar pruebas controladas antes de calificar el Kaizen.
- **Siguiente pregunta para Kaizen 2:** una vez instalado el chasis, ¿el robot puede detectar el borde y ejecutar una maniobra de retroceso/giro de forma repetible sin perder la detección de oponente?

### Montaje del chasis realizado el 28 de octubre

El equipo compartió cinco fotografías del robot físicamente ensamblado. Se observa la base metálica, dos ruedas motrices, tarjeta controladora morada, batería azul, cableado agrupado y sensores montados en el robot. La integración física avanzó respecto al Día 2, cuando las piezas estaban separadas.

- **Estado mecánico observado:** existe un prototipo montado; no se ha documentado la medida máxima, el peso, las fijaciones ni el aislamiento entre tarjeta y metal.
- **Estado eléctrico reportado:** los motores y sensores respondieron en las pruebas exploratorias de hoy. No hay captura de lecturas o ensayo registrado que demuestre una respuesta del sistema completo después del montaje.
- **Precaución pendiente:** revisar conexiones con alimentación desconectada, fijación de los cables, batería, aislantes y separaciones antes de operar en el dōjō.
- **Evidencia:** [galería del Día 3](../../evidencias/dia-03/README.md). Los cinco archivos JPG ya se encuentran en GitHub.

**Identificador descriptivo del prototipo:** `D3-MONTAJE-28OCT` (no es una etiqueta de firmware ni un commit de CAD). El siguiente paso es etiquetar y guardar el firmware realmente probado y repetir cinco ensayos controlados con el robot armado.

### Registro visual adicional

Las cinco imágenes tomadas el 28 de octubre están inventariadas por nombre en [`evidencias/dia-03/`](../../evidencias/dia-03/README.md). Ya se encuentran en esa carpeta como JPG y se muestran en la galería. No se identifican medidas ni pruebas cuantitativas a partir de fotografías.

## 6 · Puerta de salida E3

- [ ] V1 y K1 tienen identificadores o referencias inequívocas de versiones técnicas. **Solo hay etiquetas descriptivas de dos condiciones observadas.**
- [x] Existe hipótesis conectada a un fallo real y a una métrica propuesta. **Falta ejecutar la medición formal.**
- [ ] Se documentó una modificación técnica con responsable individual verificado y registro reproducible. **Cambio de alimentación observado; autoría/versión pendiente.**
- [ ] Ensayos V1 y K1 comparables con datos registrados. **0/5 por condición.**
- [x] Se declaró honestamente el resultado cualitativo y sus límites.
- [ ] Cada estudiante completó y validó su [E3 personales](../../participantes/README.md). **Joel tiene un borrador actualizado; los demás deben revisar su propia aportación.**
- [x] Chasis físico montado y mostrado en cinco fotografías (imágenes enlazadas en GitHub). **No hay validación dimensional ni autorización docente documentada.**

**Gate E3:** **CONDICIONADO (propuesta documental: montaje y pruebas exploratorias reportados, pero sin mediciones comparables ni revisión docente).** **Revisor:** profesor Camilo René Duque, pendiente. Las fotografías del montaje están incorporadas. La evaluación docente y el registro de ensayos comparables continúan como próximos pasos.
