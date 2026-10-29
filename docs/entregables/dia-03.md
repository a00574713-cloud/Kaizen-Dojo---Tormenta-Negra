---
kaizen_dojo: "2026"
formato: "Entregable diario G2"
evidencia: "E3"
dia: 3
responsable_registro: "equipo"
estado: "REGISTRADO"
fecha: "2026-10-28"
revision_docente: "PENDIENTE"
---

# E3 · Día 3 — MEDIR Y APRENDER | Primer Kaizen del mini-sumo

El 28 de octubre terminamos el montaje físico de nuestro mini-sumo **Tormenta Negra** y realizamos las primeras pruebas con los cinco sensores y los dos motores. Durante las pruebas resolvimos dos problemas de los motores: faltaba conectar la batería a la tarjeta y uno tenía la polaridad invertida. Al corregirlos, conseguimos que ambos giraran correctamente. Después de los ajustes, todas las pruebas posteriores que realizamos salieron bien.

## 0 · Identificación y continuidad

| Campo | Registro |
|---|---|
| Equipo y misión | Tormenta Negra · M01, mini-sumo autónomo. |
| Fecha y lugar | 28 de octubre de 2026 · Laboratorio de Electrónica, CTA, Campus León. |
| Avance desde el Día 2 | El [E2](dia-02.md) documenta el cableado y la preparación de componentes. En el E3 quedó montado el chasis y realizamos pruebas de sensores y motores. |
| Controlador y alimentación | Tarjeta Azimov Team programada con Arduino IDE; batería nominal de 7.4 V y 500 mAh. |
| Superficie de prueba | Dohyō de superficie negra con bordes blancos. |
| Diseño mecánico | El equipo confirmó que las dimensiones del robot son **10 cm de largo × 10 cm de ancho**. El peso todavía no se ha medido. |
| Identificación del avance | `D3-MONTAJE-28OCT`, prototipo físico ensamblado. |

## 1 · Actividades del Día 3

| Bloque de la guía | Minutos | Actividad realizada |
|---|---:|---|
| Identificar el problema | 0–15 | Durante la prueba inicial notamos que los motores no giraban. |
| Diseñar y realizar las pruebas | 15–40 | Joel consiguió los programas de Arduino y los cargó a la tarjeta. Junto con Sara probó los cinco sensores sobre el dohyō y con objetos para los infrarrojos. |
| Revisar el prototipo | 40–80 | Joel y Sara realizaron las pruebas de sensores y motores. Sara también revisó y volvió a soldar conexiones flojas o desprendidas. |
| Kaizen 1: corregir y mejorar | 80–125 | Conectamos la batería que faltaba y corregimos la polaridad de uno de los motores. |
| Repetir las pruebas | 125–160 | Realizamos alrededor de diez pruebas de motores ya integrados al carrito, hasta comprobar su giro correcto. |
| Registrar los avances | 160–180 | Sara colocó los motores en el chasis; Max y Claudio apoyaron pelando cables y con la soldadura. Documentamos el robot ensamblado con cinco fotografías. |

Los minutos representan la distribución de actividades de la guía, no un cronometraje de la sesión.

## 2 · Pruebas de sensores y motores

| Elemento | Cómo se probó | Cantidad aproximada de pruebas | Resultado |
|---|---|---|---|
| 2 sensores QTR-1A de línea | Colocamos los sensores sobre la zona negra y los bordes blancos del dohyō, cambiando entre ambos colores. | Aproximadamente **5 pruebas de sensores en total**, considerando los QTR y los infrarrojos. | Los QTR respondieron correctamente al cambio de color. |
| 3 sensores infrarrojos JS40F | Acercamos y retiramos objetos y observamos las lecturas digitales `0` y `1` en el programa de prueba. | Incluidas en las aproximadamente 5 pruebas del conjunto de sensores. | Los tres sensores respondieron al detectar objetos. |
| 2 motores DC | Probamos su giro mediante el programa de Arduino. Después de conectar la batería y corregir la polaridad de uno, repetimos las pruebas con los motores montados en el carrito. | Aproximadamente **10 pruebas de motores en total**. | Al terminar las correcciones, ambos motores giraron correctamente. |

Las cantidades son aproximadas, de acuerdo con el registro del equipo. **Después de corregir la alimentación y la polaridad, todas las pruebas posteriores de los motores salieron bien.**

**Lecturas observadas:** los QTR distinguieron las dos superficies; los infrarrojos alternaron sus lecturas digitales entre `0` y `1` al interactuar con los objetos. No se asigna aquí un valor fijo a «detectado» porque no se compartió qué lectura correspondía a cada estado.

**Programas utilizados:** los dos sketches originales de Arduino, ahora guardados en el repositorio: [prueba de los cinco sensores](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) y [prueba individual de motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino). [Ver conexiones y explicación de las pruebas](../../codigo/pruebas-dia-03/README.md).

## 3 · Kaizen 1: problema, mejora y resultado

**¿Qué queremos mejorar?** Conseguir que los dos motores respondan y giren en el sentido correcto dentro del robot.

| Etapa | Qué sucedió | Acción del equipo |
|---|---|---|
| Situación inicial | Los motores no giraban durante la primera prueba porque la batería no estaba conectada a la tarjeta. | Revisamos la alimentación. |
| Primer cambio | Conectamos la batería al módulo. | Los motores comenzaron a responder. |
| Segundo problema | Uno de los motores giraba en el sentido contrario al esperado debido a la polaridad de su conexión. | Identificamos la conexión invertida. |
| Segundo cambio | Corregimos la polaridad del motor. | Ambos motores quedaron girando correctamente. |
| Comprobación final | Repetimos las pruebas con los motores integrados al carrito. | Todas las pruebas realizadas después de las correcciones salieron bien. |

**Hipótesis de trabajo:** si conectamos correctamente la alimentación y corregimos la polaridad de los motores, ambos podrán responder a las órdenes del programa y girar en el sentido esperado.

**Lo que aprendimos:** una conexión de alimentación faltante y una polaridad invertida pueden impedir que el robot funcione como esperamos, aunque sus componentes estén montados. La mejora se logró revisando cada conexión, corrigiéndola y volviendo a probar.

**Comparación de estados:** `D3-INICIAL` (sin batería conectada, sin giro); `D3-BATERIA` (motores energizados, uno con giro invertido); `D3-CORREGIDO` (ambos motores con giro correcto). Son nombres para distinguir etapas del montaje, no versiones distintas de firmware.

## 4 · Registro y continuidad de las pruebas

**Resumen de resultados:** [Observaciones del Día 3](../../datos/observaciones-dia-03.md) · [Protocolo del equipo](../../pruebas/protocolo.md) · [CSV para ensayos medidos](../../datos/ensayos.csv).

Las pruebas nos permitieron confirmar el funcionamiento básico de los componentes. **No grabamos video de estas pruebas**; nuestras evidencias son las cinco fotografías del robot terminado, los programas de Arduino y este registro de lo que observamos. Para medir el rendimiento más adelante, anotaremos los resultados de cada intento de forma individual.

**Cuidado durante los siguientes ensayos:** revisar con el robot desconectado las conexiones, el aislamiento de la tarjeta respecto a la base metálica, la batería y la sujeción de los cables. Para probar el giro de forma segura, mantener las ruedas separadas del suelo cuando corresponda.

## 5 · Montaje, evidencias y trabajo del equipo

El chasis quedó ensamblado con su base metálica, dos ruedas motrices, batería, tarjeta controladora, cableado y sensores. **Dimensiones confirmadas por el equipo: 10 × 10 cm.** Las cinco fotografías muestran el avance respecto al Día 2.

| Evidencia | Archivo |
|---|---|
| Vista superior del robot | [IMG_3592.jpg](../../evidencias/dia-03/IMG_3592.jpg) |
| Vista lateral | [IMG_3591.jpg](../../evidencias/dia-03/IMG_3591.jpg) |
| Vista posterior | [IMG_3590.jpg](../../evidencias/dia-03/IMG_3590.jpg) |
| Vista oblicua frontal | [IMG_3589.jpg](../../evidencias/dia-03/IMG_3589.jpg) |
| Vista frontal | [IMG_3588.jpg](../../evidencias/dia-03/IMG_3588.jpg) |

**[Ver las cinco fotografías del Día 3](../../evidencias/dia-03/README.md).**

### Participación de cada integrante

| Integrante | Aportación del 28 de octubre |
|---|---|
| [Joel](../../participantes/A00574713/dias/E3.md) | Consiguió los programas de Arduino, los cargó a la tarjeta y realizó las pruebas de sensores y motores junto con Sara. |
| [Sara](../../participantes/saragdr/dias/E3.md) | Realizó las pruebas junto con Joel, volvió a soldar componentes o conexiones flojas o desprendidas y colocó los motores en el chasis. |
| [Max](../../participantes/MaxAmCam/dias/E3.md) | Apoyó con tareas de preparación, como pelar cables y ayudar en la soldadura. |
| [Claudio](../../participantes/A00574802/dias/E3.md) | Apoyó con tareas de preparación, como pelar cables y ayudar en la soldadura. |

Cada integrante puede complementar su E3 personal con su aprendizaje y experiencia.

## 6 · Puerta de salida E3 y siguiente mejora

- [x] Montaje físico del mini-sumo documentado con cinco fotografías.
- [x] Pruebas de los cinco sensores y los dos motores realizadas y descritas.
- [x] Problema, dos correcciones y resultado del Kaizen 1 documentados.
- [x] Resultados cualitativos y cantidad aproximada de pruebas registrados.
- [x] Incorporados los dos programas `.ino` originales de sensores y motores.
- [x] Registradas las tareas de Joel, Sara, Max y Claudio y aclarado que no se grabó video.
- [ ] Registrar por separado las corridas de una prueba repetible para comparar resultados numéricos.
- [ ] Completar y revisar los E3 personales de todos los integrantes.
- [ ] Revisión del profesor Camilo René Duque.

**Gate E3:** actividades, resultados y Kaizen 1 documentados; revisión docente pendiente.

**Siguiente reto, Kaizen 2:** utilizar los sensores y los motores en conjunto para que el robot detecte el borde blanco del dohyō y realice la maniobra programada para evitar salir de la pista.
