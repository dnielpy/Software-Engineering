#include <stdio.h>

int main(void)
{
    float maximo;
    int cant_valores;
    int contador = 0;
    float porcentaje;

    printf("Escriba el n\xa3mero m\xa0ximo: ");
    while(scanf("%f", &maximo) == 0){
        printf("Escriba un valor valido para el n\xa3mero maximo: \n");
        fflush(stdin);
    }

    printf("Escriba la cantidad de valores a comparar: ");
    while(scanf("%d", &cant_valores) == 0 || cant_valores < 0){
        printf("La cantidad de valores tiene que ser un n\xa3mero mayor igual a 0: \n");
        fflush(stdin);
    }
    if(cant_valores > 0){
        printf("Escriba los valores: ");
        int i;
        for(i = 0; i < cant_valores; i++){
            float temp;
            if(scanf("%f", &temp) == 1){
                if(temp < maximo){
                    contador++;
                }
            }
            else{
                printf("Escriba un valor v\xa0lido: ");
                --i;
                fflush(stdin);
            }
        }
        printf("La cantidad de valores menores a %1.f es: %d\n", maximo, contador);
        porcentaje = (contador * 100) / cant_valores * 1.0;
        printf("Representan el %2.f porciento con respecto al total de valores comparados\n", porcentaje);
    }
    else{
        printf("Programa terminado\n");
    }

    return 0;
}

