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
| Integración del control | Preparamos un [programa de prueba de movimiento y evasión de borde](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino) basado en el pinout de E3. |

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
| Resultado | Prueba conjunta por ejecutar y registrar después de cargar el nuevo programa. |

## 3 · Comparación de versiones

| Etapa | Estado observable |
|---|---|
| Día 2: primera integración | Cables y conexiones físicas preparados. |
| Día 3: primera mejora Kaizen | Motores y sensores probados; batería conectada y polaridad corregida. |
| Día 4: segunda mejora Kaizen propuesta | Carcasa, montaje y motores asegurados; receptor de control remoto conectado; programa de evasión de borde preparado para ensayo. |

## 4 · Robustez y seguridad

Antes de probar el robot en movimiento, revisar que la carcasa no toque ni provoque cortocircuitos en la placa, que los motores estén bien sujetos y que la batería esté segura. Hacer primero la prueba con ruedas levantadas y mantener despejado el dohyō. El programa de prueba tiene parada automática a los 15 segundos.

**Dimensiones reportadas:** 10 × 10 cm.  
**Peso:** por medir; el reglamento limita el conjunto a 500 g.  
**Arranque y paro remoto:** receptor conectado; falta confirmar su funcionamiento y su integración al programa.

## 5 · Preparación de la demostración

La demostración prevista consistirá en enseñar el robot montado, explicar los sensores y motores, y hacer que se desplace sobre el área negra evitando el borde blanco. Una vez comprobado eso, se integrará el arranque y paro remoto y el comportamiento de búsqueda del rival.

**Evidencias disponibles:** [Fotografías del E3](../../evidencias/dia-03/README.md) y [código de prueba E4](../../codigo/mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino). Las fotos del nuevo montaje de E4 podrán agregarse cuando el equipo las comparta.

## 6 · Estado de E4

- [x] Carcasa construida y cableado acomodado, según el equipo.
- [x] Motores mejor fijados al chasis.
- [x] Receptor para el control remoto conectado.
- [x] Programa de prueba conjunta preparado.
- [ ] Probar el programa sobre el dohyō y registrar el resultado real.
- [ ] Verificar arranque y paro mediante el control remoto.
- [ ] Documentar pruebas de robustez y completar E4 personales.
- [ ] Pesar el robot y recibir revisión del profesor.

**Estado E4:** en proceso; montaje mejorado y prueba integrada preparada.
