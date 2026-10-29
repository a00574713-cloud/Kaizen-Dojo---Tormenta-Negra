# Código fuente del robot

Aquí se incorpora **solo el código de la plataforma elegida por el equipo**. No es necesario mantener cuatro proyectos en cada repositorio.

Sugerencias de estructura concreta (adaptar al hardware real):
- **M01 Mini-sumo autónomo:** `codigo/mini-sumo/` con `main.ino`, `sensors.*`, `motors.*`, `strategy.*`, documentación de pinout.
- **M03 Seguidor de línea:** `codigo/seguidor/` con proyecto Arduino/PlatformIO, módulos de sensores, control y motores.
- **M04 Tello Python:** `codigo/tello/` con `main.py`, `mission.py`, `vision.py`, `safety.py`, `requirements.txt`; validar SDK compatible.
- **M05 AMR ROS 2:** `codigo/amr_ws/src/<paquete_ros>/` para nodos Python/C++, paquetes, launch y config; nunca subir `build/`, `install/` ni `log/`.

Especificar versiones, comandos de ejecución, dependencias y procedimiento de parada segura en un README del proyecto de código.

## Programas reales del Día 3

- [Prueba de motores](pruebas-dia-03/prueba_motores/prueba_motores.ino)
- [Prueba de cinco sensores](pruebas-dia-03/prueba_sensores/prueba_sensores.ino)
- [Descripción de conexiones y pruebas](pruebas-dia-03/README.md)

Estos sketches se utilizaron para verificar subsistemas por separado; el programa autónomo del mini-sumo se desarrollará en una etapa posterior.

## Prueba de movimiento y borde E4

- [Código integrado de motores y evasión del borde](mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino)
- [Guía de calibración y prueba](mini-sumo/prueba_evasion_borde/README.md)

**Estado:** código preparado para probar el 29 de octubre; arranque mediante Monitor Serie en esta versión. La conexión del receptor de control remoto debe integrarse después de confirmar pin y códigos.
