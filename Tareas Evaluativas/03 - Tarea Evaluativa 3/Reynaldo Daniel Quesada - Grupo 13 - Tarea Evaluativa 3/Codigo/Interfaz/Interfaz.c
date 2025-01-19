#include <stdio.h>
#include <stdbool.h>

//Ingresar la cantidad de triangulos
int pedirContinuar(){
    int continuar;
    printf("Escriba 0 para terminar el programa o cualquier n\xa3mero natural para calcular una nueva \xa0rea: ");
    while(scanf("%d", &continuar) == 0 || continuar < 0){
        printf("ERROR: La entrada debe ser un n\xa3mero entero positivo");
        printf("\nInt\xa1telo de nuevo: ");
        fflush(stdin);
    }
    return continuar;
}


//Funcion para ingresar los lados
float pedirAmplitud(int lado){
    float longitud = 0;

    if(lado == 1 || lado == 2){
        //Ingresar Lado
        printf("\nEscriba la longitud del lado %d: ", lado);
        while(scanf("%f", &longitud) == 0 || longitud <= 0){
            printf("ERROR: La longitud del lado %d debe ser un n\xa3mero mayor a 0\n", lado);
            printf("Escriba la longitud del lado %d: ", lado);
            fflush(stdin);

        }
    }
    else{
        //Ingresar Angulo C
        printf("Escriba la amplitud del \xa0ngulo C en grados: ");
        while(scanf("%f", &longitud) == 0 || longitud <= 0 || longitud >= 180){
            printf("ERROR: La amplitud del \xa0ngulo C debe ser un n\xa3mero mayor que 0 y menor que 180\n");
            printf("Escriba la amplitud del \xa0ngulo C: ");
            fflush(stdin);
        }
    }


    return longitud;
}


//Clasificar segun su area
bool clasificar(float area){
    bool grande = false;

    printf("El area es de: %.4f\n", area);

    //Clasificacion segun su area
    if(area < 12){
        printf("Se clasifica como: PEQUE\xa5O\n");
    }
    else if(area > 12 && area < 42){
        printf("Se clasifica como: MEDIANO\n");
    }
    else{
        grande = true;
        printf("Se clasifica como: GRANDE\n");
    }

    return grande;
}

void resumen(float porcentaje, int grandes, float promedio, int mayores){
    printf("\nResumen de los calculos: \n");
    printf("Porcentaje de tri\xa0ngulos grandes: %.2f\n", porcentaje);
    printf("Cantidad de tri\xa0ngulos grandes: %d \n", grandes);
    printf("Promedio de las \xa0reas: %.2f\n", promedio);
    printf("Cantidad de areas mayores al promedio: %d\n", mayores);
}







