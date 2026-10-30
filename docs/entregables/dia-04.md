---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E4"
dia: 4
responsable_registro: "equipo"
estado: "EN_PROCESO"
fecha: "2026-10-29"
revision_docente: "PENDIENTE"
---

# E4 · Día 4 — ITERAR | Mejoras al montaje y preparación de prueba integrada

El 29 de octubre continuamos con el mini-sumo **Tormenta Negra**. Hicimos una carcasa para cubrir y proteger los cables, acomodamos los componentes y dejamos el robot armado y ordenado. También conectamos el receptor destinado al control remoto (todavía sin utilizar en el programa) y fijamos mejor los motores al chasis. Probamos la evasión del borde con PWM 145 y 105; más tarde, tras sustituir una tarjeta que se dañó, Joel cargó un programa de búsqueda y ataque en la nueva tarjeta. El robot logró sacar un teléfono del dohyō sin abandonar la zona negra. Fue una prueba con un objeto, no un combate oficial.

## 0 · Contexto

**Equipo y misión:** Tormenta Negra · M01, mini-sumo autónomo.  
**Lugar:** Laboratorio de Electrónica, CTA, Campus León.  
**Avance anterior:** en el [E3](dia-03.md) comprobamos los cinco sensores y los dos motores por separado y corregimos la conexión de alimentación y la polaridad de un motor.

## 1 · Ruta del Día 4 (180 minutos)

La guía propone seis bloques de trabajo. **Los minutos indican la distribución planeada por la actividad, no tiempos cronometrados por el equipo**; registramos únicamente lo que podemos confirmar de la sesión.

| Bloque de la guía | Minutos previstos | Registro del equipo |
|---|---:|---|
| Revisión por pares y retroalimentación | 0–20 | **Pendiente de documentar:** quién revisó el robot y qué recomendación dio. |
| Diseño y ejecución del Kaizen 2 | 20–70 | Organizamos los cables, construimos la carcasa, aseguramos los motores y conectamos el receptor infrarrojo a D12. Integramos el programa para avanzar y reaccionar al borde blanco. |
| Comparación V1–K1–K2 | 70–115 | Documentamos las etapas V1 (montaje), K1 (componentes funcionales) y K2 (evasión). En K2 se realizaron tres pruebas con PWM 145 y tres con PWM 105; falta comparación estricta con las etapas V1 y K1, que no midieron lo mismo. |
| Ensayo de robustez | 115–145 | Realizamos seis ejecuciones de 15 s: tres con PWM 145 (salidas ocasionales) y tres con PWM 105 (**ninguna salida observada**, según el equipo). Después se probó la búsqueda y ataque contra un teléfono, que salió de la pista mientras el robot se mantuvo dentro. |
| Preparación de la demostración | 145–165 | Definimos qué se podría mostrar en el Día 5: montaje del robot y evasión del borde. **Falta repartir las intervenciones y acordar un plan por si falla.** |
| Gate de preparación | 165–180 | Se registraron la mejora a PWM 105 y una prueba de ataque con teléfono. Quedan pendientes: revisión entre pares, evidencia fotográfica de E4, peso, control remoto si lo exige el reglamento, ensayos con otro robot, asignación de exposición y revisión docente. |

## 1A · Actividades realizadas en el Día 4

| Actividad | Avance realizado |
|---|---|
| Carcasa y estructura | Fabricamos una carcasa para cubrir cables y componentes del robot. |
| Organización de componentes | Acomodamos el cableado y terminamos de ordenar el montaje. |
| Fijación de motores | Aseguramos mejor ambos motores al chasis. |
| Control remoto | Conectamos al **pin D12** de la tarjeta el receptor infrarrojo destinado al arranque y paro mediante control remoto. Por ahora, el código de movimiento no utiliza este receptor. |
| Integración del control | Ejecutamos el [programa original de evasión](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) y la [versión PWM 105](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino): **tres pruebas de 15 s con cada versión**. Posteriormente Joel cargó un programa de competencia sin control remoto en una tarjeta de reemplazo, que ya logró empujar un teléfono fuera de la pista sin salirse. Ese último archivo está pendiente de incorporar al repositorio. |

## 1B · Revisión por pares y retroalimentación

La guía solicita registrar quién revisó el trabajo del equipo y qué recomendó. **Todavía no tenemos confirmado que haya ocurrido una revisión por pares**; dejamos sus campos pendientes para no inventar observaciones.

| Persona o equipo observador (alias) | Evidencia revisada | Observación útil o pregunta | Respuesta técnica y decisión | Cambio aceptado o descartado |
|---|---|---|---|---|
| Pendiente de confirmar | Pendiente | Pendiente | Pendiente | Pendiente |

**Acuerdo de colaboración:** pendiente de registrar cómo escuchamos las observaciones y cómo repartimos las oportunidades para explicar las decisiones.

## 2 · Segundo Kaizen: una mejora para proteger el robot en el dohyō

El siguiente objetivo es que el robot pueda desplazarse sobre la superficie negra y que, al llegar a un borde blanco, retroceda y gire para permanecer dentro del área de combate.

| Campo | Registro |
|---|---|
| Situación inicial | En E3 funcionaban los sensores y motores por separado. |
| Mejoras físicas de E4 | Carcasa para los cables, organización del montaje, fijación de motores y conexión del receptor del control remoto. |
| Hipótesis de control | Si el programa vigila los dos QTR mientras el robot avanza, al detectar el borde blanco podrá retroceder y girar hacia el interior. |
| Cambio de programa propuesto | Leer A2 y A3, calibrar negro y blanco, y dar prioridad a la maniobra de evasión antes de continuar avanzando. |
| Código | [Prueba integrada E4](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) · [instrucciones](../../codigo/mini-sumo/prueba_evasion_borde/README.md). |
| Cómo comprobarlo | Calibrar los QTR, comprobar el sentido de los motores con las ruedas levantadas y probar el comportamiento sobre el dohyō. |
| Resultado | Realizamos **seis pruebas de 15 s**. Con PWM 145 hubo giros inesperados y algunas salidas. Con PWM 105 **ninguna de las tres pruebas registró salidas observadas** y los QTR se recalibraron. En una prueba adicional de la versión de competencia, el robot sacó un teléfono del dohyō mientras permaneció dentro de la zona negra. No se midió duración de ese intento. |

### Ficha de experimento K2 solicitada por la guía

| Campo requerido | Registro |
|---|---|
| Limitación de K1 | En E3 comprobamos sensores y motores por separado; todavía faltaba probarlos integrados y evitar el borde. |
| Hipótesis K2 y fundamento | Si los QTR detectan blanco mientras el robot avanza, podrá retroceder y girar para regresar a la superficie negra. |
| Variable modificada | Integramos QTR y motores; después redujimos `V_AVANCE` de 145 a **105** y realizamos otras tres pruebas. También se recalibraron ambos QTR, por lo que no se aisló exclusivamente el efecto de la velocidad. |
| Condiciones y controles | Primeras pruebas sobre el dohyō durante 15 s; hay manchas blancas en la zona negra. Falta igualar las condiciones de las versiones a comparar. |
| Seguridad antes del cambio | Revisar alimentación, polaridad, motores fijados, carcasa, aislamiento de la tarjeta y acceso al paro. |
| Personas responsables y alcances | Participación específica de cada integrante en E4: **pendiente de confirmar**. Alcances involucrados: sensores, motores e integración. |
| Código y versión K2 | [Prueba integrada ejecutada](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) y [segunda versión preparada](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino). Las versiones se conservan por separado en GitHub. |
| Referencia de cambio | Archivos anteriores disponibles en el repositorio; asociación de una versión validada a un identificador específico de revisión: pendiente. |
| Métrica y criterio de éxito | Permanencia en la pista por prueba (sí/no), avisos impresos por el programa y detección del borde. En la tanda PWM 105 hubo **0 salidas observadas en 3 pruebas**; en la tanda PWM 145 hubo algunas salidas sin desglose exacto. La prueba adicional de ataque consiguió expulsar un teléfono sin salida del robot; los giros innecesarios siguen sin contarse individualmente. |

## 3 · Comparación de versiones

| Etapa | Estado observable |
|---|---|
| Día 2: primera integración | Cables y conexiones físicas preparados. |
| Día 3: primera mejora Kaizen | Motores y sensores probados; batería conectada y polaridad corregida. |
| Día 4: segundo Kaizen en prueba | Carcasa, montaje y motores asegurados; receptor D12 conectado pero no programado. **Seis pruebas de evasión**: tres a PWM 145 y tres a PWM 105, estas últimas sin salidas observadas. Luego, con tarjeta de reemplazo y código de búsqueda/ataque, una prueba con teléfono resultó exitosa. |

### Tabla de ensayos comparables que pide la guía

El formato original solicita **cinco ensayos bajo condiciones equivalentes**, comparando V1, K1 y K2. V1 solo tenía el montaje; K1 comprobó motores y sensores por separado, mientras que K2 ya cuenta con **seis ejecuciones integradas**, tres a PWM 145 y tres a PWM 105. Se conserva la tabla exigida, pero **no existen mediciones equivalentes de V1 y K1**. Las dos tandas K2 también difieren en calibración, por lo que su comparación no aísla únicamente la velocidad.

| Ensayo / misma condición | V1 (valor + unidad) | K1 (valor + unidad) | K2 (valor + unidad) | Incidencias / validez |
|---|---|---|---|---|
| 1 | Sin prueba equivalente | Sin prueba equivalente | Primera corrida de 15 s, PWM de avance 145; salidas sin contar | No comparable entre versiones |
| 2 | Sin prueba equivalente | Sin prueba equivalente | Segunda corrida de 15 s, PWM de avance 145; salidas sin contar | No comparable entre versiones |
| 3 | Sin prueba equivalente | Sin prueba equivalente | Tercera corrida de 15 s, PWM de avance 145; salidas sin contar | No comparable entre versiones |
| 4 | Sin prueba equivalente | Sin prueba equivalente | Primera corrida de 15 s con PWM 105: 11 avisos, 0 salidas observadas | No comparable con V1/K1; QTR recalibrados |
| 5 | Sin prueba equivalente | Sin prueba equivalente | Segunda corrida de 15 s con PWM 105: 13 avisos, 0 salidas observadas | No comparable con V1/K1; tercera corrida adicional abajo |

**Registros fuente:** [log original PWM 145](../../datos/e4_monitor_serie_29oct.txt) · [observaciones PWM 145](../../datos/observaciones-dia-04.md) · [pruebas y comparación PWM 105](../../datos/e4_pruebas_pwm105_29oct.md) · [protocolo](../../pruebas/protocolo.md). Las mediciones de E4 se conservan por separado de las pruebas cualitativas de E3.

**Síntesis (n, media/mediana, dispersión y éxito):** n = **6 pruebas de evasión**, tres a PWM 145 y tres a PWM 105, todas programadas a 15 s. La versión 105 consiguió **3 de 3 pruebas sin salidas observadas**; la versión 145 tuvo algunas salidas sin conteo. Los avisos de borde fueron 36 y 35, respectivamente, pero no son éxitos de evasión. No corresponde una tasa comparativa de mejora entre versiones ni una media de salidas de la primera tanda.

**Qué mejora, qué empeora y qué no sabemos:** la tanda PWM 105 no presentó salidas observadas, mejoró la diferencia de lecturas negro/blanco y posteriormente la versión de competencia expulsó un teléfono. No sabemos qué parte de la mejora se debió a velocidad, calibración o condiciones de pista; tampoco se ha probado contra otro mini-sumo.

## 3A · Registro de intentos del Día 4

Esta tabla conserva el formato de **cinco filas** solicitado por la guía y contiene **cinco de las seis pruebas reales del 29 de octubre**. La sexta se registra después. Las fallas de batería y polaridad son del E3 y no se trasladan como datos numéricos a E4.

| Intento | Condición de prueba | Resultado registrado | Observaciones |
|---:|---|---|---|
| 1 | Dohyō, programa de evasión, avance PWM 145; ejecución de 15 s | Se ejecutó hasta el paro por tiempo; **12 avisos de borde** (9 izquierda, 3 derecha) | El resultado del movimiento por intento no se anotó por separado; las manchas blancas y las salidas ocasionales se reportaron para el conjunto de pruebas. |
| 2 | Mismo programa y velocidad; ejecución de 15 s | Se ejecutó hasta el paro por tiempo; **12 avisos de borde** (5 izquierda, 7 derecha) | No quedó registrado por intento si se salió del dohyō o si giró por una mancha interior. |
| 3 | Mismo programa y velocidad; ejecución de 15 s | Se ejecutó hasta el paro por tiempo; **12 avisos de borde** (6 izquierda, 6 derecha) | No quedó registrado por intento si se salió del dohyō o si giró por una mancha interior. |
| 4 | Avance PWM 105, nueva calibración QTR, 15 s | **11 avisos** (7 izquierda, 4 derecha); **sin salida** | Primera ejecución de la nueva versión, según el [registro](../../datos/e4_pruebas_pwm105_29oct.md). |
| 5 | Avance PWM 105, nueva calibración QTR, 15 s | **13 avisos** (8 izquierda, 5 derecha); **sin salida** | Segunda ejecución de la nueva versión. Tercera ejecución adicional: 11 avisos y sin salida. |

**Observación general confirmada por el equipo:** durante estas tres pruebas el robot sí avanzaba y respondía al blanco retrocediendo y girando; las manchas blancas del interior provocaban giros repentinos y en algunas ocasiones el robot llegó a salirse. **No se puede asociar un número específico de salidas o giros innecesarios a cada prueba**, ni afirmar que las tres permanecieron completamente dentro del dohyō. Los **36 avisos** son detecciones emitidas por el programa, no 36 evasiones exitosas.

**Evidencia:** [registro del Monitor Serie PWM 145](../../datos/e4_monitor_serie_29oct.txt), [análisis de la primera tanda](../../datos/observaciones-dia-04.md) y [resultados PWM 105](../../datos/e4_pruebas_pwm105_29oct.md). Las filas 4 y 5 corresponden a pruebas realmente ejecutadas.

### Detalle de las tres ejecuciones en el Monitor Serie

El equipo compartió el registro del Monitor Serie de **tres ejecuciones del programa E4**. Se utilizó la calibración: negro = 1022 (izquierdo) y 821 (derecho); blanco = 956 (izquierdo) y 34 (derecho). Los umbrales calculados fueron **989** y **427**, respectivamente.

| Prueba | Duración programada | Avisos de borde izquierdo | Avisos de borde derecho | Terminación |
|---|---:|---:|---:|---|
| 1 | 15 s | 9 | 3 | `FIN DE PRUEBA` |
| 2 | 15 s | 5 | 7 | `FIN DE PRUEBA` |
| 3 | 15 s | 6 | 6 | `FIN DE PRUEBA` |

Los avisos de borde son **eventos impresos por el programa**, no el número de veces que el robot llegó realmente al perímetro. El equipo observó que **sí retrocedía y giraba para evitar el borde**, aunque algunas **manchas blancas dentro de la zona negra** provocaron cambios de dirección repentinos. También hubo **algunas salidas del dohyō** durante el movimiento; sospechamos que la velocidad hizo que el robot no alcanzara a reaccionar a tiempo, pero todavía debemos comprobarlo. Las tres pruebas terminaron por tiempo, no significa que las tres hayan evitado por completo salir de la pista.

**Observación importante para mejorar:** el sensor izquierdo tiene poco contraste entre negro y blanco (**1022 vs. 956**, diferencia 66), mientras que el derecho muestra una separación mucho mayor (**821 vs. 34**, diferencia 787). Las manchas blancas explican parte de las detecciones repentinas; aún conviene revisar la altura y calibración de ambos QTR. Para evitar que el robot se salga, la siguiente prueba deberá hacerse a menor velocidad, observando si retrocede y gira con suficiente anticipación. **El código de las tres pruebas se conserva sin modificaciones.**

**Evidencia del Día 4:** [log completo del Monitor Serie](../../datos/e4_monitor_serie_29oct.txt) · [análisis de resultados](../../datos/observaciones-dia-04.md) · [código ejecutado](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino).

### Comparación de las seis pruebas de evasión del Día 4

| Ejecución | PWM avance | Avisos izquierda | Avisos derecha | Total de avisos | Salidas observadas |
|---:|---:|---:|---:|---:|---|
| 1 | 145 | 9 | 3 | 12 | La tanda presentó salidas; sin conteo por ejecución |
| 2 | 145 | 5 | 7 | 12 | Sin desglose por ejecución |
| 3 | 145 | 6 | 6 | 12 | Sin desglose por ejecución |
| 4 | 105 | 7 | 4 | 11 | 0 |
| 5 | 105 | 8 | 5 | 13 | 0 |
| 6 | 105 | 9 | 2 | 11 | 0 |

Las tres pruebas de **PWM 105 terminaron por tiempo y no presentaron salidas del dohyō**, según la observación del equipo. El robot siguió reaccionando ante blanco. Hubo **35 avisos de borde** (24 izquierda y 11 derecha); estos mensajes no son un conteo de salidas evitadas.

| Calibración de QTR | Negro izquierdo | Blanco izquierdo | Umbral izquierdo | Negro derecho | Blanco derecho | Umbral derecho |
|---|---:|---:|---:|---:|---:|---:|
| Primera tanda, PWM 145 | 1022 | 956 | 989 | 821 | 34 | 427 |
| Segunda tanda, PWM 105 | 749 | 31 | 390 | 873 | 39 | 456 |

### Prueba adicional de ataque con teléfono

Después de cargar el programa de competencia sin control remoto en **una tarjeta de reemplazo**, Joel realizó una prueba con un teléfono dentro del dohyō. **Resultado observado:** Tormenta Negra empujó el teléfono fuera y permaneció dentro de la superficie negra. No se informó el tiempo, número de intentos ni video de esta prueba. **No se considera combate oficial**, pues el objeto no era otro robot; sirve como comprobación inicial del comportamiento de búsqueda y ataque. El archivo exacto de ese programa está pendiente de incorporarse al repositorio.

La tarjeta anterior **se dañó** y fue reemplazada. No hay diagnóstico confirmado de la causa de la avería. Antes de alimentar de nuevo una placa, verificar polaridad, voltaje y compatibilidad entre USB y batería; no conectar ambas fuentes simultáneamente sin confirmar que el diseño lo permite.

## 4 · Robustez y seguridad

**Variación observada en las pruebas:** había manchas blancas en la superficie negra del dohyō; el robot las interpretaba como blanco y giraba aunque todavía no estuviera junto al borde. Además, **en algunas ocasiones se salió de la pista**, posiblemente por la velocidad. Esto nos sirve como prueba de robustez para el Kaizen 2: la detección y la maniobra funcionan, pero todavía deben mejorarse para evitar giros innecesarios y salidas.

### Registro del ensayo de robustez o variación de condiciones

| Condición o cambio del entorno | Riesgo y límite seguro | Predicción | Resultado observado / medición | ¿Se mantiene el objetivo? | Evidencia |
|---|---|---|---|---|---|
| Manchas blancas dentro de la superficie negra (condición observada, no introducida de forma controlada) | Giros innecesarios y posible salida del borde; supervisión y paro accesible | El robot puede confundir manchas con el borde | Ocurrieron giros repentinos y algunas salidas; sin conteo por cada intento | Parcialmente: sí reaccionó al blanco, pero no siempre permaneció dentro | [Observaciones E4](../../datos/observaciones-dia-04.md) |
| Superficie sin manchas y avance PWM 105 (prueba propuesta) | Comprobar fuerza de movimiento y permanecer cerca para intervenir | Menos salidas si la velocidad era una causa importante | Pendiente de ejecutar | Pendiente | [Código preparado](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino) |

**Límites de inferencia:** tenemos tres ejecuciones del programa original, pero las manchas no se introdujeron como una perturbación controlada y no se registraron salidas ni giros innecesarios por intento. La nueva versión todavía no tiene resultados; para aislar la velocidad habrá que mantener la misma pista, batería y condiciones de ensayo.

**Próxima mejora propuesta:** revisar o limpiar la superficie de prueba, repetir la calibración de los QTR y probar primero con una velocidad de avance más baja, manteniendo los demás ajustes iguales. Registrar salidas y giros innecesarios en cada intento. Si siguen ocurriendo salidas, revisar la posición de los QTR y los tiempos de retroceso y giro.

**Versión preparada para comparar:** [prueba_evasion_borde_lenta.ino](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino), con velocidad de avance PWM **105** (antes 145). Se conserva [la versión original de las tres pruebas](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), sin modificarla. Esta nueva versión aún no tiene resultados de prueba.

Antes de probar el robot en movimiento, revisar que la carcasa no toque ni provoque cortocircuitos en la placa, que los motores estén bien sujetos y que la batería esté segura. Hacer primero la prueba con ruedas levantadas y mantener despejado el dohyō. El programa de prueba tiene parada automática a los 15 segundos.

**Dimensiones reportadas:** 10 × 10 cm.  
**Peso:** por medir; el reglamento limita el conjunto a 500 g.  
**Arranque y paro remoto:** receptor conectado; falta confirmar su funcionamiento y su integración al programa.

## 5 · Preparación de la demostración

La demostración prevista consistirá en enseñar el robot montado, explicar los sensores y motores, y hacer que se desplace sobre el área negra evitando el borde blanco. Una vez comprobado eso, se integrará el arranque y paro remoto y el comportamiento de búsqueda del rival.

### Ensayo general de demostración (20–60 segundos por segmento)

| Segmento | Qué se demostrará | Integrante responsable | Versión o código | Material requerido | Plan B ante fallo |
|---|---|---|---|---|---|
| Inicio / contexto | Mostrar el robot armado, la carcasa y el objetivo de evitar el borde | Pendiente de asignar | Prototipo E4 | Robot ensamblado | Mostrar fotos y explicar el montaje |
| Prueba principal | Avanzar sobre negro y reaccionar al borde blanco | Pendiente de asignar | [Prueba integrada E4](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino); cambio a 105 por validar | Dohyō, batería, computadora y cable de prueba | Mostrar registros del Monitor Serie si no es seguro probar en movimiento |
| Evidencia de mejora | Explicar la evolución V1–K1–K2 y los resultados de las tres pruebas | Pendiente de asignar | [Resultados E4](../../datos/observaciones-dia-04.md) | Tabla y registro de pruebas | Explicar limitaciones sin inventar un porcentaje de mejora |
| Defensa de fronteras | Cada integrante explica su aportación y aprendizaje | Pendiente de confirmar aportaciones E4 | Documentos individuales | Bitácoras E4 personales | Explicar qué falta validar |

**¿RoboLympics es un evento externo posterior?** Por confirmar. No se registra ninguna participación en una competencia externa como realizada. La demostración prevista para D5 es interna.

**Responsables, tiempos y ensayo general:** propuesta de guion documentada; quedan pendientes la asignación y la ejecución real.

**Evidencias disponibles:** [fotografías del E3](../../evidencias/dia-03/README.md), [código de prueba E4](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), [registro de las tres pruebas](../../datos/e4_monitor_serie_29oct.txt) y [resumen de resultados](../../datos/observaciones-dia-04.md). Las fotografías del nuevo montaje de E4 se añadirán cuando estén disponibles.

## 6 · Gate de preparación E4

Esta lista conserva los cinco criterios de cierre del entregable original:

- [x] **K2 explícito:** problema, hipótesis, modificación y datos iniciales registrados; falta validar la segunda velocidad con ensayos comparables.
- [x] **Versiones conservadas:** las conexiones iniciales, el primer Kaizen y los dos programas de evasión se documentan en el repositorio. La comparación cuantitativa V1–K1–K2 no está cerrada.
- [x] **Robustez documentada:** variación observada por manchas blancas y salidas ocasionales; faltan ensayos con condiciones controladas.
- [ ] **Demostración D5:** guion propuesto, pero faltan responsables, contingencia acordada y ensayo.
- [ ] **E4 personales:** faltan los registros individuales de los integrantes.

**Decisión de preparación:** CON RESTRICCIONES. **Pendientes y responsables:** resultados de la versión 105, revisión por pares, reparto de demostración, aportaciones individuales, peso y prueba de control remoto; responsables por asignar. **Revisor:** profesor Camilo René Duque, revisión pendiente.

## 7 · Estado de E4

- [x] Carcasa construida y cableado acomodado, según el equipo.
- [x] Motores mejor fijados al chasis.
- [x] Receptor para el control remoto conectado.
- [x] Programa de prueba conjunta cargado y ejecutado en el dohyō.
- [x] Registradas tres ejecuciones y las lecturas de los QTR e infrarrojos en el Monitor Serie.
- [x] Confirmado visualmente que el robot retrocede y gira al detectar blanco.
- [x] Identificadas las manchas blancas como causa de giros repentinos y registradas algunas salidas del dohyō.
- [ ] Ajustar y repetir las pruebas para evitar salidas y giros innecesarios.
- [ ] Verificar arranque y paro mediante el control remoto.
- [ ] Documentar pruebas de robustez y completar E4 personales.
- [ ] Pesar el robot y recibir revisión del profesor.

**Estado E4:** en proceso; montaje mejorado y tres pruebas integradas registradas, con evasión de borde funcional pero todavía mejorable por manchas blancas y salidas ocasionales.
