#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int asientos[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int size = 10;
    int i;

    for (i = 0; i < 10; i++) {
        int opt = menu();

        switch (opt) {
            case 1:
                if (checkSmokingCapacity(asientos, size) > 0) {
                    int asiento = llenarAsientoFumador(asientos);
                    imprimirTicket(asiento);
                } else {
                    printf("No hay asientos disponibles en la secci\xa2n de fumador. Desea sentarse en la secci\xa2n de no fumadores?\n");
                    int option = selectOption();
                    int capacidad = checkNonSmokingCapacity(asientos, size);
                    if (option == 1 && capacidad > 0) {
                        int asiento = llenarAsientoNoFumador(asientos);
                        imprimirTicket(asiento);
                    } else if (option == 1 && capacidad == 0) {
                        printf("Lo sentimos no tenemos mas espacio en el avi\xa2n. El pr\xa2ximo vuelo sale en 3 horas\n");
                    } else if (option == 2) {
                        printf("El pr\xa2ximo vuelo sale en 3 horas\n");
                    }
                }
                break;
            case 2:
                if (checkNonSmokingCapacity(asientos, size) > 0) {
                    int asiento = llenarAsientoNoFumador(asientos);
                    imprimirTicket(asiento);
                } else {
                    printf("\nNo hay asientos disponibles en la secci\xa2n de no fumador. Desea sentarse en la secci\xa2n de fumadores?\n");
                    int option = selectOption();
                    int capacidad = checkSmokingCapacity(asientos, size);
                    if (option == 1 && capacidad > 0) {
                        int asiento = llenarAsientoFumador(asientos);
                        imprimirTicket(asiento);
                    } else if (option == 1 && capacidad == 0) {printf("Lo sentimos no tenemos mas espacio en el avi\xa2n. El pr\xa2ximo vuelo sale en 3 horas\n");
                    } else if (option == 2) {
                        printf("\nEl pr\xa2ximo vuelo sale en 3 horas\n");
                    }
                }
                 break;
           default:
                break;

        }
    }

    printf("\nPrograma finalizado.\n");
    return 0;
}


