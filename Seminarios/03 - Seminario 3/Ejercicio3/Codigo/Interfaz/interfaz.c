#include <stdio.h>

int pedirPrimerNumero(){
    int x;
    printf("Ingrese el primer n\xa3mero (entero positivo): ");
    while(scanf("%d", &x) == 0 || x <= 0){
        printf("ERROR: Escriba un n\xa3mero entero positivo: ");
        fflush(stdin);
    }
    return x;
}

int pedirSegundoNumero(int y){
    int x;
    printf("Ingrese el segundo n\xa3mero (entero positivo): ");
    while(scanf("%d", &x) == 0 || x == y || x <= 0){
        printf("ERROR: Escriba un n\xa3mero entero positivo y diferente al primer n\xa3mero: ");
        fflush(stdin);
    }
    return x;
}

int terminar(){
    int fin;

    printf("Escriba -1 para finalizar el programa o cualquier n\xa3mero para ejecutarlo nuevamente: ");

    while(scanf("%d", &fin) == 0){
        printf("ERROR: Escriba un valor v\xa0lido.");
        fflush(stdin);
    }

    return fin;
}
