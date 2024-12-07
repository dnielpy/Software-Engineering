#include <stdio.h>
#include <Interfaz/interfaz.h>
#include <Logica/logica.h>

int main(void)
{
    int stop = 0;

    while(stop != -1){
        int rangoInf = pedirRangoInferior();
        int rangoSup = pedirRangoSuperior();

        int resultado = sumaEnteros(rangoInf, rangoSup);

        mostrarResultado(resultado);

        stop = repeat();
    }
}

