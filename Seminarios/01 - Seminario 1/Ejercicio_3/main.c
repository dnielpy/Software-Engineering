#include <stdio.h>
#include <math.h>

int main(void)
{
    float radio;
    float area;
    float circunferencia;
    float pi = 3.14159;
    int opcion;

     printf("Men\xA3:\n");
     printf("1 Calcular \xA0rea del c\xA1rculo\n");
     printf("2 Calcular longitud de la circunferencia\n");
     printf("Seleccione su opci\xA2n: ");
     scanf("%d", &opcion);

     if(opcion == 1){
        printf("Ingrese el radio del c\xA1rculo: ");
        scanf("%f", &radio);
        if(radio >= 0){
            area = pi * pow(radio, 2);
            printf("El \xA0rea del c\xA1rculo es: %.2f\n", area);
            return 0;
        }
        else{
            printf("El radio tiene que ser mayor que cero");
        }
     }

     if(opcion == 2){
         printf("Ingrese el radio del c\xA1rculo: ");
         scanf("%f", &radio);
         if(radio >= 0){
             circunferencia = 2 * pi * radio;
             printf("La longitud de la circunferencia es: %.2f\n", circunferencia);
             return 0;
         }
         else{
             printf("El radio tiene que ser mayor que cero");
             return 0;
         }
    }
}

