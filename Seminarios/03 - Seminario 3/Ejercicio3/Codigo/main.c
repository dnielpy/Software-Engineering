#include <stdio.h>
#include <Logica/logica.h>
#include <Interfaz/interfaz.h>

int main(void)
{
    int fin = 1;

    while(fin != -1){

        int x = pedirPrimerNumero();
        int y = pedirSegundoNumero(x);

        int result = mcd(x, y);

        printf("El m\xa0ximo comun divisor entre %d y %d es: %d\n", x,y,result);

        fin = terminar();
    }
    printf("Programa finalizado.");
}

