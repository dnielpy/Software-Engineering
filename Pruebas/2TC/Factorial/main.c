#include <stdio.h>
#include <stdbool.h>

int factorial(int n){
    int fact = n;

    int i = n-1;
    for(i; i > 0; i--){
        fact = fact * i; 
    }
    return fact;
}

void imprimir_factoriales(int inicio, int fin){
    while(inicio <= fin){
        printf("\n %d", factorial(inicio));
        inicio++;
    }
}


int main() {

    imprimir_factoriales(2,5);    
}
