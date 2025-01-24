#include <stdio.h>
#include <Interfaz/Interfaz.h>
#include <Logica/Logica.h>

int main(void) {
    // Inicializa un arreglo bidimensional de caracteres
    char arreglo[5][5] = {
        {'G', 'E', 'T', '0', 'T'},
        {'H', '0', 'T', 'A', 'R'},
        {'0', 'A', 'W', 'A', 'K'},
        {'E', '0', 'I', 'S', '0'},
        {'X', 'X', 'X', '0', '0'}
    };

    // Inicializa un arreglo de índices
    int valores[13] = {4, 15, 7, 0, 20, 17, 11, 20, 2, 13, 4, 17, 20};
    // Inicializa un arreglo para almacenar los resultados
    char resultado[13][6]; 

    // Llama a la función para guardar los caracteres en el arreglo de resultados
    guardarArreglo(arreglo, valores, resultado);
    // Llama a la función para imprimir el arreglo de resultados
    imprimirArreglo(resultado);

    return 0;
}