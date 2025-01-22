#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>

int main(void)
{
    int sales[FILAS_SALES][COLUMNAS_SALES] = {0};        //Tabla de ventas

    char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES] = {""};

    char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS] = {""};

    //Arreglos probicionales

    // int sales[FILAS_SALES][COLUMNAS_SALES] = {
    //     {10,20,30,40},
    //     {1,30,80,50},
    //     {30,20,32,40},
    //     {23,223,30,40},
    //     {132,123,30,40},
    // };

    // char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES] = {
    //     "daniel",
    //     "jose",
    //     "pepe",
    //     "camilo"
    // };

    // char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS] = {
    //     "mesas",
    //     "sillas",
    //     "pomos",
    //     "motos",
    //     "tomates"
    // };




    //Almacenan las ventas totales de cada cosa
    int ventasVendedores[SIZE_VENTAS_VENDEDORES];
    int ventasProductos[SIZE_VENTAS_PRODUCTOS];

    menu(sales, vendedores, productos, ventasVendedores, ventasProductos);
}

