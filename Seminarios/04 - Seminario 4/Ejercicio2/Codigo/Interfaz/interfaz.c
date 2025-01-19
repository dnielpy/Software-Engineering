#include <stdio.h>
#include<stdbool.h>

int validarEntrada() {
    int numero = 0;

    printf("Ingrese un n\xa3mero positivo menor que 40: ");

    while (scanf("%d", &numero) == 0 || numero <= 0 || numero > 39) {
        printf("ERROR: Ingrese un n\xa3mero entero positivo.\nIngrese un n\xa3mero positivo: ");
        fflush(stdin);
    }

    return numero;
}

int terminarPrograma(){
    int opt = 0;

    printf("\n\nDesea Terminar el programa?");
    printf("\n1 - Si \n2 - NO\n");

    while(scanf("%d", &opt) == 0 || opt < 1 || opt > 2){
        printf("ERROR: Escriba un valor v\xa0lido.\nEscriba:\n 1 - Si \n2 - NO");
        fflush(stdin);
    }
    return opt;
}

void imprimirArreglo(int arreglo[], int size) {
    int i = 0;
    for (i; i < size; i++) {
        printf(" %d ", arreglo[i]);
    }
}

