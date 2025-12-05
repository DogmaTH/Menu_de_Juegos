#include "funciones.h"
void ahorcado() {
    static char *frutas[]={"papaya", "mandarina", "manzana", "pera", "sandia", "banana", "kiwi"};
    int total=7;
    srand(time(NULL));
    int indice=rand() % total;
    char *palabra=frutas[indice];
    int largo=strlen(palabra);
    char progreso[largo + 1];
    for (int i=0; i<largo; i++) {
        progreso[i]='_';
    }
    progreso[largo]='\0';
    int intentos=intentosM;
    char letra;
    int aciertos = 0;
    int yaEstaba;
    printf("\n---------- A H O R C A D O ----------\n");
    printf("Palabra seleccionada: (frutas)\n\n");

    while (intentos>0 && aciertos<largo) {
        printf("\nIntentos restantes: %d\n", intentos);
        printf("Palabra: %s\n", progreso);
        printf("Ingresa una letra: ");
        scanf(" %c", &letra);
        yaEstaba=0;
        int acertoLetra=0;
        for (int i=0; i<largo; i++) {
            if (progreso[i]==letra) {
                yaEstaba=1;
            }
        }
        if (yaEstaba) {
            printf("Ya habías usado esa letra.\n");
            continue;
        }
        for (int i=0; i<largo; i++) {
            if (palabra[i]==letra) {
                progreso[i]=letra;
                aciertos++;
                acertoLetra=1;
            }
        }
        if (!acertoLetra){
            intentos--;
            printf("Letra incorrecta...\n");
        }
    }
    if (aciertos==largo){
        printf("\nFelicidades! Adivinaste la palabra: %s\n", palabra);
    } else {
        printf("\nPerdiste... La palabra era: %s\n", palabra);
    }
}
