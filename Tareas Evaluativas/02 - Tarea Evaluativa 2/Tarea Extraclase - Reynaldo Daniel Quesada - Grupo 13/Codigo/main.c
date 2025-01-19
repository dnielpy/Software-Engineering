#include <stdio.h>
#include <Interfaz/Interfaz.h>
#include <stdbool.h>
#include <Logica/Logica.h>

int main(void)
{
    int cantTriangulos = 0;
    int iteraciones;
    float ladoA;
    float ladoB;
    float anguloC;
    float area;
    float porcentaje = 0;
    int grandes = 0;

    cantTriangulos = pedirCantTriangulos();
    iteraciones = cantTriangulos;

    while(iteraciones > 0){
        ladoA = pedirLado(1);
        ladoB = pedirLado(2);
        anguloC = pedirAngulo();
        area = calcularArea(ladoA, ladoB, anguloC);
        if(clasificar(area) == true){
            grandes++;
        }
        iteraciones--;
    }

    porcentaje = calcularPorcentaje(grandes, cantTriangulos);
    resumen(porcentaje, grandes);
    return 0;
}

