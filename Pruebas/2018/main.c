#include <stdio.h>
#include <stdbool.h>
    
bool esDivisible(int numero){

    bool divisible = true;
    int suma = 0;
    int digitos[5];

    int i = 0;
    for(i; i < 5; i++){
        if(numero != 0){
            int lastDigit = numero % 10;
            digitos[i] = lastDigit;
            numero = numero / 10;
        }
        else{
            digitos[i] = 0;
        }
    }

    int j = 0;
    for(j; j < 5; j++){
        suma += digitos[j];
    }

    if(suma % 3 != 0){
        divisible = false;
    }

    return divisible;
}



int main() {

    int numero = 0;

    printf("Ingrese un valor entre 1 y 32767: ");
    while(scanf("%d", &numero) == 0 || numero < 1 || numero > 32676){
        printf("Escriba el valor correctamente: ");
        fflush(stdin);
    }

    if(esDivisible(numero) == true){
        printf("True");
    }
    else{
        printf("False");
    }
    
}
