# Protocolo de pruebas del equipo — Tormenta Negra

**Misión:** M01 · Mini-sumo autónomo.  
**Fecha de preparación:** 2026-10-27 (Día 2, E2).  
**Estado:** protocolo preparado en E2 y actualizado con las pruebas exploratorias de E3; el registro detallado de corridas se realizará en los siguientes ensayos.  
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

Datos crudos: [`datos/ensayos.csv`](../datos/ensayos.csv). **Permanece solo con encabezados por ausencia de pruebas en D2.**  
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
- Nueva línea base: pendiente.
- Hipótesis: pendiente.
- Cambio: pendiente.
- Resultados comparables: pendiente.
- Conclusión: pendiente.

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
