#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


int main() {

    int cantidadProvincias = 15;
    Provincia provincias[cantidadProvincias];
    bool provinciasVacunaranMas[cantidadProvincias];
    bool provinciasConMayorVacunacion[cantidadProvincias];

    strcpy(provincias[0].nombre, "Pinar del Rio");
    strcpy(provincias[1].nombre, "Artemisa");
    strcpy(provincias[2].nombre, "La Habana");
    strcpy(provincias[3].nombre, "Mayabeque");
    strcpy(provincias[4].nombre, "Matanzas");
    strcpy(provincias[5].nombre, "Cienfuegos");
    strcpy(provincias[6].nombre, "Villa Clara");
    strcpy(provincias[7].nombre, "Sancti Spiritus");
    strcpy(provincias[8].nombre, "Ciego de Avila");
    strcpy(provincias[9].nombre, "Camaguey");
    strcpy(provincias[10].nombre, "Las Tunas");
    strcpy(provincias[11].nombre, "Holguin");
    strcpy(provincias[12].nombre, "Granma");
    strcpy(provincias[13].nombre, "Santiago de Cuba");
    strcpy(provincias[14].nombre, "Guantanamo");

    return 0;
}
