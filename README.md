# Hexagon

## Origen y autor

Hexagon es un juego de mesa creado por Jesús Piñeiro en el año 2022.

## Materiales

Para poder jugar se rquiere un tablero hexagonal, que esté compuesto a su vez por siete hexágonos (sub-hexágonos) en su interior.
Además, será necesario el uso de fichas bicolores, de manera similar a las piezas de las damas.
![Hexagon](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/Hexagon.png)
![HexagonNum](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/HexagonNum.png)

## Objetivo

El objetivo es obtener una puntuación mayor para derrotar al jugador rival.

## Movimientos

### Movimiento inicial:
El jugador inicial, elegido arbitrariamente, debe colocar una ficha en uno de los siete sub-hexágonos del interior. Esto determina en qué hexágono  mayor deberá colocar su ficha el jugador rival.
![PrimerMovimiento](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/PrimerMovimiento.png)

### Movimientos posteriores:
El jugador rival tiene asignado un hexágono predeterminado por el movimiento del jugador inicial, de tal manera que sólo podrá elegir el sub-hexágono donde colocará su ficha. Este sub-hexágono determina el hexagono mayor donde debe colocar el jugador inicial, y así sucesivamente.
![SegundoMovimiento](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/SegundoMovimiento.png)

## Puntuación
Al completar el tablero se realiza el recuento de las puntuaciones de los jugadores. Hay dos formas de conseguir puntuación: completando hexágonos o anillos. Para conseguir la puntuación de cada forma el jugador beneficiado debe tener mayoría de piezas en esa forma. 

### Hexágonos:
Los hexágonos son una de las siete divisiones del tablero completo y proporcionan 7 puntos cada uno.
![Hexagono](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/Hexagono.png)
![EjemploHexagono](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/EjemploHexagono.png)

### Anillos:
Los anillos son las intersecciones entre tres hexágonos, compuestos por las 6 piezas que lo rodean. Esta figura proporciona 6 puntos si se obtiene mayoría en ella, en caso de empate no puntúa ningún jugador.
![Anillo](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/Anillo.png)
![EjemploAnillo](https://github.com/EduardoJunoy/Hexagon/blob/master/Imágenes/EjemploAnillo.png)
