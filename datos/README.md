# Datos de pruebas

[ensayos.csv](ensayos.csv) contiene **siete registros de E4**: seis ejecuciones de evasión (tres a PWM 145 y tres a PWM 105) y una prueba de expulsión de un objeto. [e5_ensayos_30oct.csv](e5_ensayos_30oct.csv) incluye cinco intentos del Día 5 con enlaces a sus videos.

Columnas: `fecha,version,alcance_id,ensayo,condicion,metrica,unidad,valor,resultado,observaciones`.

**Criterios de registro:**
- Una fila por métrica registrada en un ensayo. Usar condiciones reproducibles y unidades explícitas.
- No mezclar unidades ni cambiar definiciones de métrica entre versiones sin anotarlo.
- No colocar nombres completos, matrículas ni datos de terceros.
- En pruebas con videos/volúmenes grandes, guardar fuera de GitHub y vincular desde `evidencias/README.md`.

## Resultados reales de E4

- [Log del Monitor Serie: tres pruebas en el dohyō, 29 de octubre de 2026](e4_monitor_serie_29oct.txt)
- [Calibración y análisis de esas tres pruebas](observaciones-dia-04.md)

## Inventario y evidencias de E5

- [Inventario de 32 recursos](inventario_materiales.csv): transcripción de las 32 filas del inventario previsto en el E1 del **26 de octubre**. Los estados y cantidades son los de esa planeación, **no una verificación física final**; no se han completado campos de verificación sin evidencia.
- [Cinco registros del 30 de octubre](e5_ensayos_30oct.csv) · [videos y fotografías finales](../evidencias/dia-05/README.md).
