#include <stdio.h>

void guardarArreglo(char arreglo[5][5], int valores[13], char resultado[13][6]) {
    int i;
    for (i = 0; i < 13; i++) {
        int indice = valores[i];
        int fila = indice / 5;
        int columna = indice % 5;
        int j = 0;

        // Copia caracteres hasta encontrar '0' o el final de la fila
        while (columna < 5 && arreglo[fila][columna] != '0') {
            resultado[i][j++] = arreglo[fila][columna++];
        }

        // Salta a la siguiente fila si es necesario
        while (columna >= 5 && fila < 4) {
            fila++;
            columna = 0;
            while (columna < 5 && arreglo[fila][columna] != '0') {
                resultado[i][j++] = arreglo[fila][columna++];
            }
        }

        resultado[i][j] = '\0'; // Termina la cadena
    }
}