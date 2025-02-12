#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


int main() {

    int cantidadProvincias = 15;
    Provincia provincias[cantidadProvincias];
    bool provinciasVacunaranMas[cantidadProvincias];

    inicializar(provincias, cantidadProvincias);

    menu(provincias, cantidadProvincias, provinciasVacunaranMas);

    return 0;
}
