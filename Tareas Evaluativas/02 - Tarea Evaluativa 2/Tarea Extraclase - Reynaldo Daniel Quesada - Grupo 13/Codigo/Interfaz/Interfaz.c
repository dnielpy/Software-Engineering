#include <stdio.h>
#include <stdbool.h>

//Ingresar la cantidad de triangulos
int pedirCantTriangulos(){
    int cantTriangulos = 0;
    printf("Escriba la cantidad de tri\xa0ngulos que desea calcular su \xa0rea: ");
    while(scanf("%d", &cantTriangulos) == 0 || cantTriangulos < 0){
        printf("ERROR: La cantidad de tri\xa0ngulos debe ser un n\xa3mero entero positivo");
        printf("\nEscriba la cantidad de tri\xa0ngulos que desea calcular su \xa0rea: ");
        fflush(stdin);
    }
    return cantTriangulos;
}


//Funcion para ingresar los lados
float pedirLado(int lado){
    float longitud;

    switch (lado) {
    case 1:
        //Ingresar Lado A
        printf("\nEscriba la longitud del lado A: ");
        while(scanf("%f", &longitud) == 0 || longitud <= 0){
            printf("ERROR: La longitud del lado A debe ser un n\xa3mero mayor igual a 0\n");
            printf("Escriba la longitud del lado A: ");
            fflush(stdin);
        }
        break;
    case 2:
        //Ingresar Lado B
        printf("Escriba la longitud del lado B: ");
        while(scanf("%f", &longitud) == 0 || longitud <= 0){
            printf("ERROR: La longitud del lado B debe ser un n\xa3mero mayor igual a 0\n");
            printf("Escriba la longitud del lado B: ");
            fflush(stdin);
        }
        break;
    }

    return longitud;
}

//Funcion para ingresar el angulo
float pedirAngulo(){
    float amplitud;
    //Ingresar Angulo C
    printf("Escriba la amplitud del \xa0ngulo C en grados: ");
    while(scanf("%f", &amplitud) == 0 || amplitud <= 0 || amplitud >= 180){
        printf("ERROR: La amplitud del \xa0ngulo C debe ser un n\xa3mero mayor que 0 y menor que 180\n");
        printf("Escriba la amplitud del \xa0ngulo C: ");
        fflush(stdin);
    }

    return amplitud;
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

void resumen(float porcentaje, int grandes){
    printf("\nSe clasificaron como grandes: %d tri\xa0ngulos y representan un porcentaje del total de: %.2f", grandes, porcentaje);
    printf("\nEl programa ha terminado\n");
}







