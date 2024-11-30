#include <stdio.h>
#include <math.h>

int main(void)
{
    float longitud;
    float radio_int;
    float radio_ext;
    float volumen;

    //Longitud
    printf("Escribe la longitud: ");
    scanf("%f", &longitud);

    if (longitud <= 0) {
        printf("ERROR: La longitud debe ser mayor que 0.\n");
        return 0;
    }

    //Radio Interno
    printf("Escribe el radio interno: ");
    scanf("%f", &radio_int);

    if (radio_int <= 0) {
        printf("ERROR: El radio interno debe ser mayor que 0.\n");
        return 0;
    }

    //Radio Externo
    printf("Escribe el radio externo: ");
    scanf("%f", &radio_ext);

    if (radio_ext <= radio_int) {
        printf("ERROR: El radio externo debe ser mayor que el radio interno.\n");
        return 0;
    }

    volumen = 3.1416 * longitud * ((radio_ext * radio_ext) - (radio_int * radio_int));

    printf("El volumen es: %.2f\n", volumen);

    return 0;
}


