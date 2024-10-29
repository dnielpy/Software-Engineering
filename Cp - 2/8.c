#include <stdio.h>

int main(){

    int lin1, lin2, lin3, ventas, ganancia;
    float promedio_lineas, cumplimiento_norma;

    printf("Escriba la produccion de la Linea 1: ");
    scanf("%d", &lin1);
    printf("Escriba la produccion de la Linea 2: ");
    scanf("%d", &lin2);
    printf("Escriba la produccion de la Linea 3: ");
    scanf("%d", &lin3);

    ventas = lin1 + lin2 + lin3;

    promedio_lineas = ventas / 3;

    cumplimiento_norma = (ventas / 450.00) * 100.00;

    ganancia = (15 - 10) * ventas;

    printf("El promedio de produccion de las 3 lineas es de: %.2f \n", promedio_lineas);
    printf("El porcentaje de cumplimiento de la norma de la fabrica es de: %.2f \n", cumplimiento_norma);
    printf("Ganancia de la fabbrica: %d \n", ganancia);
}
