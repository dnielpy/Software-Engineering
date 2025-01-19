#include <stdio.h>
#include <Interfaz/Interfaz.h>
#include <stdbool.h>
#include <Logica/Logica.h>

int main(void)
{

    float areas[1000];

    float promedio = 0;
    int mayoresQuePromedio = 0;
    int cantTriangulos = 0;
    int iteraciones;
    float ladoA;
    float ladoB;
    float anguloC;
    float area;
    float porcentaje = 0;
    int grandes = 0;

    do{
        cantTriangulos++;

        ladoA = pedirAmplitud(1);
        ladoB = pedirAmplitud(2);
        anguloC = pedirAmplitud(3);

        area = calcularArea(ladoA, ladoB, anguloC);

        if(clasificar(area) == true){
            grandes++;
        }

        areas[cantTriangulos-1] = area;
        iteraciones = pedirContinuar();
    }
    while(iteraciones > 0);


    if(cantTriangulos > 0){
        promedio = obtenerPromedio(areas, cantTriangulos);
        mayoresQuePromedio = contarMayoresQuePromedio(areas, cantTriangulos, promedio);
        porcentaje = calcularPorcentaje(grandes, cantTriangulos);
        resumen(porcentaje, grandes, promedio, mayoresQuePromedio);
    }
    else{
        printf("El programa ha terminado...\n");
    }

    return 0;
}

