# Códigos de prueba utilizados — 28 de octubre de 2026

Estos son los **dos programas originales** que utilizamos en Arduino IDE con la tarjeta Azimov Team durante el Día 3 de Tormenta Negra.

| Programa | Archivo | Qué realiza |
|---|---|---|
| Prueba individual de motores | [`prueba_motores.ino`](prueba_motores/prueba_motores.ino) | Prueba cada motor en ambos sentidos por separado, a velocidad PWM de 160, con pausas de giro y detención. |
| Prueba de cinco sensores | [`prueba_sensores.ino`](prueba_sensores/prueba_sensores.ino) | Lee tres JS40F como entradas digitales y dos QTR-1A como entradas analógicas; muestra sus valores en el Monitor Serie cada 300 ms. |

## Pines utilizados en los programas

| Componente | Pin |
|---|---|
| QTR izquierdo | A2 |
| QTR derecho | A3 |
| Infrarrojo JS40F izquierdo | D2 |
| Infrarrojo JS40F central | A5 |
| Infrarrojo JS40F derecho | A4 |
| Motor izquierdo | D5 y D6 |
| Motor derecho | D10 y D11 |

**Prueba de sensores:** se colocaron los QTR sobre el dohyō negro con borde blanco y se acercaron objetos a los infrarrojos. Se realizaron alrededor de cinco pruebas para los sensores en conjunto.

**Prueba de motores:** primero no giraban porque faltaba conectar la batería al módulo. Tras conectar la batería nominal de 7.4 V y 500 mAh, uno giraba al revés; se corrigió la polaridad de ese motor. Se realizaron alrededor de diez pruebas y finalmente ambos respondieron correctamente ya montados en el robot.

Para abrir los sketches en Arduino IDE, abrir el archivo `.ino` dentro de su carpeta del mismo nombre. Los programas están guardados tal como fueron compartidos por el equipo, sin modificaciones.

**Robot ensamblado:** 10 × 10 cm de largo y ancho, según confirmación del equipo; peso por medir.

**Documentos:** [Entregable E3](../../docs/entregables/dia-03.md) · [Registro de pruebas](../../datos/observaciones-dia-03.md).
