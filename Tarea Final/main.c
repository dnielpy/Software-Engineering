#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


int main() {

    int cantidadProvincias = 15;
    Provincia provincias[cantidadProvincias];   //Arreglo de provincias
    bool provinciasVacunaranMas[cantidadProvincias];    //Arreglo con las provincias que tengan el mayor número de niños a vacunar

    inicializar(provincias, cantidadProvincias);    //Inicializar los arreglos antes de empezar

    menu(provincias, cantidadProvincias, provinciasVacunaranMas);

    return 0;
}
