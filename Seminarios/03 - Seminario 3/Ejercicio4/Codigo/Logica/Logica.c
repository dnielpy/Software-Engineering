#include<stdbool.h>
#include<stdio.h>

bool esDivisible(int x){
    bool stop = false;
    bool divisible = false;
    int cifras = x;
    int unidad;

    while(!stop){
        unidad = cifras % 10;
        cifras = cifras / 10;

        cifras = cifras - (unidad * 2);

        if(cifras <= 77){
            stop = true;
            if(cifras % 7 == 0){
                divisible = true;
            }
        }
    }
    return divisible;
}

