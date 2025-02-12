#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>
#include <Logica/Logica.h>

void ingresarDatosManualmente(Provincia provincias[], int cantidadProvincias);
void ingresarDatosAutomaticamente(Provincia provincias[], int cantidadProvincias);
void mostrarTotalAVacunar(Provincia provincias[], int cantidadProvincias);
void reporteAlergicos(Provincia provincias[], int cantidadProvincias);
void reporteVacunadosVsVacunar(Provincia provincias[], int cantidadProvincias);
void reporteProvinciasMasVacunaran(Provincia provincias[], int cantidadProvincias, bool provinciasVacunaranMas[]);
void reporteAlergico2015(Provincia provincias[], int cantidadProvincias);
