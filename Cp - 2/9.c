#include <stdio.h>
#include <math.h>


int main(){

    float longitud, radio_int, radio_ext, volumen;

    printf("Escribe la longitud: ");
    scanf("%f", &longitud);

    printf("Escribe el radio interno: ");
    scanf("%f", &radio_int);

    printf("Escribe el radio externo: ");
    scanf("%f", &radio_ext);

    volumen = ((radio_ext * radio_ext) - (radio_int * radio_int)) * 3.1416 * longitud;

    printf("El volumen es: %f", volumen);
}
