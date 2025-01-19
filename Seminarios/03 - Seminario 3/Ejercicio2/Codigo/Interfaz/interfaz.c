#include <stdio.h>

//Funcion para pedir el rango Inferior
int pedirRangoInferior(){
    int x;

    printf("Escriba el rango Inferior: ");

    while(scanf("%d", &x) == 0){
        printf("ERROR: Escriba un n\xa3mero entero: ");
        fflush(stdin);
    }

    return x;
}

//Funcion para pedir el rango Inferior
int pedirRangoSuperior(int y){
    int x;

    printf("Escriba el rango Superior: ");

    while(scanf("%d", &x) == 0 || x <= y){
        printf("ERROR: Escriba un n\xa3mero entero y mayor al limite inferior: ");
        fflush(stdin);
    }

    return x;
}

//Funcion para mostrar los resultados
void mostrarResultado(int x){
    printf("La suma de los n\xa3mero enteros pares en ese intervalo es de: %d\n", x);
}

//Funcion para decidir si ejecutar el programa mas de una vez
int repeat(){
    int x;

    printf("Escriba -1 para salir del programa o cualquier n\xa3mero para ejecutar otra vez: ");

    while(scanf("%d", &x) == 0){
        printf("ERROR: Escriba -1 para salir o cualquier n\xa3mero para ejecutar otra vez: ");
        fflush(stdin);
    }
    return x;
}



