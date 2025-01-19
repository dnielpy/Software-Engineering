#include <stdio.h>
#include <stdbool.h>


int checkCapacity(int arreglo[], int size){
    int counter = 0;

    int i = 0;
    for(i; i < size; i++){
        if(arreglo[i] == 0){
            counter++;
        }
    }

    return counter;
}


int checkSmokingCapacity(int arreglo[], int size){
    int counter = 0;

    int i = 0;
    for(i; i < 5; i++){
        if(arreglo[i] == 0){
            counter++;
        }
    }

    return counter;
}

int checkNonSmokingCapacity(int arreglo[], int size){
    int counter = 0;

    int i = 5;
    for(i; i < 10; i++){
        if(arreglo[i] == 0){
            counter++;
        }
    }

    return counter;
}

//Insertar pasajero
int llenarAsientoFumador(int asientos[]) {
    int asiento = -1;

    int i = 0;
    for (i; i < 5 && asiento == -1; i++) {
        if (asientos[i] == 0) {
            asientos[i] = 1;
            asiento = i;
        }
    }

    return asiento;
}

int llenarAsientoNoFumador(int asientos[]) {
    int asiento = -1;

    int i = 5;
    for (i; i < 10 && asiento == -1; i++) {
        if (asientos[i] == 0) {
            asientos[i] = 1;
            asiento = i;
        }
    }

    return asiento;
}
