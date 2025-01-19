#include <stdio.h>
#include<stdbool.h>

int main(void)
{
    int valores[40] = {0};
    int termino = 0;
    int terminar = 2;

    while(terminar != 1){
        termino = validarEntrada();
        calcularFibonacci(termino, valores);
        imprimirArreglo(valores, termino);
        terminar = terminarPrograma();
    }

    return 0;
}

