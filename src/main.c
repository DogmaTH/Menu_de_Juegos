#include "funciones.h"
#include "funcionesttt.h"
int main (void){
    int op=0;
    while (1){
        printf("-------------Menu de juegos------------\n");
        printf("1.- Busca el numero\n");
        printf("2.- Ahorcado\n");
        printf("3.- 3 en raya\n");
        printf("4.- Salir\n");
        scanf("%d", &op);
        if (op==4){
            printf("Cerrando......");
            break;
        }
        switch (op){
            case 1:
            Bnumero();
            break;
            case 2:
            ahorcado();
            break;
            case 3:
            ttt();
            break;
            default:
            printf("Opción no valida\n");
            break;
    }

}
    return 0;
}