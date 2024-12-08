#include <stdio.h>
#include <stdbool.h>
#include<Logica/Logica.h>
#include<Interfaz/Interfaz.h>

int main(void)
{
    bool stop = false;

    while(!stop){
        int x = pedirNumero();
        bool divisible = esDivisible(x);

        if(divisible){
            printf("%d es divisible entre 7\n", x);
        }
        else{
            printf("%d NO es divisible entre 7\n", x);
        }
        stop = terminar();
    }
}

