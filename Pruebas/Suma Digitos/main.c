#include <stdio.h>
#include <stdbool.h>



//Sumar Digitos
int sumarDigitos(int x){

    int suma = 0;

    while(x > 0){
        suma += x % 10;
        x = x / 10;
    }
    
    return suma;
}

//Imprimir sumas
void imprimirSumas(int inicio, int fin){
    while(inicio <= fin){
        printf("\n %d", sumarDigitos(inicio));
        inicio++;
    }
}


int main() {

    int x, y;

    printf("Escriba el inicio del intervalo: ");
    while(scanf("%d", &x) == 0){
        printf("Escribelo denuevo xd: ");
        fflush(stdin);
    }

    printf("Escriba el fin del intervalo: ");
    while(scanf("%d", &y) == 0 || y < x){
        printf("Escribelo denuevo xd: ");
        fflush(stdin);
    }
    
    imprimirSumas(x, y);

}
