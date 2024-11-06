#include <stdio.h>
#include <math.h>

int main() {
    float longitud;
    float radio_int;
    float radio_ext;
    float volumen;

    printf("Escribe la longitud: ");
    scanf("%f", &longitud);

    printf("Escribe el radio interno: ");
    scanf("%f", &radio_int);

    printf("Escribe el radio externo: ");
    scanf("%f", &radio_ext);


    volumen = 3.1416 * longitud * ((radio_ext * radio_ext) - (radio_int * radio_int));

    printf("El volumen es: %.2f\n", volumen);

    return 0;
}

