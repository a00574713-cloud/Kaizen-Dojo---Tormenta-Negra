---
kit: "Kaizen Dōjō 2026 — Compromiso de misión"
version_catalogo: "C2 / 1.1"
participante: "Max Emiliano Amezcua Camacho"
equipo: "Tormenta Negra"
mision: "M01"
plataforma: "Mini-sumo autónomo"
territorio_personal: "S · SUPERAR"
frontera_personal: "F1 · INTEGRAR"
validacion_docente: "PENDIENTE"
---

# Mi compromiso Kaizen · 2026

> **Mi desafío:** construir un mini sumo autonomo, trabajando diferentes areas en conjunto para lograr el objetivo

## 1. Mi misión y mi frontera

- **Participante:** Max Emiliano Amezcua Camacho
- **Equipo:** Tormenta Negra
- **Plataforma:** M01 · Mini-sumo autónomo
- **Territorio personal:** S · SUPERAR
- **Frontera personal:** F1 · INTEGRAR

**Hoy todavía no puedo:**

Construir un mini sumo desde cero

**Al finalizar Kaizen Dōjō demostraré que puedo:**

construir un mini sumo autonomo

**La evidencia o indicador que utilizaré:**

Mostrando el proceso desde el modelado hasta el ensamblado y programación

**Mi motivación:**

Me motiva a superarme a mi mismo y aprender mucho mas

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

**Mi evidencia final:** Participé en la preparación de conexiones, el montaje del robot y la colocación de la carcasa 3D en E5. La carcasa la diseñó Claudio; no registré CAD personal ni comprobación cuantitativa de rigidez.

**Enlaces a código/CAD/pruebas:** [Fotografías del montaje E3](../../evidencias/dia-03/README.md) · [Fotos finales E5](../../evidencias/dia-05/README.md) · [Mi E5](dias/E5.md)

### 2. MS03 · Integrar y verificar motorización y tracción

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** DOMINAR
- **Frontera sugerida:** F1 · INTEGRAR
- **Carta:** D1 · AUTONOMOUS SYSTEM
- **Duración estimada:** 3–4 h
- **Resultado esperado / aceptación:** Conjunto motor–driver–rueda capaz de avanzar, retroceder y girar de forma controlada.
- **Recursos o prerequisitos:** Motores y drivers compatibles, chasis y alimentación protegida.

**Katas elegidos**

- [ ] Montar motor y rueda; probar sentido de giro con comandos breves.
- [ ] Comparar deslizamiento y respuesta en tres maniobras repetidas.

**Mi evidencia final:** Apoyé a Sara en conexiones y soldaduras y participé en las pruebas de giro de motores. Vimos cómo influía la polaridad; no anoté tres maniobras repetidas con medidas de deslizamiento.

**Enlaces a código/CAD/pruebas:** [Prueba de motores E3](../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) · [Observaciones E3](../../datos/observaciones-dia-03.md) · [Mi E4](dias/E4.md)

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
| D2 · Hacer | Prototipo / primera integración V1 | [x] [Mi E2](dias/E2.md): preparación de conexiones |
| D3 · Medir | Ensayo base y ciclo Kaizen 1 | [x] [Mi E3](dias/E3.md): corrección de sentido de giro |
| D4 · Iterar | Ciclo Kaizen 2 y comparación V1–Vn | [x] [Mi E4](dias/E4.md): nueva PCB y QTR |
| D5 · Demostrar | Desafío, evidencia y reflexión | [x] [Mi E5](dias/E5.md): demostración y reflexión |

## 5. Mi protocolo de mejora

### Ciclo Kaizen 1

- **Hipótesis:** Si corregíamos la polaridad del motor que giraba al revés, podríamos conseguir el movimiento esperado.
- **Cambio implementado:** Apoyé en conexiones, resoldadura de un cable y pruebas de motores durante E3.
- **Métrica base:** Sentido de giro observado (correcto/incorrecto). No anotamos mediciones numéricas ni intentos equivalentes.
- **Resultado:** Los motores giraron en el sentido esperado después de las correcciones. No hay una comparación cuantitativa de tracción. [Mi E3](dias/E3.md).

### Ciclo Kaizen 2

- **Hipótesis:** Si revisábamos alimentación y cableado antes de probar, podríamos continuar la integración con menor riesgo de dañar otra tarjeta.
- **Cambio implementado:** Ayudé a reconectar componentes a la PCB de reemplazo y apoyé la calibración QTR. No se confirmó la causa exacta de la primera falla.
- **Comparación con V1:** En E2 estábamos preparando conexiones; en E3 corregimos giros y en E4 pudimos continuar tras reemplazar la placa. No medí condiciones equivalentes entre versiones.
- **Aprendizaje:** Aprendí a no asumir la causa de una falla eléctrica sin comprobarla y a revisar la alimentación antes de hacer pruebas. [Mi E4](dias/E4.md).

## 6. Cierre y reflexión

**Antes no podía:** No había participado antes en la construcción completa de un mini-sumo autónomo.

**Ahora puedo:** Puedo apoyar en el montaje mecánico, revisar conexiones, comprobar motores e identificar problemas de los sensores. Todavía necesito practicar pruebas cuantitativas de tracción y cableado.

**Cómo lo demostré:** Participé en conexiones y soldaduras, pruebas de giro y calibración QTR; en E5 ayudé a colocar la carcasa y comenté las fallas laterales con Joel. [Cinco videos](../../evidencias/dia-05/README.md) · [Mi E5](dias/E5.md).

**Qué intentaría mejorar después:** Mejoraría la detección lateral, la navaja y tracción de las llantas, y comprobaría el efecto de la carga de batería en pruebas repetidas.

---

_Documento generado localmente con el configurador Kaizen Dōjō 2026 · catálogo C2. El estudiante debe revisar y acordar con el profesor los alcances y condiciones de seguridad antes de operar robots físicos._

**Fuente de catálogo:** https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit

