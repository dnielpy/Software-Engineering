#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int resultado;

    printf("Escriba el valor A: ");
    while(scanf("%d", &a) == 0){
        printf("ERROR: El valor de A tiene que ser un numero entero \n");
        fflush(stdin);
    }

    printf("Escriba el valor B: ");
    while((scanf("%d", &b) == 0) || b < 0){
         printf("ERROR: El valor de B tiene que ser un numero entero positivo\n");
         printf("Escriba el valor B: ");
         fflush(stdin);
    }

    if(b > 0){
        resultado = a;
        int x;
        for(x = 1; x < b; x++){
            resultado *= a;
        }

        printf("El resultado es: %d\n", resultado);
    }
    else{
        printf("El resultado es: 1\n");
    }
}

