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

<img width="512" height="512" alt="image" src="https://github.com/user-attachments/assets/a8da6afb-ab33-4174-9dfb-a81bc1734624" />

- El programa genera un número aleatorio entre 1 y 200.
- El jugador debe intentar adivinarlo.
- Se indica si el número ingresado es mayor o menor.
- Se usa `rand()` y `srand(time(NULL))` para manejar números aleatorios.

---

### 2. Ahorcado

<img width="612" height="612" alt="image" src="https://github.com/user-attachments/assets/358e60c9-51c6-442a-b1eb-0e80d63cc79a" />

- El juego selecciona aleatoriamente una palabra de una categoría (frutas).
- El jugador debe adivinar la palabra letra por letra.
- Se muestra el progreso en pantalla (“_ _ _ _”).
- El jugador tiene un máximo de **6 intentos**.
- Manejo de cadenas (`string.h`), arreglos y control de errores.

---

###3. Tres en Raya (Tic-Tac-Toe)

<img width="522" height="464" alt="image" src="https://github.com/user-attachments/assets/cf93ef3c-079f-4258-993e-fd20d1e1caa8" />

Incluye dos modos:
- **Jugador vs Jugador**
- **Jugador vs Computadora** 

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

