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

El 29 de octubre continuamos con el mini-sumo **Tormenta Negra**. Claudio diseñó la carcasa y **la mandó a imprimir** (su colocación definitiva todavía no está confirmada). Sara hizo ajustes para fijar la navaja al chasis, con apoyo de Max, y continuamos acomodando el montaje. El receptor del control remoto sigue conectado a D12, pero aún no se utiliza en el programa. Probamos la evasión del borde con PWM 145 y 105; más tarde, tras sustituir una tarjeta que se dañó, Joel se encargó del código y cargó el programa de búsqueda y ataque en la tarjeta nueva. **En el primer intento el robot detectó un teléfono, lo empujó fuera del dohyō y permaneció en la zona negra.** El equipo tiene dos videos de E4, todavía sin enlaces en el repositorio. Fue una prueba con un objeto, no un combate oficial.

## 0 · Contexto

**Equipo y misión:** Tormenta Negra · M01, mini-sumo autónomo.  
**Lugar:** Laboratorio de Electrónica, CTA, Campus León.  
**Avance anterior:** en el [E3](dia-03.md) comprobamos los cinco sensores y los dos motores por separado y corregimos la conexión de alimentación y la polaridad de un motor.

## 1 · Ruta del Día 4 (180 minutos)

La guía propone seis bloques de trabajo. **Los minutos indican la distribución planeada por la actividad, no tiempos cronometrados por el equipo**; registramos únicamente lo que podemos confirmar de la sesión.

| Bloque de la guía | Minutos previstos | Registro del equipo |
|---|---:|---|
| Revisión por pares y retroalimentación | 0–20 | Algunos compañeros del **equipo Artemis** vieron nuestro mini-sumo y nos dieron consejos. Se confirmó que hubo retroalimentación; **falta anotar los consejos concretos**, qué cambio aceptamos y si se aplicó. |
| Diseño y ejecución del Kaizen 2 | 20–70 | **Claudio diseñó y mandó a imprimir la carcasa**; Sara trabajó en fijar la navaja al chasis con ayuda de Max. Joel programó el movimiento y evasión, y Joel, Sara y Max realizaron pruebas. Receptor D12 conectado sin integrar al código. |
| Comparación V1–K1–K2 | 70–115 | Documentamos las etapas V1 (montaje), K1 (componentes funcionales) y K2 (evasión). En K2 se realizaron tres pruebas con PWM 145 y tres con PWM 105; falta comparación estricta con las etapas V1 y K1, que no midieron lo mismo. |
| Ensayo de robustez | 115–145 | Realizamos seis ejecuciones de 15 s: tres con PWM 145 (salidas ocasionales) y tres con PWM 105 (**ninguna salida observada**, según el equipo). Después se probó la búsqueda y ataque contra un teléfono, que salió de la pista mientras el robot se mantuvo dentro. |
| Preparación de la demostración | 145–165 | El equipo cuenta con **dos videos**: uno del robot desplazándose sobre el dohyō y otro de la expulsión del teléfono. **Falta subir los videos, asignar quién presenta cada parte y realizar el ensayo general.** |
| Gate de preparación | 165–180 | Se confirmó la revisión informal de Artemis, la mejora a PWM 105 y el primer intento de ataque exitoso. Quedan pendientes los **consejos específicos de Artemis**, enlaces a dos videos, peso (no hubo báscula), instalación final de carcasa por confirmar, código final en GitHub, roles de demostración y revisión docente. |

## 1A · Actividades realizadas en el Día 4

| Actividad | Avance realizado |
|---|---|
| Carcasa y estructura | **Claudio diseñó y mandó a imprimir la carcasa.** No se confirmó aún si quedó instalada. |
| Organización de componentes | Se continuó organizando el cableado y **Joel, Max y Claudio trasladaron las conexiones y componentes a una tarjeta de reemplazo**, después de que la anterior se dañó. No se conoce la causa exacta de la avería. |
| Fijación de motores | Se mantuvo el trabajo de fijación de motores y **Sara realizó ajustes para pegar la navaja al chasis, con ayuda de Max**. No se registró una medición de fuerza de adhesión. |
| Control remoto | Conectamos al **pin D12** de la tarjeta el receptor infrarrojo destinado al arranque y paro mediante control remoto. Por ahora, el código de movimiento no utiliza este receptor. |
| Integración del control | **Joel se encargó de todo el código**. Las pruebas de evasión las realizaron Joel, Max y Sara: tres ejecuciones a PWM 145 y tres a PWM 105 ([registro](../../datos/e4_pruebas_pwm105_29oct.md)). Joel propuso **reducir la velocidad** porque el robot se salía. Tras cambiar de tarjeta con Max y Claudio, Joel cargó el programa de ataque sin control remoto: **al primer intento detectó y sacó un teléfono del dohyō sin salir**. Falta subir ese último sketch y enlazar los videos. |

## 1B · Revisión por pares y retroalimentación

La guía solicita registrar quién revisó el trabajo del equipo y qué recomendó. **Ya se confirmó una revisión informal:** algunos compañeros del equipo **Artemis** observaron el mini-sumo y compartieron consejos. No tenemos anotado qué recomendaron exactamente ni la decisión tomada frente a cada recomendación, así que esos campos permanecen pendientes.

| Persona o equipo observador (alias) | Evidencia revisada | Observación útil o pregunta | Respuesta técnica y decisión | Cambio aceptado o descartado |
|---|---|---|---|---|
| Compañeros del equipo **Artemis** (nombres/alias pendientes) | Vieron el mini-sumo físico y su funcionamiento; material específico revisado por confirmar | **Nos dieron algunos consejos**, pero su contenido exacto todavía no fue reportado | Pendiente de precisar qué consejo recibió el equipo y cómo respondió | Pendiente de confirmar qué sugerencias se aplicaron o descartaron |

**Acuerdo de colaboración:** el equipo recibió comentarios de compañeros de Artemis. Falta registrar sus recomendaciones concretas y cómo se decidió responder a ellas; no atribuimos a Artemis la iniciativa de reducir la velocidad, porque **Joel confirmó que él la propuso** al observar que el robot se salía.

## 2 · Segundo Kaizen: una mejora para proteger el robot en el dohyō

El siguiente objetivo es que el robot pueda desplazarse sobre la superficie negra y que, al llegar a un borde blanco, retroceda y gire para permanecer dentro del área de combate.

| Campo | Registro |
|---|---|
| Situación inicial | En E3 funcionaban los sensores y motores por separado. |
| Mejoras físicas de E4 | Claudio diseñó y mandó a imprimir la carcasa; Sara preparó el pegado de la navaja con apoyo de Max. Joel, Max y Claudio trasladaron el cableado y componentes a la nueva tarjeta después del daño de la anterior. El receptor D12 permanece conectado pero sin programa. |
| Hipótesis de control | Si el programa vigila los QTR y reduce la velocidad de avance de 145 a 105, habrá más oportunidad para retroceder y girar antes de salir de la pista. **Joel propuso la reducción de velocidad** al observar las salidas. La calibración también se cambió, así que las pruebas no aíslan una sola causa. |
| Cambio de programa propuesto | Leer A2/A3, recalibrar negro/blanco, priorizar evasión y cambiar `V_AVANCE` de 145 a **105**; la reducción de velocidad fue propuesta por Joel. Posteriormente incorporó búsqueda y ataque en un sketch de competencia aún por enlazar en GitHub. |
| Código | [Prueba integrada E4](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) · [instrucciones](../../codigo/mini-sumo/prueba_evasion_borde/README.md). |
| Cómo comprobarlo | Calibrar los QTR, comprobar el sentido de los motores con las ruedas levantadas y probar el comportamiento sobre el dohyō. |
| Resultado | Realizamos **seis pruebas de 15 s**. Con PWM 145 hubo giros inesperados y algunas salidas. Con PWM 105 **ninguna de las tres pruebas registró salidas observadas** y los QTR se recalibraron. En una prueba adicional de la versión de competencia, el robot sacó un teléfono del dohyō mientras permaneció dentro de la zona negra. No se midió duración de ese intento. |

### Ficha de experimento K2 solicitada por la guía

| Campo requerido | Registro |
|---|---|
| Limitación de K1 | En E3 comprobamos sensores y motores por separado; todavía faltaba probarlos integrados y evitar el borde. |
| Hipótesis K2 y fundamento | Si los QTR detectan blanco mientras el robot avanza, podrá retroceder y girar para regresar a la superficie negra. |
| Variable modificada | Integramos QTR y motores; después redujimos `V_AVANCE` de 145 a **105** y realizamos otras tres pruebas. También se recalibraron ambos QTR, por lo que no se aisló exclusivamente el efecto de la velocidad. |
| Condiciones y controles | Dos tandas de tres ejecuciones de 15 s sobre el dohyō. Las versiones diferían en PWM de avance y calibración de QTR; no se verificó igualdad exacta de las condiciones de la pista. |
| Seguridad antes del cambio | Revisar alimentación, polaridad, motores fijados, carcasa, aislamiento de la tarjeta y acceso al paro. |
| Personas responsables y alcances | **Joel:** código completo, propuesta PWM 105, pruebas con Sara y Max, cambio de placa con Max y Claudio. **Sara:** ajustes para pegar la navaja al chasis, apoyo de Max y pruebas. **Max:** apoyo a la navaja, otras tareas de montaje, pruebas y cambio de placa. **Claudio:** diseño y envío a impresión de la carcasa y cambio de placa. Alcances: estructura, sensores, motores y software. |
| Código y versión K2 | [Programa PWM 145 ejecutado](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) y [versión PWM 105 ejecutada](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino), conservados por separado. El programa posterior de búsqueda y ataque probado contra teléfono todavía no está en GitHub. |
| Referencia de cambio | Archivos anteriores disponibles en el repositorio; asociación de una versión validada a un identificador específico de revisión: pendiente. |
| Métrica y criterio de éxito | Permanencia en la pista por prueba (sí/no), avisos impresos por el programa y detección del borde. En la tanda PWM 105 hubo **0 salidas observadas en 3 pruebas**; en la tanda PWM 145 hubo algunas salidas sin desglose exacto. La prueba adicional de ataque consiguió expulsar un teléfono sin salida del robot; los giros innecesarios siguen sin contarse individualmente. |

### Participación confirmada del equipo en el Día 4

| Integrante | Aportación específica |
|---|---|
| [Joel](../../participantes/A00574713/dias/E4.md) | Se encargó de **todo el código**, propuso bajar la velocidad PWM 145 → 105 porque el robot se salía, realizó pruebas junto con Sara y Max y ayudó con Max y Claudio a trasladar componentes a la nueva tarjeta. |
| [Sara](../../participantes/saragdr/dias/E4.md) | Trabajó en los ajustes para pegar la navaja al chasis, con ayuda de Max, y participó en las pruebas. |
| [Max](../../participantes/MaxAmCam/dias/E4.md) | Ayudó a Sara con la navaja y con algunas otras tareas de montaje; participó en las pruebas y en el traslado de componentes a la tarjeta nueva. |
| [Claudio](../../participantes/A00574802/dias/E4.md) | **Diseñó la carcasa y la mandó a imprimir**, y participó con Joel y Max en la sustitución de la tarjeta. |

**Equipo externo observador:** compañeros de Artemis. Dieron consejos, pero falta confirmar el contenido de los comentarios para cerrar la trazabilidad de la revisión por pares.

**Evidencia audiovisual disponible (pendiente de enlazar):** 1) video del mini-sumo desplazándose en el dohyō; 2) video de la prueba en la que detectó y expulsó un teléfono **al primer intento** sin salirse. El archivo o URL de cada video aún no se ha recibido.

**Peso:** pendiente de medir porque el equipo **no contó con una báscula**. El límite del reglamento citado en E4 es de 500 g; no se afirma cumplimiento hasta pesar el robot.

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

Después de cargar el programa de competencia sin control remoto en **una tarjeta de reemplazo**, Joel y el equipo probaron un teléfono dentro del dohyō. **Resultado observado:** en el **primer intento**, Tormenta Negra detectó y empujó el teléfono fuera, permaneciendo dentro de la superficie negra. No se informó el tiempo medido. El equipo tiene **dos videos**, uno del robot moviéndose sobre la pista y otro de esta prueba de ataque; todavía falta subirlos o proporcionar sus enlaces. **No se considera combate oficial**, pues el objeto no era otro robot; sirve como comprobación inicial del comportamiento de búsqueda y ataque. El archivo exacto de ese programa está pendiente de incorporarse al repositorio.

La tarjeta anterior **se dañó** y fue reemplazada. No hay diagnóstico confirmado de la causa de la avería. Antes de alimentar de nuevo una placa, verificar polaridad, voltaje y compatibilidad entre USB y batería; no conectar ambas fuentes simultáneamente sin confirmar que el diseño lo permite.

## 4 · Robustez y seguridad

**Variación observada en las pruebas:** había manchas blancas en la superficie negra del dohyō; el robot las interpretaba como blanco y giraba aunque todavía no estuviera junto al borde. Además, **en algunas ocasiones se salió de la pista**, posiblemente por la velocidad. Esto nos sirve como prueba de robustez para el Kaizen 2: la detección y la maniobra funcionan, pero todavía deben mejorarse para evitar giros innecesarios y salidas.

### Registro del ensayo de robustez o variación de condiciones

| Condición o cambio del entorno | Riesgo y límite seguro | Predicción | Resultado observado / medición | ¿Se mantiene el objetivo? | Evidencia |
|---|---|---|---|---|---|
| Manchas blancas dentro de la superficie negra (condición observada, no introducida de forma controlada) | Giros innecesarios y posible salida del borde; supervisión y paro accesible | El robot puede confundir manchas con el borde | Ocurrieron giros repentinos y algunas salidas; sin conteo por cada intento | Parcialmente: sí reaccionó al blanco, pero no siempre permaneció dentro | [Observaciones E4](../../datos/observaciones-dia-04.md) |
| Avance PWM 105 y QTR recalibrados (prueba realizada) | Conservar acceso a apagado y supervisar dohyō | Menos salidas | Tres pruebas de 15 s: ninguna salida observada | Sí, durante esas tres ejecuciones | [Datos reales PWM 105](../../datos/e4_pruebas_pwm105_29oct.md) |

**Límites de inferencia:** tenemos seis ejecuciones del E4. En las tres originales hubo algunas salidas sin conteo por intento y en las tres con PWM 105 ninguna salida observada. Sin embargo, las manchas no fueron una perturbación controlada y también se recalibraron los QTR. Para aislar la velocidad habrá que mantener la misma pista, batería y calibración; el número de giros innecesarios sigue sin medirse.

**Próximo control recomendado:** ya se probó la velocidad menor. Conviene repetir los ensayos con calibración y superficie constantes, registrar salidas y giros innecesarios por intento y comprobar la respuesta frente a otro mini-sumo; el ataque contra un teléfono no sustituye un combate.

**Versión probada:** [prueba_evasion_borde_lenta.ino](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino), con velocidad de avance PWM **105** (antes 145). Se conserva la [versión original](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) y el [registro de las tres pruebas nuevas](../../datos/e4_pruebas_pwm105_29oct.md).

Antes de probar el robot en movimiento, revisar que la carcasa no toque ni provoque cortocircuitos en la placa, que los motores estén bien sujetos y que la batería esté segura. Hacer primero la prueba con ruedas levantadas y mantener despejado el dohyō. **Los programas de prueba E4 se detenían a los 15 s; el programa posterior de competencia arranca automáticamente tras una espera de 5 s y no tiene ese paro por tiempo.** Debe comprobarse su seguridad y compatibilidad con el reglamento antes de competir.

**Dimensiones reportadas:** 10 × 10 cm.  
**Peso:** no medido: **no había báscula disponible**. El reglamento citado limita el conjunto a 500 g; falta comprobar que el montaje final cumpla.  
**Arranque y paro remoto:** receptor conectado a D12, **no integrado al programa de competencia**. El código cargado actualmente arranca solo tras unos 5 s con la batería; revisar si la competencia exige control remoto u otro tipo de autorización de inicio.

## 5 · Preparación de la demostración

La demostración prevista consistirá en enseñar el robot montado, explicar cómo detecta el blanco y mostrar la búsqueda y el ataque. **La búsqueda y el ataque ya funcionaron en una prueba con teléfono**: lo expulsó sin salir de la zona negra. Todavía no hay un ensayo general registrado con roles asignados. **El control remoto no forma parte del código actual** y solo se incorporará después de comprobar los requisitos del reglamento.

### Ensayo general de demostración (20–60 segundos por segmento)

| Segmento | Qué se demostrará | Integrante responsable | Versión o código | Material requerido | Plan B ante fallo |
|---|---|---|---|---|---|
| Inicio / contexto | Mostrar el montaje, el diseño de la carcasa enviado a impresión por Claudio y la navaja ajustada por Sara y Max | Pendiente de asignar | Prototipo E4 | Robot y evidencia del diseño; instalación final de carcasa por confirmar | Mostrar fotos o diseño si no está listo el montaje |
| Prueba principal | Avanzar sobre negro, evadir el blanco y demostrar ataque sobre un objeto | Pendiente de asignar | [PWM 105 probado](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino) y código de competencia cargado en tarjeta de reemplazo (archivo por incorporar) | Dohyō, batería y objeto de prueba seguro; supervisión | Mostrar registros del Monitor Serie si no es seguro moverlo |
| Evidencia de mejora | Explicar V1–K1–K2 y las seis pruebas de evasión, más la expulsión de un teléfono | Pendiente de asignar | [Comparación del E4](../../datos/e4_pruebas_pwm105_29oct.md) | Tabla y registros | Explicar limitaciones sin inventar un porcentaje de mejora |
| Defensa de fronteras | Cada integrante explica su aportación: Joel (código/pruebas), Sara y Max (navaja/pruebas) y Claudio (carcasa) | Pendiente de asignar quién presenta cada parte | [E4 de Joel](../../participantes/A00574713/dias/E4.md) y E4 individuales por completar | Bitácoras y evidencias del equipo | Explicar qué falta validar |

**¿RoboLympics es un evento externo posterior?** Por confirmar. No se registra ninguna participación en una competencia externa como realizada. La demostración prevista para D5 es interna.

**Responsables, tiempos y ensayo general:** propuesta de guion documentada; quedan pendientes la asignación y la ejecución real.

**Evidencias disponibles en GitHub:** [fotografías del E3](../../evidencias/dia-03/README.md), [código PWM 145](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), [código PWM 105](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino), [log de la primera tanda](../../datos/e4_monitor_serie_29oct.txt) y [comparación de las seis pruebas](../../datos/e4_pruebas_pwm105_29oct.md). **El equipo confirmó que tiene dos videos del E4** (movimiento en la pista y expulsión del teléfono), pero faltan sus enlaces o archivos. Tampoco se han compartido fotografías de la navaja y la carcasa.

## 6 · Gate de preparación E4

Esta lista conserva los cinco criterios de cierre del entregable original:

- [x] **K2 explícito:** problema, hipótesis, cambio y datos documentados, incluyendo tres ejecuciones a PWM 145 y tres a PWM 105, estas últimas sin salidas observadas. Falta aislar velocidad frente a calibración para una comparación controlada.
- [x] **Versiones conservadas:** las conexiones iniciales, el primer Kaizen y los dos programas de evasión se documentan en el repositorio. La comparación cuantitativa V1–K1–K2 no está cerrada.
- [x] **Robustez documentada:** manchas blancas y salidas en la primera tanda, tres pruebas a velocidad 105 sin salidas y prueba adicional de expulsión de un teléfono; faltan ensayos con condiciones controladas y con otro mini-sumo.
- [ ] **Demostración D5:** guion propuesto, pero faltan responsables, contingencia acordada y ensayo.
- [ ] **E4 personales:** [Joel ya tiene su E4 personal redactado](../../participantes/A00574713/dias/E4.md). Faltan completar y revisar los de Sara, Max y Claudio.

**Decisión de preparación:** CON RESTRICCIONES. **Verificado por el equipo:** seis pruebas de evasión, tres a PWM 105 sin salidas, expulsión del teléfono al **primer intento**, distribución de tareas y revisión informal de Artemis. **Pendientes:** contenido específico de los consejos de Artemis, asignación de intervenciones y ensayo general de demostración, E4 personales de Sara/Max/Claudio, **peso (sin báscula)**, enlaces a los **dos videos**, evidencia del montaje E4, instalación final de la carcasa por confirmar, archivo exacto del código final en GitHub y validación docente. **Control remoto:** aún no integrado; comprobar si lo exige el reglamento. **Revisión docente:** sin aceptación confirmada.

## 7 · Estado de E4

- [x] **Claudio diseñó y mandó a imprimir la carcasa**; el cableado se reacomodó al sustituir la placa.
- [ ] Confirmar que la carcasa ya está instalada.
- [x] Se trabajó en la fijación de los motores y **Sara y Max ajustaron la navaja para pegarla al chasis**.
- [x] Receptor para el control remoto conectado.
- [x] Programa de prueba conjunta cargado y ejecutado en el dohyō.
- [x] Registradas **seis ejecuciones** de evasión, en dos tandas de 15 s, con lecturas de QTR, IR y avisos de borde.
- [x] Confirmado visualmente que el robot retrocede y gira al detectar blanco.
- [x] Identificadas las manchas blancas como causa de giros repentinos y registradas algunas salidas del dohyō.
- [x] Reducir velocidad de avance a PWM 105 y repetir tres pruebas: **cero salidas observadas**.
- [ ] Medir giros innecesarios y realizar pruebas controladas con idéntica calibración.
- [ ] Verificar arranque y paro mediante el control remoto.
- [x] Documentar robustez observada y la prueba adicional que expulsó un teléfono sin salida del robot.
- [x] Recibir observaciones de algunos compañeros del **equipo Artemis**.
- [ ] Anotar las recomendaciones concretas de Artemis y la decisión tomada.
- [ ] Completar E4 personales de Sara, Max y Claudio.
- [ ] Pesar el robot cuando haya báscula y recibir revisión del profesor.
- [ ] Enlazar los dos videos y el código de competencia cargado en la tarjeta de reemplazo.

**Estado E4:** documentación técnica y de colaboración avanzada. Se registraron seis ejecuciones de evasión (tres a PWM 105 sin salidas), la prueba de ataque exitosa **en el primer intento**, la propuesta de Joel para bajar la velocidad, el trabajo de Sara y Max en la navaja, el diseño de carcasa de Claudio, la sustitución de tarjeta entre Joel/Max/Claudio y la revisión informal de Artemis. Se mantienen pendientes los dos videos por enlazar, el peso, los E4 individuales restantes, el ensayo general y la revisión docente.
