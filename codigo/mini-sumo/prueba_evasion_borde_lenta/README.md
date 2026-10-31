# E4 — Prueba de evasión de borde a menor velocidad

Se preparó esta versión después de observar que Tormenta Negra sí detectaba el blanco y retrocedía y giraba, aunque en algunas ocasiones se salía del dohyō. La pista también tenía manchas blancas que provocaban giros inesperados.

**Cambio respecto a la versión original:** `V_AVANCE = 105` (antes `145`). Los tiempos de retroceso (400 ms) y giro (450 ms), las velocidades de esas maniobras, los pines y la calibración permanecen iguales. El control remoto conectado a D12 no participa en esta prueba.

**Archivo:** [prueba_evasion_borde_lenta.ino](prueba_evasion_borde_lenta.ino) · **Versión anterior:** [prueba_evasion_borde.ino](../prueba_evasion_borde/prueba_evasion_borde.ino).

**Resultado registrado en E4:** programa de evasión a PWM 105 probado en tres ejecuciones de 15 segundos sin salidas observadas; se recalibraron también los QTR, así que no se atribuye la mejora únicamente al PWM. [Datos E4](../../../datos/e4_pruebas_pwm105_29oct.md). Abrir el Monitor Serie a 9600 baudios y repetir la calibración con `n` (negro) y `b` (blanco) antes de usar `s` (iniciar). `p` detiene; el programa también se detiene solo después de 15 s. Probar primero con ruedas levantadas y asegurar que el cable USB no estorbe el movimiento.

Si 105 no permite mover los motores, probar 115 o 120, documentando cuál funciona y cuántas salidas o giros innecesarios ocurren.
