#include <stdio.h>
#include <stdbool.h>


int sumaDivisores(int x){

    int suma = 0;

    int i = 1;
    for(i; i < x; i++){
        if(x % i == 0){
            suma += i;
        }
    }

    return suma;
}

int sonAmigos(int x, int y){
    int result = 0;

    if(sumaDivisores(x) == sumaDivisores(y)){
        result = 1;
    }
    return result;
}

int imprimirAmigos(int inicio, int fin){

    int suma = 0;

    printf("Pensando...\n");

    for(inicio; inicio < fin; inicio++){
        int i = inicio;
        for(i; i < fin; i++){
            if(sonAmigos(inicio, i) == 1){
                suma++;
                //printf("\nSon amigos el: %d y el : %d", inicio, i);
            }
        }
    }

    printf("Hay: %d parejas", suma);
}


int main() {

    int x, y;

    printf("Escribe el inicio del rango: ");
    while(scanf("%d", &x) == 0){
        printf("Error.");
    }


    printf("Escribe el final del rango: ");
    while(scanf("%d", &y) == 0 || y < x){
        printf("Error.");
    }

    imprimirAmigos(x, y);

}
