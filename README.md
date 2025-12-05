# 🎮 Proyecto Final – Menú de 3 Juegos en C

Este proyecto es un trabajo práctico, implementado completamente en **lenguaje C**.  
Consiste en un menú interactivo que permite al usuario elegir entre **tres juegos clásicos**, cada uno diseñado para demostrar diferentes conceptos fundamentales del lenguaje.

---

##Contenido del Proyecto

El programa principal presenta un menú con las siguientes opciones:

1. ** Adivina el Número**  
2. ** Ahorcado**  
3. ** Tres en Raya (Tic-Tac-Toe)**  
4. ** Salir**

Cada juego fue implementado en archivos separados, utilizando cabeceras personalizadas para mantener una estructura modular y organizada.


### 1. Adivina el Número
- El programa genera un número aleatorio entre 1 y 100.
- El jugador debe intentar adivinarlo.
- Se indica si el número ingresado es mayor o menor.
- Se usa `rand()` y `srand(time(NULL))` para manejar números aleatorios.

---

### 2. Ahorcado
- El juego selecciona aleatoriamente una palabra de una categoría (frutas).
- El jugador debe adivinar la palabra letra por letra.
- Se muestra el progreso en pantalla (“_ _ _ _”).
- El jugador tiene un máximo de **6 intentos**.
- Manejo de cadenas (`string.h`), arreglos y control de errores.

---

###3. Tres en Raya (Tic-Tac-Toe)
Incluye dos modos:
- **Jugador vs Jugador**
- **Jugador vs Computadora** (la IA elige movimientos aleatorios)

Características:
- Tablero 3×3 mostrado en consola.
- Validación de movimientos.
- Detección de líneas ganadoras (filas, columnas, diagonales).
- Funciones modulares: mostrar tablero, colocar ficha, revisar ganador, etc.

---

## Tecnologías y conceptos utilizados

Este proyecto aplica diversos conceptos fundamentales del lenguaje C:

- Variables, condicionales y ciclos
- Uso de funciones personalizadas
- Archivos `.h` y `.c` para modularidad
- Arreglos y matrices
- Manejo de cadenas con `string.h`
- Generación de números aleatorios

