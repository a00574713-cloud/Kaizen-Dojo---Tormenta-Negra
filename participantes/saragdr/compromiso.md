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

Aunque ya había trabajado con motores, sensores y programación durante la carrera de Ingeniería Mecatrónica, e incluso había participado en una competencia de mini-sumo en preparatoria, ya había pasado bastante tiempo y no recordaba bien cómo integrar todos los componentes de este tipo de robot. Mi reto era retomar esos conocimientos y aplicarlos para conseguir que un mini-sumo funcionara de manera autónoma.

**Al finalizar Kaizen Dōjō demostraré que puedo:**

Integrar los motores y sensores de un robot mini-sumo, comprobar su funcionamiento mediante pruebas y realizar los ajustes necesarios para que pueda desplazarse y participar en combates contra otro robot.

**La evidencia o indicador que utilizaré:**

Videos de las pruebas y los combates del mini-sumo, donde se observe su funcionamiento. También utilizaré fotografías del montaje, los códigos de prueba y los registros de los ajustes realizados durante la semana.

**Mi motivación:**

Me interesó este proyecto porque me permitió retomar conocimientos que ya tenía sobre motores, sensores y programación, pero que no había aplicado recientemente en un mini-sumo. Además, quería reforzar mi capacidad para integrar diferentes componentes, identificar errores y encontrar soluciones mediante pruebas.

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

**Mi evidencia final:**

Durante la semana participé en las conexiones, soldaduras y montaje de los motores. También realizamos pruebas utilizando código de Arduino para comprobar su funcionamiento.

Al principio tuvimos algunos problemas porque uno de los motores giraba en sentido contrario debido a la polaridad de las conexiones. Después corregimos ese problema y conseguimos que ambos funcionaran.

El último día, cuando ya habíamos integrado la programación, los motores se volvieron a despegar y las llantas no estaban tocando correctamente el piso. Participé en volver a fijarlos y ajustar su posición, colocándolos un poco más abajo para que las llantas tuvieran contacto con la superficie.

Después de realizar estos ajustes, el mini-sumo pudo desplazarse y participar en combates contra otro robot. Aunque ganamos algunos enfrentamientos y perdimos otros, logramos comprobar el funcionamiento del sistema de motorización y tracción.

**Enlaces a código/CAD/pruebas:**

- [Código de prueba de motores](../../../codigo/pruebas-dia-03/prueba_motores/prueba_motores.ino)
- [Registro de observaciones del Día 3](../../../datos/observaciones-dia-03.md)
- [Pruebas de movimiento del Día 4](../../../datos/e4_pruebas_pwm105_29oct.md)
- [Videos de las pruebas y combates del Día 5](../../../evidencias/dia-05/README.md)

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

**Mi evidencia final:**

Durante la semana participé en las conexiones y pruebas de los sensores del mini-sumo.

Realizamos pruebas de los sensores infrarrojos colocando objetos frente a ellos para comprobar si detectaban su presencia. También utilizamos un dohyō negro con borde blanco para verificar el funcionamiento de los sensores QTR.

Estas pruebas nos ayudaron a comprobar que los sensores respondían y a continuar con la integración del robot.

Posteriormente, terminamos de integrar la programación y conseguimos que el mini-sumo funcionara durante los combates contra otro robot.

Aunque realizamos varias pruebas y enfrentamientos, no tengo un registro individual de cinco encuentros con sus respectivos errores de percepción. Por esta razón, considero que avancé en la integración y verificación de los sensores, pero todavía queda pendiente documentar completamente el kata.

**Enlaces a código/CAD/pruebas:**

- [Código de prueba de sensores](../../../codigo/pruebas-dia-03/prueba_sensores/prueba_sensores.ino)
- [Registro de observaciones del Día 3](../../../datos/observaciones-dia-03.md)
- [Evidencias del Día 3](../../../evidencias/dia-03/README.md)
- [Videos de las pruebas y combates del Día 5](../../../evidencias/dia-05/README.md)

## 3. Planeación y viabilidad

- **Alcances:** 2 de un máximo de 3
- **Katas:** 2
- **Esfuerzo técnico estimado:** 6–8 horas
- **Disponibilidad orientativa:** 8–10 horas de trabajo técnico dentro de las 15 horas presenciales.
- **Estado:** ACTIVIDADES REALIZADAS · PENDIENTE DE VALIDACIÓN DOCENTE

## 4. Mi bitácora Kaizen (cinco sesiones)

| Día | Evidencia que registraré | Estado |
|---|---|---|
| D1 · Atreverse | Definí mi compromiso personal, seleccioné los alcances MS03 y MS06 y establecí como objetivo integrar los motores y sensores de un mini-sumo autónomo. | [x] |
| D2 · Hacer | Participé en la preparación y soldadura de cables, así como en las conexiones de los motores, sensores, batería y controlador. Algunas conexiones quedaron pendientes porque nos faltaba una pieza. | [x] |
| D3 · Medir | Participé en el montaje de los motores, corregí soldaduras y ayudé a realizar pruebas de motores y sensores. Identificamos problemas de alimentación y polaridad que posteriormente corregimos. | [x] |
| D4 · Iterar | Realizamos pruebas de movimiento del robot y comenzamos a registrar lecturas de los sensores QTR para diferenciar las superficies negra y blanca. También se documentaron tres pruebas de avance con PWM 105. | [x] |
| D5 · Demostrar | Terminamos de integrar la programación, colocamos las piezas impresas en 3D y corregimos nuevamente la posición de los motores para que las llantas tocaran el piso. Finalmente, el mini-sumo funcionó y participamos en combates contra otro robot, ganando algunos y perdiendo otros. | [x] |

## 5. Mi protocolo de mejora

### Ciclo Kaizen 1

- **Hipótesis:** Si comprobábamos las conexiones y el sentido de giro de los motores mediante pruebas individuales, podríamos identificar errores antes de integrar completamente el robot.

- **Cambio implementado:** Durante las primeras pruebas identificamos que los motores no funcionaban inicialmente porque faltaba conectar correctamente la alimentación al módulo. Después observamos que uno de ellos giraba en sentido contrario debido a la polaridad. Revisamos las conexiones, corregimos los problemas y volvimos a realizar las pruebas.

- **Métrica base:** Realizamos aproximadamente diez intentos de prueba de motores durante el Día 3. En los primeros intentos identificamos problemas de alimentación y sentido de giro. No registramos mediciones numéricas de velocidad o fuerza.

- **Resultado:** Después de corregir las conexiones conseguimos que los motores funcionaran correctamente durante las pruebas. Esto nos permitió continuar con la integración del mini-sumo y comprobar la importancia de probar los componentes antes de avanzar con el montaje completo.

### Ciclo Kaizen 2

- **Hipótesis:** Si realizábamos pruebas de movimiento y verificábamos la respuesta de los sensores sobre el dohyō, podríamos identificar problemas de integración antes de la demostración final.

- **Cambio implementado:** Realizamos pruebas de los sensores QTR sobre las superficies negra y blanca del dohyō y comenzamos a registrar sus lecturas. También hicimos tres pruebas de avance con PWM 105 para observar el movimiento del robot. Posteriormente, durante el último día, tuvimos que volver a fijar los motores y ajustar su posición porque las llantas no tocaban correctamente el piso.

- **Comparación con V1:** En la primera versión todavía estábamos realizando las conexiones y no habíamos comprobado el funcionamiento de todos los componentes. Después logramos que los motores y sensores funcionaran durante las pruebas individuales. En la versión final ya teníamos la programación integrada, las piezas impresas en 3D colocadas y los motores ajustados para que las llantas tocaran el piso. Esto permitió que el robot se desplazara y participara en combates. No contamos con mediciones equivalentes de velocidad o tracción entre ambas versiones, por lo que la comparación es principalmente funcional.

- **Aprendizaje:** Aprendí que en los proyectos de integración no basta con que la programación y las conexiones funcionen correctamente, ya que la posición física de los componentes también influye mucho en el resultado. Además, reforcé la importancia de trabajar mediante prueba y error, realizando verificaciones desde el inicio para poder identificar y corregir problemas antes de que afecten a todo el sistema.

## 6. Cierre y reflexión

**Antes no podía:**

Aunque ya tenía conocimientos de motores, sensores y programación por mi carrera, e incluso había participado en una competencia de mini-sumo en preparatoria, ya no recordaba bien cómo integrar todos los componentes de este tipo de robot. Tampoco tenía tanta práctica resolviendo los problemas mecánicos y de funcionamiento que pueden aparecer durante su construcción.

**Ahora puedo:**

Retomar y aplicar mis conocimientos para participar en la integración de un mini-sumo autónomo. Durante esta semana reforcé mis habilidades de conexiones, soldaduras, montaje de motores y pruebas de sensores. También aprendí a identificar problemas que no necesariamente están relacionados con la programación, como la posición de los motores o el contacto de las llantas con el piso.

Una de las cosas más importantes que me llevo es que, aunque tengamos una idea de cómo debería funcionar un sistema, es necesario comprobarlo mediante pruebas. Muchas veces aparecen errores que no habíamos considerado y tenemos que ir realizando ajustes hasta conseguir el resultado esperado.

**Cómo lo demostré:**

Lo demostré mediante mi participación durante la construcción e integración del robot, especialmente en las conexiones, soldaduras, montaje y ajustes de los motores.

También participé en las pruebas de los sensores y motores durante la semana.

El último día conseguimos terminar la programación, colocar las piezas impresas en 3D y corregir el problema de las llantas que no tocaban correctamente el piso.

Finalmente, el mini-sumo funcionó y participamos en combates contra otro robot. Ganamos algunos enfrentamientos y perdimos otros, pero logramos comprobar que el robot podía competir.

Los videos de las pruebas y combates del Día 5 servirán como evidencia del funcionamiento final.

**Qué intentaría mejorar después:**

Si tuviera más tiempo, me gustaría mejorar principalmente la fijación de los motores, ya que fue uno de los problemas que más se repitió durante el proyecto. Buscaría una manera de sujetarlos mejor para evitar que se despeguen o cambien de posición durante los combates.

También consideraría agregar un poco más de peso al robot, siempre respetando las restricciones de la competencia, para intentar mejorar su tracción y estabilidad.

Además, realizaría más pruebas de funcionamiento para identificar qué ajustes podrían ayudar al mini-sumo a tener un mejor desempeño durante los enfrentamientos.

---

_Documento generado localmente con el configurador Kaizen Dōjō 2026 · catálogo C2. El estudiante debe revisar y acordar con el profesor los alcances y condiciones de seguridad antes de operar robots físicos._

**Fuente de catálogo:** https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit
