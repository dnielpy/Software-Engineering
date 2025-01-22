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


    //Almacenan las ventas totales de cada cosa
    int ventasVendedores[SIZE_VENTAS_VENDEDORES];
    int ventasProductos[SIZE_VENTAS_PRODUCTOS];

    menu(sales, vendedores, productos, ventasVendedores, ventasProductos);
}

