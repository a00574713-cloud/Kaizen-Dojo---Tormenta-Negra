# Programas utilizados para pruebas — 28 de octubre de 2026

Durante el E3 el equipo trabajó con **dos programas de Arduino** que se compartieron en la conversación:

1. **Prueba de cinco sensores:** dos QTR-1A para distinguir negro y blanco en el dohyō y tres infrarrojos JS40F para mostrar lecturas digitales `0` y `1` ante objetos.
2. **Prueba individual de motores:** órdenes de giro para los dos motores conectados a la tarjeta Azimov Team.

## Pines de referencia del documento de la tarjeta

| Componente | Pin |
|---|---|
| QTR izquierdo | A2 |
| QTR derecho | A3 |
| Infrarrojo izquierdo | D2 |
| Infrarrojo central | A5 |
| Infrarrojo derecho | A4 |
| Motor izquierdo | D5 y D6 |
| Motor derecho | D10 y D11 |

**Alimentación reportada:** batería nominal de 7.4 V y 500 mAh conectada al módulo durante las pruebas de motorización. Uno de los motores requirió corregir su polaridad.

Los archivos fuente originales `.ino` todavía no están en esta carpeta. La tabla anterior sirve como referencia de conexiones, **no reemplaza el programa exacto probado**. Al recuperar los dos sketches originales, guardarlos aquí sin sustituirlos por código diferente y agregar sus enlaces al [E3](../../docs/entregables/dia-03.md).

**Resultado de las pruebas:** [Observaciones del 28 de octubre](../../datos/observaciones-dia-03.md).
