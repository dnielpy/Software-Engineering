#include <stdio.h>
#include <Logica/Datos.h>
#include <Interfaz/Menu.h>


int main(void)
{
    struct libro libros[1000];

    int cantibros = 0;

    menu(libros, cantibros);
}

