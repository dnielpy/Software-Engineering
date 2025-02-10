#include <stdio.h>
#include <stdbool.h>
#include <Logica/Datos.h>

void inicializarNombres(struct provincia provincias[]);
void generarID(char id[11]);
void inicializarDatosAutomaticamente(struct provincia provincias[], int cantProvincias);
int totalVacunar(Provincia provincias[], int cantProvincias);
int totalAlergicos(Provincia provincias[], int cantProvincias);
void inicializarVacunaranMas(Provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]);
void inicializarProvinciasConMayorVacunacion(Provincia provincias[], int cantProvincias, bool provinciasConMayorVacunacion[]);
bool tieneAlergico(Provincia provincias[], int cantProvincias, int provincia);
