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

## 1 · Actividades del Día 4

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
| Resultado | Se ejecutaron **3 pruebas de 15 s**. El Monitor Serie mostró detecciones del borde derecho e izquierdo y las tres terminaron con `FIN DE PRUEBA`. Falta confirmar mediante observación directa que el robot retrocedió, giró y se mantuvo dentro del dohyō en cada ocasión. |

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

Los avisos de borde son **eventos impresos por el programa**, no el número de veces que el robot llegó realmente al perímetro. El log registra un mensaje cada vez que el controlador entra a la maniobra de evasión; sin video u observación de la trayectoria no podemos asegurar cuántas fueron detecciones correctas ni si el robot permaneció dentro del dohyō.

**Observación importante para mejorar:** el sensor izquierdo tiene poco contraste entre negro y blanco (**1022 vs. 956**, diferencia 66), mientras que el derecho muestra una separación mucho mayor (**821 vs. 34**, diferencia 787). Conviene revisar la altura, orientación y ubicación del QTR izquierdo, y repetir la calibración sobre el borde blanco real del dohyō antes de una nueva prueba. No se cambió el código original de prueba.

**Evidencia del Día 4:** [log completo del Monitor Serie](../../datos/e4_monitor_serie_29oct.txt) · [análisis de resultados](../../datos/observaciones-dia-04.md) · [código ejecutado](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino).

## 4 · Robustez y seguridad

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
- [ ] Confirmar la maniobra real de retroceso/giro y si permaneció dentro del dohyō.
- [ ] Verificar arranque y paro mediante el control remoto.
- [ ] Documentar pruebas de robustez y completar E4 personales.
- [ ] Pesar el robot y recibir revisión del profesor.

**Estado E4:** en proceso; montaje mejorado y tres pruebas de detección de borde registradas.
