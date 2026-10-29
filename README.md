# KAIZEN DŌJŌ 2026 · Nuestro repositorio de misión

> **Equipo:** Tormenta Negra · **Plataforma:** M01, mini-sumo autónomo · **Dōjō:** CTA, Laboratorio de Electrónica (puesto y autorización por confirmar)
> **Nuestra misión:** Construir desde cero un mini-sumo autónomo que avance, retroceda, gire, detecte a un oponente y reaccione a las lecturas de sus sensores, con pruebas documentadas.
> **Estado actual:** Día 3 (28-10-2026), robot de 10 × 10 cm ensamblado, con pruebas satisfactorias de motores y sensores y los dos programas originales de Arduino guardados; peso por medir y control autónomo como siguiente etapa.

## Empieza aquí — 4 acciones

1. **Selecciona la máquina.** El equipo elige una sola plataforma: **M01 mini-sumo autónomo, M03 seguidor de línea, M04 Tello con Python o M05 AMR con ROS 2**. No hay mini-sumo RC.
2. **Configura tu frontera.** Descarga y abre [Mission Forge C2](herramientas/mission-forge-c2.html) en tu computadora para elegir **1–3 alcances**, katas existentes o propios y generar tu kit `.md`. El [catálogo en Google Sheets](https://docs.google.com/spreadsheets/d/1FKxFzoyu9KJb3RlOwB609vliS5hAtmwWFu2G2zG3Ky4/edit) permite consultar las 48 opciones y 144 katas.
3. **Abre tu carpeta individual.** Las cuatro carpetas ya están en `participantes/<tu-alias>/`, con el compromiso original, el portafolio y las bitácoras `dias/E1.md` a `E5.md`. Completa tus evidencias y reflexión personal en tu carpeta.
4. **Documenta en equipo.** Cada día completen juntos un entregable en `docs/entregables/dia-0X.md`; enlacen códigos, pruebas, fotos y diseños que estén en el repositorio o en almacenamiento institucional con acceso apropiado.

**Importante:** las plantillas están vacías y contienen campos `[por completar]`. Nadie debe inventar datos o copiar como propios los de un compañero. El objetivo no es un robot perfecto: es demostrar qué aprendió y mejoró cada integrante.

## Nuestra misión y personas

**Reto observable:** Movimiento autónomo y detección del oponente, por verificar mediante ensayos reproducibles.  
**Dōjō utilizado:** CTA, Laboratorio de Electrónica, de 9:00 a 12:00; autorización y puesto exacto no registrados.  
**Seguridad:** consultar [requisitos generales](SEGURIDAD_Y_DATOS.md) y [plan del equipo](docs/seguridad.md).

| Alias GitHub | Frontera personal | Carta | Alcances seleccionados | Portafolio individual |
|---|---|---|---|---|
| `A00574713` (Joel) | F1 · INTEGRAR | D1 · AUTONOMOUS SYSTEM | MS01, MS06 | [Ver portafolio](participantes/A00574713/portafolio.md) |
| `saragdr` (Sara) | F1 · INTEGRAR | D1 · AUTONOMOUS SYSTEM | MS03, MS06 | [Ver portafolio](participantes/saragdr/portafolio.md) |
| `MaxAmCam` (Max) | F1 · INTEGRAR | D1 · AUTONOMOUS SYSTEM | MS01, MS03 | [Ver portafolio](participantes/MaxAmCam/portafolio.md) |
| `A00574802` (Claudio) | F1 · INTEGRAR | D1 · AUTONOMOUS SYSTEM; S1 · STRATEGY 2.0 | MS03, MS07, MS10 | [Ver portafolio](participantes/A00574802/portafolio.md) |

## Entregables: cinco días, dos niveles de evidencia

| Día | Entregable de equipo | Entregable personal | Conquista esperada |
|---|---|---|---|
| **1 · Atreverse** | [E1: misión, kits, inventario y dōjō](docs/entregables/dia-01.md) | [E1 personales](participantes/README.md) | Frontera negociada y recursos/espacio verificados |
| **2 · Hacer** | [E2: integración y línea base V1](docs/entregables/dia-02.md) | [E2 personales](participantes/README.md) | Primera función verificable |
| **3 · Medir** | [E3: experimento Kaizen 1](docs/entregables/dia-03.md) | [E3 personales](participantes/README.md) | Diagnóstico, hipótesis y primera mejora |
| **4 · Iterar** | [E4: experimento Kaizen 2](docs/entregables/dia-04.md) | [E4 personales](participantes/README.md) | Comparación V1–K1–K2 y robustez |
| **5 · Demostrar** | [E5: reto final y reflexión](docs/entregables/dia-05.md) | [E5 personales](participantes/README.md) | Demostración de capacidad y contribución individual |

[Ver instrucciones cortas de los cinco entregables](docs/entregables/README.md) · [Cómo organizar el portafolio](participantes/README.md)

## Carpeta técnica del equipo

- [Misión, arquitectura e interfaces](docs/mision-y-arquitectura.md)
- [Alcances y katas](alcances/README.md) · Se crean carpetas solo para los alcances realmente elegidos.
- [Código](codigo/README.md) · [Hardware y CAD](hardware/README.md)
- [Protocolo de pruebas](pruebas/protocolo.md) · [Datos y registros](datos/README.md) · [Evidencias](evidencias/README.md)
- [Demostración final](docs/demo-final.md)
- [Cómo colaborar en GitHub](CONTRIBUTING.md)

## Evolución del robot

| Estado | Cambio o capacidad | Evidencia | Resultado |
|---|---|---|---|
| **Día 2 (antes de V1)** | Sensores y actuadores conectados a la placa; sin ensayos | [E2](docs/entregables/dia-02.md) | V1 funcional pendiente |
| **Día 3: montaje + pruebas exploratorias** | Chasis físico armado; ambos motores responden con batería de 7.4 V; sensores de línea y oponente reportados funcionales | [E3](docs/entregables/dia-03.md) · [evidencias D3](evidencias/dia-03/README.md) | Funciones básicas observadas, sin mediciones numéricas |
| **Kaizen 1 formal** | Comparar condiciones y registrar cinco ensayos reproducibles; aún no hay resultados equivalentes | [Protocolo](pruebas/protocolo.md) | Pendiente |
| **Kaizen 2** | `[segundo cambio y pruebas de robustez]` | `[enlace]` | `[pendiente]` |
| **Demo** | `[misión y desempeño final]` | `[enlace]` | `[pendiente]` |

---

**Acuerdo Kaizen:** *mi logro no se mide solo por si el robot gana, sino por la frontera que yo consigo conquistar y demostrar.* Mantengan el repositorio privado y sigan [SEGURIDAD_Y_DATOS.md](SEGURIDAD_Y_DATOS.md).
