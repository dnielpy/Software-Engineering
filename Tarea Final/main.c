#include <stdio.h>
#include <stdbool.h>
    
//Logica
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

//Logica
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
bool llenarAsientoFumador(int asientos[], int size){
    bool llenado = false;

    int i = 0;
    for(i; i < 5 && llenado == false; i++){
        if(asientos[i] == 0){
            asientos[i] = 1;
            llenado = true;
        }
    }

    return llenado;
}

bool llenarAsientoNoFumador(int asientos[], int size){
    bool llenado = false;

    int i = 5;
    for(i; i < 10 && llenado == false; i++){
        if(asientos[i] == 0){
            asientos[i] = 1;
            llenado = true;
        }
    }

    return llenado;
}


//Interfaz

bool seguirLlenando(int vacios){
    int opt = 0;
    bool response = false;

    printf("El avion aun tiene %d asientos vacios. Seleccione 1 para llenarlos, 2 para dejarlos vacios: ", vacios);
    while(scanf("%d", &opt) == 0 || opt < 1 || opt > 2){
        printf("ERROR: Por favor escriba 1 o 2: ");
        fflush(stdin);
    }

    if(opt == 1){
        response = true;
    }

    return response;
}

int selectOption(){
    int opt = 0;
    
    printf("Escriba 1 para Si o 2 para NO");
    printf("Please type 2 for nonsmoking");

    while(scanf("%d", &opt) == 0 || opt < 1 || opt > 2){
        printf("ERROR: Please type 1 or 2: ");
        fflush(stdin);
    }
    return opt;
}

int menu(int asientos[], int size){
    int opt = 0;

    int i = 0;
    for(i; i < size; i++){

        printf("Please type 1 for smoking");
        printf("Please type 2 for nonsmoking");

        while(scanf("%d", &opt) == 0 || opt < 1 || opt > 2){
            printf("ERROR: Please type 1 or 2: ");
            fflush(stdin);
        }

        if(opt == 1){
            if(checkSmokingCapacity(asientos, size) > 0){
                llenarAsientoFumador(asientos, size);
            }
            else{
                printf("Los asientos de fumador ya estan llenos. Desea sentarse en un asiento de No Fumador? :");
                int opcion = selectOption();
                if(opcion == 1 && checkNonSmokingCapacity(asientos, size) > 0){
                    llenarAsientoNoFumador(asientos, size);
                }
            }
            
        }

        if(opt == 2){
            if(checkNonSmokingCapacity(asientos, size) > 0){
                llenarAsientoNoFumador(asientos, size);
            }
            else{
                printf("Los asientos de no fumador ya estan llenos. Desea sentarse en un asiento de Fumador? :");
                int opcion = selectOption();
                if(opcion == 1 && checkSmokingCapacity(asientos, size) > 0){
                    llenarAsientoFumador(asientos, size);
                }
            }
            
        }
    }
    return opt;
}


int main() {
    
    int asientos[10];
    int size = 10;

    menu(asientos, size);

    return 0;
}
