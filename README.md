# TORMENTA NEGRA
### Mini-sumo autónomo · Kaizen Dōjō · Semana Tec 2026

**Equipo:** Joel, Sara, Max y Claudio · **Misión:** M01 · **Lugar:** Laboratorio de Electrónica, CTA, Campus León · **Semana:** 26–30 de octubre de 2026

<table>
<tr>
<td width="50%"><img src="evidencias/dia-05/Tormenta_Negra_E5_final_frente.png" alt="Tormenta Negra terminado, vista frontal" width="440"></td>
<td width="50%"><img src="evidencias/dia-05/Tormenta_Negra_E5_final_lateral.png" alt="Tormenta Negra terminado, vista frontal y lateral" width="440"></td>
</tr>
<tr><td align="center"><em>Vista frontal · Día 5</em></td><td align="center"><em>Vista frontal y lateral · Día 5</em></td></tr>
</table>

Construimos un robot mini-sumo autónomo desde cero. Durante cinco días pasamos de preparar conexiones y revisar componentes a integrar motores, sensores, chasis y programación. El último día participamos en una minicompetencia del salón: **una victoria y una derrota** en dos peleas, además de tres pruebas previas. Registramos tanto los avances como las fallas.

**Accesos principales:** [Videos y fotografías](evidencias/dia-05/README.md) · [Entregables E1–E5](docs/entregables/README.md) · [Portafolios personales](participantes/README.md) · [Alcances y katas](alcances/README.md)

---

## 1. Nuestra misión

**Objetivo:** construir un mini-sumo capaz de desplazarse, identificar el borde del dohyō, detectar a otro robot y reaccionar para intentar expulsarlo sin salirse de la pista.

**Frontera de aprendizaje:** F1 · INTEGRAR. Buscamos aprender a conectar las distintas partes de un sistema, probarlas e identificar por qué una función puede fallar al integrarse con las demás.

| Sistema | Qué integramos | Evidencia |
|---|---|---|
| Estructura mecánica | Chasis de 10 × 10 cm, motores, llantas, carcasa 3D y frente metálico | [Montaje E3](evidencias/dia-03/README.md) · [Fotos finales](evidencias/dia-05/README.md) |
| Electrónica y sensores | Dos QTR de borde, tres JS40F de oponente, alimentación y placa de control | [Pruebas E3](codigo/pruebas-dia-03/README.md) · [Conexiones E5](hardware/conexiones-e5.md) |
| Programación | Evasión del borde, búsqueda y ataque; ajustes de reacción lateral en E5 V2 | [Código Arduino](codigo/README.md) · [Versión E5 V2](codigo/mini-sumo/tormenta_negra_e5_v2_laterales/README.md) |

## 2. Nuestro avance día por día

| Día | Trabajo realizado | Resultado y evidencia |
|---|---|---|
| **26 oct · E1: Atreverse** | Elegimos la misión, completamos Mission Forge y organizamos los alcances individuales. | [E1 colectivo](docs/entregables/dia-01.md) · [Compromisos](participantes/README.md) |
| **27 oct · E2: Hacer** | Preparamos cableado y conexiones de motores y sensores, todavía sin pruebas funcionales. | [E2](docs/entregables/dia-02.md) · [Fotografías](evidencias/dia-02/README.md) |
| **28 oct · E3: Medir** | Armamos el chasis, probamos motores y sensores y corregimos alimentación y polaridad. | [E3](docs/entregables/dia-03.md) · [Cinco fotos](evidencias/dia-03/README.md) |
| **29 oct · E4: Iterar** | Comparamos PWM 145 y 105, recalibramos QTR y probamos la expulsión de un objeto. | [E4](docs/entregables/dia-04.md) · [Datos](datos/e4_pruebas_pwm105_29oct.md) · [Videos](evidencias/dia-04/README.md) |
| **30 oct · E5: Demostrar** | Terminamos ajustes físicos y usamos V1 en tres pruebas previas y V2 en dos peleas. | [E5](docs/entregables/dia-05.md) · [Cinco videos y fotos](evidencias/dia-05/README.md) |

**Evolución de Tormenta Negra**

<table>
<tr>
<td><img src="evidencias/dia-02/IMG_3580.jpg" alt="Conexiones de Día 2" width="270"></td>
<td><img src="evidencias/dia-03/IMG_3588.jpg" alt="Ensamblaje de Día 3" width="270"></td>
<td><img src="evidencias/dia-05/Tormenta_Negra_E5_final_frente.png" alt="Robot terminado el Día 5" width="270"></td>
</tr>
<tr><td align="center"><strong>E2 · Primeras conexiones</strong></td><td align="center"><strong>E3 · Integración física</strong></td><td align="center"><strong>E5 · Robot terminado</strong></td></tr>
</table>

## 3. Evidencias que seleccionamos

Elegimos estos registros porque muestran una decisión técnica, las pruebas realizadas y su resultado.

| Evidencia | Qué queríamos comprobar | Resultado observado |
|---|---|---|
| [Pruebas PWM E4](datos/e4_pruebas_pwm105_29oct.md) | Reducir las salidas del borde | Tres ejecuciones a PWM 145 y tres a PWM 105; **0 salidas observadas a PWM 105**. También cambió la calibración QTR, así que no aislamos el efecto de la velocidad. |
| [Ataque con objeto E4](evidencias/dia-04/README.md) | Detectar y expulsar un objeto de referencia | El robot expulsó un teléfono del dohyō en la prueba registrada. No fue un combate. |
| [Tres pruebas previas E5](evidencias/dia-05/README.md) | Búsqueda, respuesta lateral y permanencia en pista con V1 | Dos resultados favorables de **13 y 5 s** y una salida propia a los **5 s**. |
| [Dos peleas del salón E5](evidencias/dia-05/README.md) | Respuesta de V2 ante otro mini-sumo | **Victoria en 10 s y derrota en 5 s** contra el robot del equipo de Marian. |

[Datos de E4](datos/ensayos.csv) · [Datos de E5](datos/e5_ensayos_30oct.csv) · [Protocolo de pruebas](pruebas/protocolo.md)

## 4. Misión, alcances y aprendizaje individual

Los cuatro seleccionamos alcances del catálogo C2. Cada portafolio contiene los cinco registros personales, el compromiso original y la reflexión final. La demostración fue colectiva, pero las aportaciones y aprendizajes individuales están documentados por separado.

| Integrante | Alcances | Aportación y aprendizaje | Evidencia personal |
|---|---|---|---|
| **Joel** · A00574713 | MS01, MS06 | Trabajó en conexiones, pruebas y programación. Aprendió que un sensor puede detectar un objeto sin que el robot lo persiga correctamente en combate. | [Portafolio](participantes/A00574713/portafolio.md) · [Reflexión E5](participantes/A00574713/dias/E5.md) |
| **Sara** · saragdr | MS03, MS06 | Participó en soldaduras, motores y sensores. Comprobó que una posición incorrecta de los motores afecta el movimiento aunque las conexiones funcionen. | [Portafolio](participantes/saragdr/portafolio.md) · [Reflexión E5](participantes/saragdr/dias/E5.md) |
| **Max** · MaxAmCam | MS01, MS03 | Ayudó en el cableado, montaje y calibración. Aprendió a revisar alimentación y conexiones después de la falla de una tarjeta. | [Portafolio](participantes/MaxAmCam/portafolio.md) · [Reflexión E5](participantes/MaxAmCam/dias/E5.md) |
| **Claudio** · A00574802 | MS03, MS07, MS10 | Consiguió materiales, apoyó en el montaje y diseñó la carcasa. Aprendió a solucionar fallas y a reconocer el efecto de las llantas en el agarre. | [Portafolio](participantes/A00574802/portafolio.md) · [Reflexión E5](participantes/A00574802/dias/E5.md) |

[Ver los cinco alcances y sus katas](alcances/README.md). Ahí se distingue el trabajo realizado de las pruebas individuales que no alcanzamos a completar.

## 5. Reflexión del equipo

Nuestro avance fue conseguir que partes que inicialmente probamos por separado trabajaran como un sistema completo. En E3 corregimos alimentación y polaridad; en E4 ajustamos velocidad y calibración; y en E5 vimos que el robot todavía podía salir de la pista por una respuesta lateral equivocada. Esa falla nos enseñó que comprobar una señal de sensor no garantiza que la decisión de movimiento sea la adecuada.

Las reflexiones individuales explican cómo aplicaríamos este aprendizaje a otros proyectos de Mecatrónica: verificar subsistemas antes de integrarlos, revisar alimentación y fijaciones y medir los resultados después de cada cambio.

**Trabajo por mejorar:** la respuesta lateral y el arranque/paro remoto. El Día 5, el botón 1 arrancaba, el 2 detenía y el 3 no respondió. No se documentó un procedimiento formal de emergencia ni una medición final de peso. Las comparaciones de ciertos katas tampoco fueron controladas. Estas limitaciones no se presentan como pruebas aprobadas.

## 6. Archivos del proyecto

| Carpeta | Qué contiene |
|---|---|
| [Entregables](docs/entregables/README.md) | E1–E5 colectivos |
| [Portafolios](participantes/README.md) | Cuatro compromisos, 20 entregables personales y reflexiones |
| [Alcances](alcances/README.md) | MS01, MS03, MS06, MS07 y MS10 con katas y evidencias |
| [Código](codigo/README.md) | Programas Arduino E3–E5 y última V2 |
| [Hardware](hardware/README.md) | Montaje, vistas CAD, fotografías y conexiones |
| [Datos](datos/README.md) | Resultados E4–E5 e inventario inicial de 32 recursos |
| [Evidencias](evidencias/README.md) | Fotografías y videos por día |

**Revisión docente:** pendiente después de entregar el repositorio. **Siguiente competencia prevista:** RoboLympics, 21 de noviembre de 2026.

[Seguridad y datos](SEGURIDAD_Y_DATOS.md) · [Demostración final](docs/demo-final.md)
