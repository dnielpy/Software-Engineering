#include <stdio.h>
#include <Logica/Logica.h>

int main(void) {
    char resultado[20];
    char valores[25];
    char origen[2] = {0,23};

    int j = 0;
    for (j; j < 2; j++) {
        obtener(valores, origen, resultado, j);
        printf("%s ", resultado);
    }
    printf("\n");
    return 0;
}
