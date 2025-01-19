#include <stdio.h>
#include<stdbool.h>


void calcularFibonacci(int n, int valores[]) {
    valores[0] = 0;

    if (n > 1) {
        valores[1] = 1;
    }

    int i = 2;
    for (i; i < n; i++) {
        valores[i] = valores[i - 1] + valores[i - 2];
    }
}
