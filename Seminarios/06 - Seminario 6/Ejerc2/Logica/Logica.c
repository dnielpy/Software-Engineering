#include <stdio.h>

void obtener(char valores[], char origen[], char resultado[], int indiceDeorigen) {
    valores[0] = 'E';
    valores[1] = 13;

    valores[2] = ' ';
    valores[3] = 'C';
    valores[4] = 23;

    valores[5] = ' ';
    valores[6] = ' ';
    valores[7] = ' ';
    valores[8] = ' ';
    valores[9] = ' ';
    valores[10] = 'P';
    valores[11] = 20;

    valores[12] = ' ';
    valores[13] = 'S';
    valores[14] = 3;

    valores[15] = ' ';
    valores[16] = ' ';
    valores[17] = ' ';
    valores[18] = ' ';
    valores[19] = ' ';
    valores[20] = 'E';
    valores[21] = -1;

    valores[22] = ' ';
    valores[23] = 'A';
    valores[24] = 10;


    int i = 0;
    int indice = origen[indiceDeorigen];

    resultado[i++] = valores[indice];

    while (valores[indice+1] != -1) {
        indice = valores[indice+1];
        resultado[i++] = valores[indice];
    }

    resultado[i] = '\0';
}
