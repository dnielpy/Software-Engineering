#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


int main() {

    int cantidadProvincias = 15;
    Provincia provincias[cantidadProvincias];
    bool provinciasVacunaranMas[cantidadProvincias];
    bool provinciasConMayorVacunacion[cantidadProvincias];

    menu(provincias, cantidadProvincias);

    return 0;
}
