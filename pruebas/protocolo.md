# Protocolo de pruebas del equipo — Tormenta Negra

**Misión:** M01 · Mini-sumo autónomo.  
**Fecha de preparación:** 2026-10-27 (Día 2, E2).  
**Estado:** PROPUESTA, **sin ejecución ni resultados medidos**.  
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
- Línea base: pendiente de medir en la primera prueba autorizada y reproducible.
- Hipótesis: pendiente de plantear a partir de un problema observado durante esa prueba.
- Cambio: pendiente.
- Resultados comparables: pendiente.
- Conclusión: pendiente.

### Ciclo 2 · Día 4
- Nueva línea base: pendiente.
- Hipótesis: pendiente.
- Cambio: pendiente.
- Resultados comparables: pendiente.
- Conclusión: pendiente.

No inventar resultados ni borrar corridas desfavorables.
