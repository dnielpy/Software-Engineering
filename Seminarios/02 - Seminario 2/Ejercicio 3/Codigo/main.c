#include <stdio.h>

int main(void)
{
    int x = -1;
    int centinela;

    printf("\nEscribe un n\xa3mero entero positivo (Ingrese -1 para terminar el programa): ");

    //Sentencia While con pre condicion
    while(centinela != -1){
        if(scanf("%d", &centinela) == 1){
            if(centinela != -1){
                if(centinela < 0){
                    printf("ERROR: El valor tiene que ser entero positivo.\nVuelva a escribir el n\xa3mero: ");
                    fflush(stdin);
                }
                if(centinela > x){
                    x = centinela;
                }
                    printf("\nHasta el momento, El mayor es: %d\n", x);

            }
        }
        else{
            printf("ERROR: El valor tiene que ser entero positivo.\nVuelva a escribir el n\xa3mero: ");
            fflush(stdin);
        }
    }
    printf("El programa ha finalizado");


    //Sentencia While con pos condicion
    do{
        if(scanf("%d", &centinela) == 1){
            if(centinela != -1){
                if(centinela < 0){
                    printf("ERROR: El valor tiene que ser entero positivo. Vuelva a escribir el n\xa3mero: ");
                    fflush(stdin);
                }
                if(centinela > x){
                    x = centinela;
                }
                if(x > 0){
                    printf("\nHasta el momento, El mayor es: %d\n", x);
                }
            }
        }
        else{
            printf("ERROR: El valor tiene que ser entero positivo. Vuelva a escribir el n\xa3mero: ");
            fflush(stdin);
        }
    }
    while(centinela != -1);

    return 0;
}

