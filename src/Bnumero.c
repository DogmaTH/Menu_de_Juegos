#include "funciones.h"
void Bnumero(){
    srand(time(NULL));
    int n;
    int r=rand() % 201;
    int m=4;
    while(m){
        printf("---------Tienes %d intentos-------\n", m );
        printf("####Adivina del 1 al 200####\n");
        scanf("%d", &n);
        if (n==r){
            printf("Felicidades, encontraste el numero\n");
            break;
        }
        if (n<r){
            printf("Casi, el numero es mayor\n");
        }
        if (n>r){
            printf("Casi, el numero es menor\n");
        }
        m=m-1;
        if (m==0){
            printf("DERROTA\n");
            break;
        }
    }
}

