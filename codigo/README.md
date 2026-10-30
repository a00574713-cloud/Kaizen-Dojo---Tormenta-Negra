# Código fuente del robot

Este directorio contiene los programas Arduino del mini-sumo Tormenta Negra, desde las pruebas individuales de motores y sensores hasta las versiones utilizadas durante la minicompetencia.

Cada carpeta conserva su `.ino` y, cuando corresponde, un README de pines, funcionamiento y pruebas. Los programas de E4 y E5 son versiones distintas y no deben confundirse.

## Programas reales del Día 3

- [Prueba de motores](pruebas-dia-03/prueba_motores/prueba_motores.ino)
- [Prueba de cinco sensores](pruebas-dia-03/prueba_sensores/prueba_sensores.ino)
- [Descripción de conexiones y pruebas](pruebas-dia-03/README.md)

Estos sketches se utilizaron para verificar motores y sensores por separado el 28 de octubre. El comportamiento autónomo completo se probó en E4 y E5.

## Prueba de movimiento y borde E4

- [Código integrado de motores y evasión del borde](mini-sumo/prueba_evasion_borde/prueba_evasion_borde.ino)
- [Guía de calibración y prueba](mini-sumo/prueba_evasion_borde/README.md)

**Resultado registrado en E4:** se probaron PWM 145 y PWM 105 en tres ejecuciones de 15 s cada uno. Con PWM 105 no se observaron salidas del dohyō; después se utilizó el [código autónomo de búsqueda y ataque](mini-sumo/tormenta_negra_final/Tormenta_Negra_Final.ino).

## Versión de la minicompetencia E5

- [E5 V1: tres pruebas previas](mini-sumo/tormenta_negra_e5_competencia/README.md) · [sketch V1](mini-sumo/tormenta_negra_e5_competencia/Tormenta_Negra_E5_Competencia.ino).
- [E5 V2: dos peleas](mini-sumo/tormenta_negra_e5_v2_laterales/README.md) · [sketch V2](mini-sumo/tormenta_negra_e5_v2_laterales/Tormenta_Negra_E5_V2_Laterales.ino).
- [Resultados y cinco videos](../evidencias/dia-05/README.md). El E5 V2 fue el último programa instalado; falta corregir la respuesta del control remoto antes de volver a competir.
