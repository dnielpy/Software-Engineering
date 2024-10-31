#include <stdio.h>
#include <math.h>


int main(){

    float venta1,venta2, venta3, venta4, venta5, promedio = 0, porcentaje = 0, total = 0;

    printf("Escriba el importe de la venta 1: ");
    scanf("%f", &venta1);

    printf("Escriba el importe de la venta 2: ");
    scanf("%f", &venta2);

    printf("Escriba el importe de la venta 3: ");
    scanf("%f", &venta3);

    printf("Escriba el importe de la venta 4: ");
    scanf("%f", &venta4);

    printf("Escriba el importe de la venta 5: ");
    scanf("%f", &venta5);

    promedio = (venta1 + venta2 + venta3 + venta4 + venta5) / 5.0;

    porcentaje = (0.09) * promedio;

    total = 200 + porcentaje;

    printf("El vendedor recibe: %.2f", total);

}
