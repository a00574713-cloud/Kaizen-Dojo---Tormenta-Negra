---
kit: "Kaizen Dōjō 2026 — Compromiso de misión"
version_catalogo: "C2 / 1.1"
participante: "Claudio Gomez"
equipo: "Equipo 1"
mision: "M01"
plataforma: "Mini-sumo autónomo"
territorio_personal: "D · DOMINAR"
frontera_personal: "F1 · INTEGRAR"
validacion_docente: "PENDIENTE"
---

# Mi compromiso Kaizen · 2026

> **Mi desafío:** Integrar sensores y actuadores para condiciones en la construcción de un robot mini sumo

## 1. Mi misión y mi frontera

- **Participante:** Claudio Gomez
- **Equipo:** Equipo 1
- **Plataforma:** M01 · Mini-sumo autónomo
- **Territorio personal:** D · DOMINAR
- **Frontera personal:** F1 · INTEGRAR

**Hoy todavía no puedo:**

Hoy todavía no puedo armar un robot mini sumo, no tengo experiencia

**Al finalizar Kaizen Dōjō demostraré que puedo:**

Integrar sensores y actuadores para condiciones en la construcción de un robot mini sumo

**La evidencia o indicador que utilizaré:**

Pruebas, mediciones, y espero poder grabar algún video.

**Mi motivación:**

Porque es experiencia en un tema nuevo para mí

## 2. Alcances y katas seleccionados

Esta es mi propuesta individual dentro de una misión colaborativa. Cada alcance requiere evidencia de contribución propia y negociación de viabilidad.

### 1. MS03 · Integrar y verificar motorización y tracción

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** DOMINAR
- **Frontera sugerida:** F1 · INTEGRAR
- **Carta:** D1 · AUTONOMOUS SYSTEM
- **Duración estimada:** 3–4 h
- **Resultado esperado / aceptación:** Conjunto motor–driver–rueda capaz de avanzar, retroceder y girar de forma controlada.
- **Recursos o prerequisitos:** Motores y drivers compatibles, chasis y alimentación protegida.

**Katas elegidos**

- [ ] Identificar polaridad, relaciones de transmisión y límites del driver.
- [ ] Montar motor y rueda; probar sentido de giro con comandos breves.

**Mi evidencia final:** Apoyé en materiales, cables y montaje del robot. El equipo probó motores y reemplazó una PCB dañada. No registré personalmente mediciones de transmisión o límites eléctricos del driver.

**Enlaces a código/CAD/pruebas:** [Pruebas E3](../../docs/entregables/dia-03.md) · [Código de motores](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) · [Mi E5](dias/E5.md)

### 2. MS07 · Crear biblioteca de primitivas de movimiento

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** DOMINAR
- **Frontera sugerida:** F1 · INTEGRAR
- **Carta:** D1 · AUTONOMOUS SYSTEM
- **Duración estimada:** 2–3 h
- **Resultado esperado / aceptación:** Funciones independientes avanzar, retroceder, girar y detener con pruebas unitarias.
- **Recursos o prerequisitos:** Driver de motores y esqueleto de firmware listos.

**Katas elegidos**

- [ ] Programar una función segura de velocidad y parada.

**Mi evidencia final:** El robot ejecutó movimientos programados durante E5, pero la programación de competencia la realizó Joel. No tengo una biblioteca propia de movimientos que pueda acreditar como mi trabajo.

**Enlaces a código/CAD/pruebas:** [Código del equipo](../../codigo/README.md) · [Mi E4](dias/E4.md) · [Alcance MS07](../../alcances/MS07-primitivas/README.md)

### 3. MS10 · Diseñar y comparar una estrategia de ataque

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** SUPERAR
- **Frontera sugerida:** F2 · DECIDIR
- **Carta:** S1 · STRATEGY 2.0
- **Duración estimada:** 4–5 h
- **Resultado esperado / aceptación:** Función de ataque propia y comparación con estrategia estándar bajo el mismo rival/escenario.
- **Recursos o prerequisitos:** FSM y maniobras base disponibles.

**Katas elegidos**

- [ ] Definir condición de disparo y trayectoria de aproximación.
- [ ] Implementar ataque frontal, lateral o condicionado por sensor.

**Mi evidencia final:** El robot participó en cinco encuentros E5, con una victoria y una derrota en las dos peleas. No documenté una estrategia de ataque propia ni dos comparaciones controladas. También diseñé en CAD la carcasa del mini-sumo.

**Enlaces a código/CAD/pruebas:** [Vistas CAD de carcasa](../../evidencias/dia-04/README.md) · [Cinco videos E5](../../evidencias/dia-05/README.md) · [Alcance MS10](../../alcances/MS10-estrategia/README.md)

## 3. Planeación y viabilidad

- **Alcances:** 3 de un máximo de 3
- **Katas:** 5
- **Esfuerzo técnico estimado:** 9–12 horas
- **Disponibilidad orientativa:** 8–10 horas de trabajo técnico dentro de las 15 horas presenciales.
- **Estado:** REQUIERE REVISIÓN: el máximo estimado supera 10 horas

## 4. Mi bitácora Kaizen (cinco sesiones)

| Día | Evidencia que registraré | Estado |
|---|---|---|
| D1 · Atreverse | Diagnóstico y pacto de frontera | [x] [Mi E1](dias/E1.md): organización y diagnóstico |
| D2 · Hacer | Prototipo / primera integración V1 | [x] [Mi E2](dias/E2.md): materiales y cables |
| D3 · Medir | Ensayo base y ciclo Kaizen 1 | [x] [Mi E3](dias/E3.md): integración y primera prueba de motores |
| D4 · Iterar | Ciclo Kaizen 2 y comparación V1–Vn | [x] [Mi E4](dias/E4.md): PCB y CAD de carcasa |
| D5 · Demostrar | Desafío, evidencia y reflexión | [x] [Mi E5](dias/E5.md): demostración y reflexión |

## 5. Mi protocolo de mejora

### Ciclo Kaizen 1

- **Hipótesis:** Si revisábamos conexiones y motores por separado, podríamos encontrar problemas antes de integrar la programación.
- **Cambio implementado:** Apoyé en preparar materiales y cables. Joel y Sara corrigieron alimentación y polaridad de motores durante las pruebas de E3.
- **Métrica base:** Respuesta y sentido de giro observados, sin mediciones individuales por intento atribuibles a mí.
- **Resultado:** Los motores funcionaron después de las correcciones del equipo. No hubo pruebas cuantitativas propias ni pares V1–K1 equivalentes. [Mi E3](dias/E3.md).

### Ciclo Kaizen 2

- **Hipótesis:** Si sustituíamos la tarjeta dañada y revisábamos el montaje, podríamos reanudar las pruebas.
- **Cambio implementado:** Colaboré en la integración con la placa de repuesto, diseñé la carcasa en CAD y la mandamos a imprimir. Después ayudamos con las llantas y el montaje.
- **Comparación con V1:** En E2 había conexiones preparatorias; en E4 continuamos las pruebas después del reemplazo de tarjeta y en E5 el robot funcionó durante la minicompetencia. No medimos tracción, fuerza o corriente comparables.
- **Aprendizaje:** Aprendí que hay que verificar alimentación y conexiones, y que la elección y posición de llantas afectan el agarre del mini-sumo. [Mi E4](dias/E4.md) · [Mi E5](dias/E5.md).

## 6. Cierre y reflexión

**Antes no podía:** No había construido un mini-sumo y todavía no sabía integrar sus componentes.

**Ahora puedo:** Puedo apoyar en la construcción, organizar materiales, preparar conexiones y reconocer problemas mecánicos; me falta practicar la programación de movimientos y ataque por mi cuenta.

**Cómo lo demostré:** Conseguí materiales, apoyé en las conexiones, diseñé la carcasa CAD y participé en el montaje final. El robot realizó cinco intentos con autonomía. [CAD](../../evidencias/dia-04/README.md) · [Videos E5](../../evidencias/dia-05/README.md) · [Mi E5](dias/E5.md).

**Qué intentaría mejorar después:** Haría más pruebas de agarre con las llantas nuevas, revisaría alimentación y practicaría programación de motores y sensores.

---

_Documento generado localmente con el configurador Kaizen Dōjō 2026 · catálogo C2. El estudiante debe revisar y acordar con el profesor los alcances y condiciones de seguridad antes de operar robots físicos._

**Fuente de catálogo:** https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit

