---
kit: "Kaizen Dōjō 2026 — Compromiso de misión"
version_catalogo: "C2 / 1.1"
participante: "Sara Gabriela Díaz Rayas"
equipo: "Tormenta Negra"
mision: "M01"
plataforma: "Mini-sumo autónomo"
territorio_personal: "S · SUPERAR"
frontera_personal: "F1 · INTEGRAR"
validacion_docente: "PENDIENTE"
---

# Mi compromiso Kaizen · 2026

> **Mi desafío:** Integrar los motores y sensores de un robot mini-sumo, logrando que avance, retroceda, gire y detecte a un oponente.

## 1. Mi misión y mi frontera

- **Participante:** Sara Gabriela Díaz Rayas
- **Equipo:** Tormenta Negra
- **Plataforma:** M01 · Mini-sumo autónomo
- **Territorio personal:** S · SUPERAR
- **Frontera personal:** F1 · INTEGRAR

**Hoy todavía no puedo:**

Construir desde cero un robot mini-sumo autónomo.

**Al finalizar Kaizen Dōjō demostraré que puedo:**

Integrar los motores y sensores de un robot mini-sumo, logrando que avance, retroceda, gire y detecte a un oponente.

**La evidencia o indicador que utilizaré:**

Mediante un video en el que se observe el funcionamiento del mini-sumo, realizando cinco pruebas de detección del oponente.

**Mi motivación:**

Porque me permitirá aplicar mis conocimientos de programación, electrónica y motores en un proyecto real, además de aprender a integrar diferentes componentes para que funcionen juntos

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

- [x] Montar motor y rueda; probar sentido de giro con comandos breves.

**Mi evidencia final:** Durante la semana participé en las conexiones, soldaduras y montaje de los motores. Realizamos pruebas para comprobar su funcionamiento y corregimos problemas de alimentación, polaridad y posición. El último día volvimos a fijar los motores y los colocamos más abajo para que las llantas tocaran correctamente el piso. Finalmente, el mini-sumo logró desplazarse y participar en combates contra otro robot.

**Enlaces a código/CAD/pruebas:** [Código de prueba de motores](../../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino) · [Pruebas de movimiento del Día 4](../../../datos/e4_pruebas_pwm105_29oct.md) · [Videos del Día 5](../../../evidencias/dia-05/README.md)

### 2. MS06 · Integrar sensores de detección del oponente

- **Tipo:** Preestablecido · catálogo C2
- **Territorio sugerido:** DOMINAR
- **Frontera sugerida:** F1 · INTEGRAR
- **Carta:** D1 · AUTONOMOUS SYSTEM
- **Duración estimada:** 3–4 h
- **Resultado esperado / aceptación:** Mapa de detección útil para decidir dirección de búsqueda y ataque.
- **Recursos o prerequisitos:** Sensores compatibles y rival/obstáculo de referencia.

**Katas elegidos**

- [ ] Ensayar cinco encuentros y documentar errores de percepción.

**Mi evidencia final:** Participé en las conexiones y pruebas de los sensores de detección del oponente. Durante las pruebas utilizamos objetos frente a los sensores infrarrojos para comprobar que respondieran correctamente. Posteriormente, integramos la programación y el mini-sumo logró participar en combates contra otro robot. Aunque comprobamos su funcionamiento, quedó pendiente documentar individualmente los cinco encuentros y los errores de percepción solicitados en este kata.

**Enlaces a código/CAD/pruebas:** [Código de prueba de sensores](../../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino) · [Evidencias del Día 3](../../../evidencias/dia-03/README.md) · [Videos del Día 5](../../../evidencias/dia-05/README.md)

## 3. Planeación y viabilidad

- **Alcances:** 2 de un máximo de 3
- **Katas:** 2
- **Esfuerzo técnico estimado:** 6–8 horas
- **Disponibilidad orientativa:** 8–10 horas de trabajo técnico dentro de las 15 horas presenciales.
- **Estado:** PENDIENTE DE VALIDACIÓN DOCENTE

## 4. Mi bitácora Kaizen (cinco sesiones)

| Día | Evidencia que registraré | Estado |
|---|---|---|
| D1 · Atreverse | Diagnóstico y pacto de frontera | [x] |
| D2 · Hacer | Prototipo / primera integración V1 | [x] |
| D3 · Medir | Ensayo base y ciclo Kaizen 1 | [x] |
| D4 · Iterar | Ciclo Kaizen 2 y comparación V1–Vn | [x] |
| D5 · Demostrar | Desafío, evidencia y reflexión | [x] |

## 5. Mi protocolo de mejora

### Ciclo Kaizen 1

- **Hipótesis:** Si revisábamos las conexiones, la alimentación y la polaridad de los motores, podríamos corregir los problemas de movimiento y comprobar que ambos funcionaran correctamente.
- **Cambio implementado:** Revisamos las conexiones y soldaduras, conectamos correctamente la alimentación del módulo y corregimos la polaridad de uno de los motores que giraba en sentido contrario.
- **Métrica base:** Durante las primeras pruebas, los motores no se movían porque faltaba conectar la batería al módulo. Después, uno de los motores giraba en sentido contrario. Realizamos aproximadamente 10 intentos de prueba de motores, aunque no registramos una medición individual para cada uno.
- **Resultado:** Después de corregir los problemas de alimentación y polaridad, conseguimos que ambos motores funcionaran. Esto nos permitió continuar con la integración del robot y realizar las siguientes pruebas de movimiento.

### Ciclo Kaizen 2

- **Hipótesis:** Si continuábamos probando el movimiento del robot y verificábamos la respuesta de los sensores, podríamos identificar problemas de integración antes de la demostración final.
- **Cambio implementado:** Realizamos pruebas de movimiento con PWM 105 y comenzamos a comprobar la respuesta de los sensores QTR sobre las superficies negra y blanca del dohyō. Posteriormente, durante la integración final, también tuvimos que volver a fijar los motores y ajustar su posición para que las llantas tocaran correctamente el piso.
- **Comparación con V1:** En V1 todavía estábamos realizando las conexiones y no habíamos comprobado el funcionamiento de todos los componentes. Después logramos probar los motores y sensores por separado. En la última versión ya teníamos la programación integrada, las piezas impresas en 3D colocadas y el robot funcionando durante los combates. La mejora fue observable en su funcionamiento, aunque no contamos con mediciones equivalentes de velocidad o tracción para comparar numéricamente todas las versiones.
- **Aprendizaje:** Aprendí que es importante realizar pruebas conforme vamos integrando los componentes, porque así podemos identificar y corregir los errores desde el inicio. También comprobé que no basta con que la programación y las conexiones estén correctas, ya que la posición física de los motores y las llantas puede afectar el funcionamiento de todo el robot.

## 6. Cierre y reflexión

**Antes no podía:** Aunque ya había trabajado con motores y sensores durante la carrera e incluso había participado en una competencia de mini-sumo en preparatoria, ya había pasado bastante tiempo y no recordaba bien cómo se integraban todos los componentes de este tipo de robot. Además, no tenía tanta práctica resolviendo los problemas que pueden aparecer durante su construcción y funcionamiento.

**Ahora puedo:** Retomar y aplicar mis conocimientos de electrónica, programación y motores para integrar los componentes de un mini-sumo. También reforcé mis habilidades para realizar conexiones, soldaduras, montar motores, comprobar su funcionamiento e identificar problemas mecánicos que afectan el movimiento del robot.

**Cómo lo demostré:** Durante la semana participé en las conexiones, soldaduras, montaje y pruebas de los motores y sensores. También ayudé a corregir problemas de alimentación, polaridad y posición de los motores. El último día logramos que el mini-sumo funcionara y participara en combates contra otro robot, de los cuales ganamos algunos y perdimos otros. Esto se podrá comprobar con los videos de las pruebas y los combates del Día 5.

**Qué intentaría mejorar después:** Me gustaría mejorar la fijación de los motores para evitar que se vuelvan a despegar durante las pruebas o los combates. También consideraría agregar un poco más de peso al robot, respetando las restricciones de la competencia, para intentar mejorar su tracción y estabilidad.

---

_Documento generado localmente con el configurador Kaizen Dōjō 2026 · catálogo C2. El estudiante debe revisar y acordar con el profesor los alcances y condiciones de seguridad antes de operar robots físicos._

**Fuente de catálogo:** [https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit)
