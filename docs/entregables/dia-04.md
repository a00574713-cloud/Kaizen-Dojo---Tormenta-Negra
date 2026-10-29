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

El 29 de octubre continuamos con el mini-sumo **Tormenta Negra**. Hicimos una carcasa para cubrir y proteger los cables, acomodamos los componentes y dejamos el robot armado y ordenado. También conectamos el receptor que utilizará el control remoto para encender o activar el robot y fijamos mejor los motores al chasis.

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
| Comparación V1–K1–K2 | 70–115 | Documentamos la evolución desde el montaje inicial y el funcionamiento de sensores y motores por separado hasta la primera prueba integrada. La comparación cuantitativa con la versión de avance lento queda pendiente. |
| Ensayo de robustez | 115–145 | Realizamos tres pruebas de 15 segundos sobre el dohyō. Las manchas blancas provocaron giros repentinos y hubo salidas ocasionales; el robot sí retrocedía y giraba al detectar blanco. |
| Preparación de la demostración | 145–165 | Definimos qué se podría mostrar en el Día 5: montaje del robot y evasión del borde. **Falta repartir las intervenciones y acordar un plan por si falla.** |
| Gate de preparación | 165–180 | Quedaron registrados los avances y pendientes: repetir las pruebas a menor velocidad, confirmar el control remoto, pesar el robot y obtener la revisión docente. |

## 1A · Actividades realizadas en el Día 4

| Actividad | Avance realizado |
|---|---|
| Carcasa y estructura | Fabricamos una carcasa para cubrir cables y componentes del robot. |
| Organización de componentes | Acomodamos el cableado y terminamos de ordenar el montaje. |
| Fijación de motores | Aseguramos mejor ambos motores al chasis. |
| Control remoto | Conectamos al **pin D12** de la tarjeta el receptor infrarrojo destinado al arranque y paro mediante control remoto. Por ahora, el código de movimiento no utiliza este receptor. |
| Integración del control | Cargamos y ejecutamos el [programa de prueba de movimiento y evasión de borde](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) basado en el pinout de E3. Se registraron **tres pruebas de 15 segundos** en el dohyō. |

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
| Resultado | Realizamos **3 pruebas de 15 s**. El robot avanzó y reaccionó al borde blanco retrocediendo y girando, como buscábamos. En algunos momentos giró repentinamente por manchas blancas dentro de la pista y en algunas ocasiones alcanzó a salirse; todas las pruebas terminaron según el temporizador del programa. |

## 3 · Comparación de versiones

| Etapa | Estado observable |
|---|---|
| Día 2: primera integración | Cables y conexiones físicas preparados. |
| Día 3: primera mejora Kaizen | Motores y sensores probados; batería conectada y polaridad corregida. |
| Día 4: segundo Kaizen en prueba | Carcasa, montaje y motores asegurados; receptor de control remoto conectado. Se ejecutó el programa de evasión y se registraron tres pruebas de 15 segundos en el dohyō. |

## 3A · Tres pruebas de movimiento en el dohyō

El equipo compartió el registro del Monitor Serie de **tres ejecuciones del programa E4**. Se utilizó la calibración: negro = 1022 (izquierdo) y 821 (derecho); blanco = 956 (izquierdo) y 34 (derecho). Los umbrales calculados fueron **989** y **427**, respectivamente.

| Prueba | Duración programada | Avisos de borde izquierdo | Avisos de borde derecho | Terminación |
|---|---:|---:|---:|---|
| 1 | 15 s | 9 | 3 | `FIN DE PRUEBA` |
| 2 | 15 s | 5 | 7 | `FIN DE PRUEBA` |
| 3 | 15 s | 6 | 6 | `FIN DE PRUEBA` |

Los avisos de borde son **eventos impresos por el programa**, no el número de veces que el robot llegó realmente al perímetro. El equipo observó que **sí retrocedía y giraba para evitar el borde**, aunque algunas **manchas blancas dentro de la zona negra** provocaron cambios de dirección repentinos. También hubo **algunas salidas del dohyō** durante el movimiento; sospechamos que la velocidad hizo que el robot no alcanzara a reaccionar a tiempo, pero todavía debemos comprobarlo. Las tres pruebas terminaron por tiempo, no significa que las tres hayan evitado por completo salir de la pista.

**Observación importante para mejorar:** el sensor izquierdo tiene poco contraste entre negro y blanco (**1022 vs. 956**, diferencia 66), mientras que el derecho muestra una separación mucho mayor (**821 vs. 34**, diferencia 787). Las manchas blancas explican parte de las detecciones repentinas; aún conviene revisar la altura y calibración de ambos QTR. Para evitar que el robot se salga, la siguiente prueba deberá hacerse a menor velocidad, observando si retrocede y gira con suficiente anticipación. **El código de las tres pruebas se conserva sin modificaciones.**

**Evidencia del Día 4:** [log completo del Monitor Serie](../../datos/e4_monitor_serie_29oct.txt) · [análisis de resultados](../../datos/observaciones-dia-04.md) · [código ejecutado](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino).

## 4 · Robustez y seguridad

**Variación observada en las pruebas:** había manchas blancas en la superficie negra del dohyō; el robot las interpretaba como blanco y giraba aunque todavía no estuviera junto al borde. Además, **en algunas ocasiones se salió de la pista**, posiblemente por la velocidad. Esto nos sirve como prueba de robustez para el Kaizen 2: la detección y la maniobra funcionan, pero todavía deben mejorarse para evitar giros innecesarios y salidas.

**Próxima mejora propuesta:** revisar o limpiar la superficie de prueba, repetir la calibración de los QTR y probar primero con una velocidad de avance más baja, manteniendo los demás ajustes iguales. Registrar salidas y giros innecesarios en cada intento. Si siguen ocurriendo salidas, revisar la posición de los QTR y los tiempos de retroceso y giro.

**Versión preparada para comparar:** [prueba_evasion_borde_lenta.ino](../../codigo/mini-sumo/prueba_evasion_borde_lenta/prueba_evasion_borde_lenta.ino), con velocidad de avance PWM **105** (antes 145). Se conserva [la versión original de las tres pruebas](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), sin modificarla. Esta nueva versión aún no tiene resultados de prueba.

Antes de probar el robot en movimiento, revisar que la carcasa no toque ni provoque cortocircuitos en la placa, que los motores estén bien sujetos y que la batería esté segura. Hacer primero la prueba con ruedas levantadas y mantener despejado el dohyō. El programa de prueba tiene parada automática a los 15 segundos.

**Dimensiones reportadas:** 10 × 10 cm.  
**Peso:** por medir; el reglamento limita el conjunto a 500 g.  
**Arranque y paro remoto:** receptor conectado; falta confirmar su funcionamiento y su integración al programa.

## 5 · Preparación de la demostración

La demostración prevista consistirá en enseñar el robot montado, explicar los sensores y motores, y hacer que se desplace sobre el área negra evitando el borde blanco. Una vez comprobado eso, se integrará el arranque y paro remoto y el comportamiento de búsqueda del rival.

**Evidencias disponibles:** [fotografías del E3](../../evidencias/dia-03/README.md), [código de prueba E4](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino), [registro de las tres pruebas](../../datos/e4_monitor_serie_29oct.txt) y [resumen de resultados](../../datos/observaciones-dia-04.md). Las fotografías del nuevo montaje de E4 se añadirán cuando estén disponibles.

## 6 · Estado de E4

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
