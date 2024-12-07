#include <stdio.h>

int pedirRangoInferior(){
    int x;

    printf("Escriba el rango Inferior: ");

    while(scanf("%d", &x) == 0){
        printf("ERROR: Escriba un n\xa3mero entero: ");
        fflush(stdin);
    }

    return x;
}

int pedirRangoSuperior(){
    int x;

    printf("Escriba el rango Superior: ");

    while(scanf("%d", &x) == 0){
        printf("ERROR: Escriba un n\xa3mero entero: ");
        fflush(stdin);
    }

    return x;
}

void mostrarResultado(int x){
    printf("El resultado es %d\n", x);
}

int repeat(){
    int x;

    printf("Escriba -1 para salir del programa o cualquier n\xa3mero para ejecutar otra vez");

    while(scanf("%d", &x) == 0){
        printf("ERROR: Escriba -1 para salir o cualquier n\xa3mero para ejecutar otra vez");
        fflush(stdin);
    }
    return x;
}



