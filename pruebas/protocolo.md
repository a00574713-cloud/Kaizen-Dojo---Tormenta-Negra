# Protocolo de pruebas del equipo — Tormenta Negra

**Misión:** M01 · Mini-sumo autónomo.  
**Fecha de preparación:** 2026-10-27 (Día 2, E2).  
**Estado:** protocolo preparado en E2, actualizado con pruebas funcionales de E3 y con los **7 registros de E4** (6 ejecuciones de evasión y 1 prueba de ataque), incorporados posteriormente desde logs y observaciones del equipo.  
**Alcances y versión:** MS03 (motorización), MS06 (sensores). **Montaje físico parcial del Día 2; V1 funcional todavía no validada.**  
**Referencia:** [E2 del equipo](../docs/entregables/dia-02.md).

## Condición de inicio

Antes de energizar o ensayar, terminar y revisar las fijaciones del chasis; identificar el modelo de la placa, los motores, sensores, driver si existe, alimentación, conectores y pines. Verificar voltajes y polaridad de alimentación siguiendo la ficha técnica. Obtener autorización del responsable del laboratorio para las pruebas. No modificar conexiones con la alimentación puesta.

## Prueba A · Respuesta de motores (propuesta)

- **Pregunta:** ¿Responde cada motor al comando previsto, en el sentido correcto, y se detiene cuando se ordena?
- **Métrica primaria:** respuesta correcta o incorrecta por comando (conteo, n). Registrar además el comando y sentido observado, sin inferir resultados.
- **Éxito:** el motor responde en la dirección prevista y se detiene; **fallo:** no responde, gira en sentido contrario o no se detiene. Confirmar criterios exactos antes de comenzar.
- **Condiciones controladas pendientes de concretar:** batería y voltaje, modelo del controlador/driver, firmware y pines, motores, superficie, fijación del robot e iluminación si influye.
- **Procedimiento propuesto, no ejecutado:** con el robot apagado, inspeccionar cableado y conexiones; asegurar el montaje y elevar las ruedas de la superficie; energizar con autorización; emitir breves órdenes de giro y paro a un motor a la vez; anotar comando y respuesta; desconectar antes de corregir conexiones.
- **Responsables previstos:** Claudio y Sara, con apoyo de Max.
- **Ensayos realizados hasta E2:** 0.

## Prueba B · Detección del oponente (propuesta)

- **Pregunta:** ¿Identifican los sensores un objeto de referencia en posiciones conocidas?
- **Métrica primaria propuesta:** aciertos de detección por cinco intentos (n/5 y porcentaje de acierto, %); medidas complementarias: distancia (cm) y ángulo (°).
- **Éxito:** lectura detectada del objeto en la posición fijada; **fallo:** ausencia de detección donde debería reconocerlo. Registrar lecturas crudas y criterios/umbral antes de probar.
- **Condiciones controladas pendientes de concretar:** modelo/posición de sensores, firmware y pinout, iluminación, batería, objeto, distancia y ángulo, superficie.
- **Procedimiento propuesto, no ejecutado:** identificar sensores y verificar conectores; fijar una posición de referencia y documentarla; colocar el objeto a distancias/ángulos conocidos; observar la lectura del controlador y registrar por separado cinco intentos, incluidos fallos; guardar evidencia de la configuración.
- **Responsables previstos:** Joel y Sara.
- **Ensayos planeados / realizados al cierre de E2:** **5 / 0**. La sesión se dedicó a conexiones físicas y el montaje aún no estaba listo.

## Seguridad y criterio de aborto

No probar hasta que el docente o responsable autorice el espacio y estén identificadas las características eléctricas. Detener la maniobra y desconectar de manera segura si aparece calentamiento, olor, movimiento inesperado, componente suelto o riesgo de cortocircuito. Para pruebas iniciales de motor, mantener las ruedas levantadas y la zona despejada.

## Registro y línea base

Datos crudos: [`datos/ensayos.csv`](../datos/ensayos.csv). **En D2 no hubo ensayos funcionales**; posteriormente se incorporaron **siete registros de E4** (seis de evasión y uno de ataque). Las **cinco ejecuciones E5** están documentadas en un [CSV independiente](../datos/e5_ensayos_30oct.csv).  
**Línea base E2:** n = 0 corridas ejecutadas. Sin valores, sin tasa de éxito calculable y sin ensayos descartados. No registrar una tasa de éxito del 0 %: no se midió.

## Dos ciclos Kaizen

### Ciclo 1 · Día 3
- Situación inicial: motores sin giro por falta de conexión de batería y uno con sentido de giro invertido.
- Hipótesis: conectar correctamente la batería y revisar la polaridad permitirá que respondan en el sentido esperado.
- Cambios: conexión de batería y corrección de polaridad.
- Pruebas: aproximadamente diez intentos de motores y cinco de sensores, según el equipo.
- Resultado: después de las correcciones, todas las pruebas posteriores salieron bien y ambos motores respondieron en el sentido esperado.
- Próximo paso: registrar las corridas por separado para obtener una comparación cuantitativa.

### Ciclo 2 · Día 4
- Nueva línea base: primer programa integrado de evasión PWM 145; se observaron salidas ocasionales.
- Hipótesis: disminuir avance permitiría reaccionar al blanco con más tiempo y permanecer dentro del dohyō.
- Cambio: **Joel propuso PWM de avance 145 → 105**; los QTR también se recalibraron, de modo que **no se aisló una sola variable**.
- Resultados: 3 ejecuciones de 15 s a PWM 145 (12 avisos cada una; salidas sin desglose por intento) y 3 a PWM 105 (11, 13 y 11 avisos; **cero salidas observadas**). Un intento adicional de búsqueda y ataque expulsó un teléfono sin que el robot saliera.
- Conclusión: K2 mostró una mejora funcional observada, pero no se puede calcular una tasa de mejora exacta ni extender el resultado a combates con robots. [Datos K2](../datos/e4_pruebas_pwm105_29oct.md) y [CSV consolidado](../datos/ensayos.csv).

No inventar resultados ni borrar corridas desfavorables.

## Actualización del 28-10-2026 (E3)

**Sensores:** el equipo probó los dos QTR-1A sobre una superficie negra con bordes blancos y observó respuesta al cambio de color. Los tres JS40F se probaron acercando y retirando objetos; sus lecturas cambiaron entre `0` y `1`. Se reportaron aproximadamente cinco pruebas de sensores en conjunto.

**Motores:** al inicio no giraban porque la batería no estaba conectada al módulo. Después de conectarla, uno giraba en sentido contrario por la polaridad invertida. El equipo corrigió la conexión y efectuó aproximadamente diez pruebas de motorización, tras las cuales ambos giraron correctamente en el robot ensamblado.

**Kaizen 1:** revisar y conectar la alimentación; corregir la polaridad; repetir las pruebas para confirmar giro correcto. El equipo indicó que todas las pruebas realizadas después de corregir los motores salieron bien. Joel y Sara realizaron las pruebas; Sara volvió a soldar conexiones flojas y fijó los motores al chasis, con apoyo de Max y Claudio en la preparación de cables y soldaduras.

**Evidencia disponible:** programas originales de Arduino y fotografías del montaje; no se grabó video de las pruebas.

**Registro de las observaciones:** [datos/observaciones-dia-03.md](../datos/observaciones-dia-03.md) y [E3 del equipo](../docs/entregables/dia-03.md). Las cantidades son estimaciones del equipo, no una serie de ensayos individuales documentados.

### Próxima prueba reproducible

- Probar cada motor con el mismo comando, batería y montaje, registrando por intento si responde, su sentido y su parada.
- Para los QTR, fijar las posiciones sobre negro y blanco y anotar lecturas por separado.
- Para los JS40F, fijar posiciones del objeto y registrar la lectura y el estado observado de detección.
- Repetir cada condición siguiendo el acuerdo del profesor y guardar los resultados individuales en [ensayos.csv](../datos/ensayos.csv).
- Revisar fijaciones, conexiones, batería y aislamiento de la tarjeta antes de energizar el chasis.

**Kaizen 2:** probar la respuesta automática del robot al borde del dohyō usando los sensores y motores juntos.

## Ejecuciones del 29-10-2026 (E4)

El equipo ejecutó tres veces el programa de movimiento y detección del borde en el dohyō; las tres terminaron por su temporizador de 15 segundos. El Monitor Serie registra múltiples avisos de borde y la calibración QTR usada. [Resultados y diagnóstico](../datos/observaciones-dia-04.md) · [log completo](../datos/e4_monitor_serie_29oct.txt).

**Resultado observado en E4:** el equipo confirmó que el robot sí avanzaba y respondía al blanco retrocediendo y girando. Las manchas blancas dentro del área negra provocaron algunos giros inesperados y en ciertas ocasiones el robot salió del dohyō; la velocidad es una causa posible, todavía sin verificar. Fuera de estas situaciones no reportaron otros fallos.

**Actualización posterior del 29-10-2026:** el equipo volvió a calibrar los QTR y ensayó tres veces con PWM 105. La diferencia negro/blanco izquierda pasó de 66 a 718 unidades ADC; **ninguna de las tres ejecuciones nuevas presentó salidas observadas**. Después, con una tarjeta de reemplazo y código de ataque, el robot detectó y expulsó un teléfono en el primer intento sin salirse. Ver [resultados completos](../datos/e4_pruebas_pwm105_29oct.md), [CSV de siete registros](../datos/ensayos.csv) y [sketch](../codigo/mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino).

**Siguiente comparación de robustez:** conservar idénticas pista, batería y calibración para aislar el efecto de la velocidad, registrar giros innecesarios por intento y probar con un oponente robótico, bajo condiciones seguras y un medio físico de apagado.

## Actualización del 30-10-2026 (E5)

Se registraron **cinco intentos contra el mini-sumo del equipo de Marian**: **tres pruebas previas con E5 V1** (13 s, rival expulsado; 5 s, rival salió al ser esquivado; 5 s, Tormenta Negra salió tras una detección lateral deficiente) y **dos peleas de salón con E5 V2** (victoria de 10 s por contragolpe lateral y derrota de 5 s tras un giro desfavorable). Los cinco videos y sus resultados están en [evidencias del Día 5](../evidencias/dia-05/README.md), y las observaciones por intento en [CSV E5](../datos/e5_ensayos_30oct.csv).

**Condiciones que limitan la comparación:** las tres pruebas y las dos peleas no son cinco repeticiones equivalentes, porque se utilizó E5 V1 para las pruebas y E5 V2 para las peleas. No se documentó un cronometraje técnico cuadro a cuadro ni ensayos controlados de fuerza de empuje. El equipo confirmó que no hizo cambios físicos adicionales entre las tandas; sí cambió el firmware. **El control MicroStart quedó con el botón 1 para START, 2 para STOP y 3 sin respuesta**. El botón 2 detenía los motores, pero no hubo protocolo formal de emergencia; esto debe corregirse antes de RoboLympics del 21 de noviembre de 2026. El profesor Camilo revisará los E1–E5 cuando se entregue el repositorio, sin calificación anticipada.
