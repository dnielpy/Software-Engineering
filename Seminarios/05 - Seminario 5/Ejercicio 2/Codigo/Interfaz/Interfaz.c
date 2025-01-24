#include <stdio.h>

// Función para imprimir un arreglo de cadenas
void imprimirArreglo(char resultado[13][6]) {
    int x;
    // Itera sobre cada cadena en el arreglo y la imprime
    for (x = 0; x < 13; x++) {
        printf("%s\n", resultado[x]);
    }
}