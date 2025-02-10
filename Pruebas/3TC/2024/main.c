#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


int findValue(int arreglo[], int size, int value){
    int tam = size;

    int i;
    int contador = 0;
    for(i = 0; i < size; i++){
        if(arreglo[i] == value){
            arreglo[i] = arreglo[i]+2;
            contador++;
        }
    }
    if(contador == 0){
        arreglo[size] = value;
        tam++; 
    }

    return tam;
}


int main() {
    char ch = '7';
    char ch2 = 'a';

    // isdigit(): Comprueba si es un dígito.
    if (isdigit(ch)) {
        printf("'%c' es un dígito.\n", ch);
    }

    // isalpha(): Comprueba si es una letra.
    if (isalpha(ch2)) {
        printf("'%c' es una letra.\n", ch2);
    }

    // toupper(): Convierte a mayúscula.
    printf("'%c' en mayúscula: '%c'\n", ch2, toupper(ch2));

    // tolower(): Convierte a minúscula.
    char ch3 = 'Z';
    printf("'%c' en minúscula: '%c'\n", ch3, tolower(ch3));

    return 0;
}


    
