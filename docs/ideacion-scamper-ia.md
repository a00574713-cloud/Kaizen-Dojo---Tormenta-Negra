# Ideación SCAMPER + IA · Tormenta Negra

> Actividad integradora «Expandir para mejorar». Equipo Tormenta Negra · M01 Mini-sumo autónomo · Alcance **MS10** (estrategia de ataque), con apoyo de **MS06** · 30 de octubre de 2026.
> Relación con E1: amplía el objetivo verificable definido en [E1](entregables/dia-01.md) (detectar al oponente y reaccionar). Se realizó después del Día 5 como ideación para la iteración rumbo a RoboLympics (21/11/2026).

## 1. Idea base

Cuando un JS40F lateral detecta al rival, [E5 V2](../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino) gira sobre su eje (±125 PWM) hasta verlo con el sensor central. En la prueba 3 y la pelea 2 ese giro expuso el costado y Tormenta Negra salió del dohyō: **2 de 5 intentos** ([CSV E5](../datos/e5_ensayos_30oct.csv)).

**Valor buscado:** confiabilidad, no salir del dohyō ante un rival lateral.

## 2. Alternativas (SCAMPER)

| # | Acción | Alternativa | Ventaja | Riesgo | Validación |
|---|---|---|---|---|---|
| A | Sustituir | Esquivar y contragolpear: arco corto lejos del rival y luego encararlo | Imita lo que funcionó en la prueba 2 y la pelea 1 | Si el esquive es lento, el rival empuja igual | 5 arranques con rival a 90° por lado; salida propia (sí/no) |
| B | Combinar | Detección lateral + memoria de borde: cerca del borde esquiva al centro; lejos, gira como V2 | Solo software; conserva lo que ya sirve | Umbral de tiempo por calibrar | Igual que A, cerca y lejos del borde |
| C | Modificar | Girar sobre una sola rueda para avanzar mientras encara | Menos tiempo con el costado expuesto | Arco amplio, acerca al borde | Tiempo hasta encarar (s) en video |
| D | Reorganizar | JS40F laterales a ~45° hacia el frente, con soportes en la carcasa CAD | Detecta antes y gira menos | Reimpresión; posible punto ciego a 90° | Mapa de detección antes y después |

## 3. Aporte de la IA y análisis crítico

- **Herramienta:** Claude (Anthropic), modelo Opus 5.5, 30/10/2026, con lectura del repositorio.
- **Aporte 1 · Aceptado:** los dos resultados laterales buenos fueron esquive y contragolpe, no giro. Confirmado en CSV y videos.
- **Aporte 2 · Ajustado:** memoria de borde. Su umbral es una suposición; se calibrará en pista.
- **Aporte 3 · Pospuesto:** sensores a 45°. Requiere reimprimir y medir antes el ángulo actual.
- **Suposiciones detectadas:** ángulo de montaje no medido; en la prueba 2 el rival pudo salir por error propio; alcance del JS40F contra ese rival no medido.
- **Descartado:** C, porque su arco amplio acerca al robot al borde.
- Uso declarado conforme a los [Lineamientos éticos para alumnos, Tec de Monterrey](https://tec.mx/sites/default/files/repositorio/integridad-academica/lineamientos-eticos-alumnos-tec-de-monterrey.pdf).

## 4. Decisión

**B + A, «esquiva inteligente»:** rival lateral cerca del borde → arco hacia el centro y luego encarar; lejos del borde → giro de V2. Solo software, cabe en 15 h. D queda como segundo paso (CAD de Claudio).

**Prueba propuesta:** rival a 90°, 5 arranques por lado, cerca y lejos del borde, comparando V2 y la nueva versión. Métrica: salida propia (sí/no). Es una hipótesis de diseño, no una mejora demostrada; puede descartarse con razones técnicas.

## 5. Reflexiones

- **Joel:** La IA conectó algo que yo no había visto: nuestros aciertos laterales fueron esquives. El umbral del borde lo decido yo, probándolo en pista.
- **Sara:** Me ayudó a ver opciones rápido, pero varias dependían de datos que no medimos; preferí lo que podemos comprobar con el hardware actual.
- **Max:** Yo había visto las fallas laterales; la IA las ordenó en opciones, pero descartamos girar sobre una rueda porque nos acerca al borde.
- **Claudio:** La IA amplió mis ideas de estrategia, pero la decisión fue nuestra: B + A primero y los sensores a 45° después, en mi CAD.
