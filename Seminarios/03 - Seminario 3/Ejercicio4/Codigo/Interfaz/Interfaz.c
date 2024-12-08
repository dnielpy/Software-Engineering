#include<stdio.h>
#include <stdbool.h>

int pedirNumero(){
    int x;
    printf("Escriba un n\xa3mero entre 1 y 32767: ");

    while(scanf("%d", &x) == 0 || x < 1 || x > 32767){
        printf("ERROR: Escriba un n\xa3mero entre 1 y 32767: ");
        fflush(stdin);
    }

    return x;
}

bool terminar(){
    int x;
    bool stop;

    printf("Escriba -1 para terminar el programa o cualquier n\xa3mero para volver a ejecutar: ");

    while(scanf("%d", &x) == 0){
        printf("ERROR: Escriba -1 para terminar el programa o cualquier n\xa3mero para volver a ejecutar: ");
        fflush(stdin);
    }
    if(x == -1){
       stop = true;
    }
    return stop;
}
