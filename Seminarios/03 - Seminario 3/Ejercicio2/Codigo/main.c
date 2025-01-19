#include <stdio.h>
#include <Interfaz/interfaz.h>
#include <Logica/logica.h>

int main(void)
{
    int stop = 0;   //Si stop es -1, el programa no se ejecuta mas veces

    int rangoInf;
    int rangoSup;
    int resultado;

    while(stop != -1){
        rangoInf = pedirRangoInferior();
        rangoSup = pedirRangoSuperior(rangoInf);

        resultado = sumaEnteros(rangoInf, rangoSup);

        mostrarResultado(resultado);

        stop = repeat();
    }
}

