#include <stdio.h>
#include <stdbool.h>

void imprimirTicket(int asiento){
    if(asiento >= 5){
        printf("\nSu asiento es el n\xa3mero: %d y se encuentra en la secci\xa2n de no fumadores", asiento+1);
    }
    if(asiento < 5){
        printf("\nSu asiento es el n\xa3mero: %d y se encuentra en la secci\xa2n de fumadores", asiento+1);
    }
}

int selectOption(){
    int opt = 0;

    printf("Escriba:\n1 - Si \n2 - NO");

    while(scanf("%d", &opt) == 0 || opt < 1 || opt > 2){
        printf("ERROR: Escriba un valor v\xa0lido.\nEscriba:\n 1 - Si \n2 - NO");
        fflush(stdin);
    }
    return opt;
}

int menu(){
    int opt = 0;

    printf("\n\nSELECCIONE SU TIPO DE ASIENTO: \n1 - Asiento de Fumador\n2 - Asiento de No Fumador \n");

    while(scanf("%d", &opt) == 0 || opt < 1 || opt > 2){
        printf("ERROR: Escriba un valor v\xa0lido.");
        fflush(stdin);
    }
    return opt;
}
