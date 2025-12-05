#include "funcionesttt.h"

void mostrarTablero(char tablero[3][3]) {
    printf("\n");
    for (int i=0; i<3; i++) {
        printf(" ");
        for (int j=0; j<3; j++) {
            printf(" %c ", tablero[i][j]);
            if (j<2) printf("|");
        }
        printf("\n");
        if (i<2) printf("-----------\n");
    }
    printf("\n");
}

int colocarFicha(char tablero[3][3], int fila, int col, char ficha) {
    if (fila<0 || fila>2 || col<0 || col>2) return 0;
    if (tablero[fila][col]==' ') {
        tablero[fila][col]=ficha;
        return 1;
    }
    return 0;
}

int revisarGanador(char tablero[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] != ' ' && tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2])
            return tablero[i][0];
        if (tablero[0][i] != ' ' && tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i])
            return tablero[0][i];
    }
    if (tablero[0][0] != ' ' && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2])
        return tablero[0][0];
    if (tablero[0][2] != ' ' && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0])
        return tablero[0][2];
    return ' ';
}

void ttt() {
    char tablero[3][3];
    int modo;
    int fila, col;
    int turnos = 0;
    char ganador = ' ';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tablero[i][j] = ' ';

    printf("\n--- 3 EN RAYA ---\n");
    printf("Elige modo de juego:\n");
    printf("1. Jugador vs Jugador\n");
    printf("2. Jugador vs Computadora\n");
    printf("Opcion: ");
    scanf("%d", &modo);

    if (modo != 1 && modo != 2) {
        printf("Modo no valido. Saliendo...\n");
        return;
    }

    srand(time(NULL)); 

    while (turnos < 9 && ganador == ' ') {
        mostrarTablero(tablero);

        if ((turnos % 2 == 0) || modo == 1) {
            char jugador = (turnos % 2 == 0) ? 'X' : 'O';
            printf("Turno jugador %c. Ingresa fila y columna (0-2): ", jugador);
            scanf("%d %d", &fila, &col);
            if (!colocarFicha(tablero, fila, col, jugador)) {
                printf("Movimiento invalido. Intenta de nuevo.\n");
                continue;
            }
        } else {
            printf("Turno computadora (O):\n");
            do {
                fila = rand() % 3;
                col = rand() % 3;
            } while (!colocarFicha(tablero, fila, col, 'O'));
        }

        ganador = revisarGanador(tablero);
        turnos++;
    }

    mostrarTablero(tablero);

    if (ganador != ' ')
        printf("El ganador es: %c!\n", ganador);
    else
        printf("Empate!\n");

}
