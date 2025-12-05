#ifndef FUNCIONESTTT_H
#define FUNCIONESTTT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void ttt();

void mostrarTablero(char tablero[3][3]);
int colocarFicha(char tablero[3][3], int fila, int col, char ficha);
int revisarGanador(char tablero[3][3]);

#endif