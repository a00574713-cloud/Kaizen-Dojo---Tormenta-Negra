---
kit: "Kaizen Dōjō 2026 — Compromiso de misión"
version_catalogo: "C2 / 1.1"
participante: "Joel Alejandro Soto Muñoz"
equipo: "Tormenta Negra"
mision: "M01"
plataforma: "Mini-sumo autónomo"
territorio_personal: "D · DOMINAR"
frontera_personal: "F1 · INTEGRAR"
validacion_docente: "PENDIENTE"
---

# Mi compromiso Kaizen · 2026

> **Mi desafío:** ser capaz de haber implementado mis conocimientos al armar un mini-zumo y hacerlo funcionar autónomamente.

## 1. Mi misión y mi frontera

- **Participante:** Joel Alejandro Soto Muñoz
- **Equipo:** Tormenta Negra
- **Plataforma:** M01 · Mini-sumo autónomo
- **Territorio personal:** D · DOMINAR
- **Frontera personal:** F1 · INTEGRAR

**Hoy todavía no puedo:**

saber como se programa un mini-zumo, ni como se construye.

**Al finalizar Kaizen Dōjō demostraré que puedo:**

ser capaz de haber implementado mis conocimientos al armar un mini-zumo y hacerlo funcionar autónomamente.

**La evidencia o indicador que utilizaré:**

Con un video del mini-zumo funcionando

**Mi motivación:**

Es importante para mí porque quiero aprender a integrar mis conocimientos de ingeniería en proyectos reales. Aunque todavía no tengo experiencia construyendo robots, me gustaría aprender cómo funcionan, cómo se programan y cómo puedo hacer que todos sus componentes trabajen juntos.

## 2. Alcances y katas seleccionados

Esta es mi propuesta individual dentro de una misión colaborativa. Cada alcance requiere evidencia de contribución propia y negociación de viabilidad.

### 1. MS01 · Diseñar y fabricar la estructura mecánica

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** DOMINAR
- **Frontera sugerida:** F1 · INTEGRAR
- **Carta:** D1 · AUTONOMOUS SYSTEM
- **Duración estimada:** 6–8 h
- **Resultado esperado / aceptación:** CAD acotado, piezas fabricadas y ensamblaje compatible con motores, batería y sensores.
- **Recursos o prerequisitos:** Dimensiones del reglamento, componentes reales y método de fabricación disponibles.

**Katas elegidos**

- [ ] Medir componentes y dibujar envolvente con restricciones.
- [ ] Fabricar/ensamblar una versión y validar ajuste, rigidez y acceso a mantenimiento.

**Mi evidencia final:** Participé en el montaje y las conexiones del mini-sumo y en las pruebas de integración. El robot quedó ensamblado con una estructura de 10 × 10 cm. No elaboré un CAD propio ni registré todas las medidas o una prueba de rigidez, así que no marco los katas completos de MS01 como acreditados.

**Enlaces a código/CAD/pruebas:** [Fotos de montaje E3](../../evidencias/dia-03/README.md) · [Fotos finales E5](../../evidencias/dia-05/README.md) · [Alcance MS01](../../alcances/MS01-estructura/README.md)

### 2. MS06 · Integrar sensores de detección del oponente

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** DOMINAR
- **Frontera sugerida:** F1 · INTEGRAR
- **Carta:** D1 · AUTONOMOUS SYSTEM
- **Duración estimada:** 3–4 h
- **Resultado esperado / aceptación:** Mapa de detección útil para decidir dirección de búsqueda y ataque.
- **Recursos o prerequisitos:** Sensores compatibles y rival/obstáculo de referencia.

**Katas elegidos**

- [ ] Medir rango efectivo en distancias y ángulos conocidos.
- [ ] Ensayar cinco encuentros y documentar errores de percepción.

**Mi evidencia final:** Probé sensores y participé en su integración con Arduino. En E5 registramos cinco intentos contra otro mini-sumo, incluidos problemas de respuesta lateral. Esos intentos no sustituyen un mapa de distancias y ángulos ni cinco evaluaciones controladas de percepción.

**Enlaces a código/CAD/pruebas:** [Prueba de sensores E3](../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) · [Código E5 V2](../../codigo/mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino) · [Cinco videos E5](../../evidencias/dia-05/README.md) · [Alcance MS06](../../alcances/MS06-deteccion-oponente/README.md)

## 3. Planeación y viabilidad

- **Alcances:** 2 de un máximo de 3
- **Katas:** 4
- **Esfuerzo técnico estimado:** 9–12 horas
- **Disponibilidad orientativa:** 8–10 horas de trabajo técnico dentro de las 15 horas presenciales.
- **Estado:** REQUIERE REVISIÓN: el máximo estimado supera 10 horas

## 4. Mi bitácora Kaizen (cinco sesiones)

| Día | Evidencia que registraré | Estado |
|---|---|---|
| D1 · Atreverse | Diagnóstico y pacto de frontera | [x] [Mi E1](dias/E1.md): diagnóstico y pacto |
| D2 · Hacer | Prototipo / primera integración V1 | [x] [Mi E2](dias/E2.md): conexiones iniciales, sin pruebas funcionales |
| D3 · Medir | Ensayo base y ciclo Kaizen 1 | [x] [Mi E3](dias/E3.md): alimentación y polaridad de motores |
| D4 · Iterar | Ciclo Kaizen 2 y comparación V1–Vn | [x] [Mi E4](dias/E4.md): PWM y calibración QTR |
| D5 · Demostrar | Desafío, evidencia y reflexión | [x] [Mi E5](dias/E5.md): cinco intentos y reflexión |

## 5. Mi protocolo de mejora

### Ciclo Kaizen 1

- **Hipótesis:** Si revisábamos la alimentación y polaridad de los motores, conseguiríamos que respondieran y giraran en el sentido esperado.
- **Cambio implementado:** En E3 trabajé con Sara para conectar correctamente la batería y corregir la polaridad de un motor. Después repetimos las pruebas.
- **Métrica base:** Respuesta y sentido de giro (sí/no). Recordamos dos problemas iniciales distintos y aproximadamente diez intentos de motores en total, sin datos por intento.
- **Resultado:** Después de las correcciones, ambos motores respondieron correctamente. No registramos cinco pares equivalentes V1–K1 ni una mejora cuantitativa. [E3](../../docs/entregables/dia-03.md).

### Ciclo Kaizen 2

- **Hipótesis:** Al bajar la velocidad PWM, el robot podría reaccionar al borde antes de salir del dohyō.
- **Cambio implementado:** Propuse disminuir PWM de 145 a 105 y ajusté el programa. También recalibramos los QTR, por lo que cambiaron dos condiciones entre tandas.
- **Comparación con V1:** En E2 no hubo prueba funcional. En E4 hicimos tres ejecuciones de 15 s con PWM 145 (36 avisos de borde y salidas no contadas por intento) y otras tres con PWM 105 (35 avisos y ninguna salida observada). No hubo un experimento controlado de V1–K1–K2. [Resultados E4](../../datos/e4_pruebas_pwm105_29oct.md).
- **Aprendizaje:** Un sensor que responde por separado no garantiza que el robot gire bien. En E5 la detección lateral todavía provocó salidas y tuve que revisar la estrategia de persecución. [Mi E5](dias/E5.md).

## 6. Cierre y reflexión

**Antes no podía:** No sabía construir ni programar un mini-sumo. Aunque conocía algo de Python y electrónica, no sabía cómo integrar sus componentes.

**Ahora puedo:** Integrar motores y sensores, trabajar el programa Arduino y hacer pruebas para encontrar fallas. Todavía necesito medir mejor los rangos de detección.

**Cómo lo demostré:** Conseguí, adapté y cargué programas; probé sensores y motores; propuse la reducción de PWM y ajusté la respuesta lateral de E5 V1 a E5 V2. El robot realizó cinco intentos: tres pruebas y dos peleas, con una victoria y una derrota en las peleas. [Videos finales](../../evidencias/dia-05/README.md) · [Mi E5](dias/E5.md).

**Qué intentaría mejorar después:** Mediría distancias y ángulos de detección, mejoraría el giro ante rivales laterales y corregiría el control MicroStart (botón 1 arrancaba, 2 detenía y 3 no respondía). Antes de otra competencia también verificaría un paro seguro.

---

_Documento generado localmente con el configurador Kaizen Dōjō 2026 · catálogo C2. El estudiante debe revisar y acordar con el profesor los alcances y condiciones de seguridad antes de operar robots físicos._
