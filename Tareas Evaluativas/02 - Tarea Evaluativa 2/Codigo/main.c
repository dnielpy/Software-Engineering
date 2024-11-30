#include <stdio.h>
#include <funciones.c>
#include <math.h>

int main(void)
{
    float lado_a;
    float lado_b;
    float angulo_c;
    float area;
    int grandes = 0;
    int cant_triangulos = 0;
    int centinela = 0;

    //Ingresar la cantidad de triangulos
    printf("Escriba la cantidad de tri\xa0ngulos que desea calcular su \xa0rea: ");
    while(scanf("%d", &cant_triangulos) == 0 || cant_triangulos < 0){
        printf("ERROR: La cantidad de tri\xa0ngulos debe ser un n\xa3mero entero positivo");
        printf("\nEscriba la cantidad de tri\xa0ngulos que desea calcular su \xa0rea: ");
        fflush(stdin);
    }

    while(centinela < cant_triangulos){
        //Validaciones
        if(cant_triangulos > 0){
            //Ingresar Lado A
            printf("\nEscriba la longitud del lado A: ");
            while(scanf("%f", &lado_a) == 0 || lado_a <= 0){
                printf("ERROR: La longitud del lado A debe ser un n\xa3mero mayor igual a 0\n");
                printf("Escriba la longitud del lado A: ");
                fflush(stdin);
            }

            //Ingresar Lado B
            printf("Escriba la longitud del lado B: ");
            while(scanf("%f", &lado_b) == 0 || lado_b <= 0){
                printf("ERROR: La longitud del lado B debe ser un n\xa3mero mayor igual a 0\n");
                printf("Escriba la longitud del lado B: ");
                fflush(stdin);
            }

            //Ingresar Angulo C
            printf("Escriba la amplitud del \xa0ngulo C en grados: ");
            while(scanf("%f", &angulo_c) == 0 || angulo_c <= 0 || angulo_c >= 180){
                printf("ERROR: La amplitud del \xa0ngulo C debe ser un n\xa3mero mayor que 0 y menor que 180\n");
                printf("Escriba la amplitud del \xa0ngulo C: ");
                fflush(stdin);
            }
        }

        //Operaciones
        centinela++;
        area = calcularArea(lado_a, lado_b, angulo_c);  //Calcular area
        printf("El \xa0rea del tri\xa0ngulos %d es: %.2f\n", centinela, area);

        //Clasificacion segun su area
        if(area < 12){
            printf("Se clasifica como: PEQUE\xa5O\n");
        }
        else if(area > 12 && area < 42){
            printf("Se clasifica como: MEDIANO\n");
        }
        else{
            grandes++;
            printf("Se clasifica como: GRANDE\n");
        }
    }

    //Muestra los datos obtenidos o termina el programa si la cantidad de triangulos es 0
    if(cant_triangulos > 0){
        float porcentaje = calcularPorcentaje(grandes, cant_triangulos);
        printf("\nSe clasificaron como grandes: %d tri\xa0ngulos y representan un porcentaje del total de: %.2f", grandes, porcentaje);
        printf("\nEl programa ha terminado\n");
    }
    else{
        printf("\nEl programa ha terminado\n");
    }

    return 0;
}

