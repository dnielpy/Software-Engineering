#include <stdio.h>
#include <stdbool.h>

int sumaEnteros(int x, int y){
    int result = 0;

    if(x != y){
        result = x;
        for(x; x < y; x++){
            if(esPar(x) && (x+2 <= y)){
                result += x+2;
            }
        }
    }
    else if (esPar(x)){
        result = x;
    }

    return result;
}

int esPar(int x){
    bool par = false;
    if(x % 2 == 0){
        return true;
    }

    return par;
}
