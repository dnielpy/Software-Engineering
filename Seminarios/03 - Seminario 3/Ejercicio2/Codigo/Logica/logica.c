#include <stdio.h>
#include <stdbool.h>

//Funcion para sumar los enteros en el intervalo x - y
int sumaEnteros(int x, int y){
    int result = 0;

    for(x; x <= y; x++){
        if(esPar(x)){
            result+= x;
        }
    }

    return result;
}

//Funcion para saber si un numero es par
int esPar(int x){
    bool par = false;
    if(x % 2 == 0){
        par = true;
    }
    return par;
}
