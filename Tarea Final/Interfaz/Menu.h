#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>
#include <time.h>


void menu(struct provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]);
void menuReportes(struct provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]);
void menuDatos(struct provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]);
