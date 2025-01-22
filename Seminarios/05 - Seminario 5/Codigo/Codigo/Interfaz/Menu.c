#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>
#include <Logica/Logica.h>
#include <Interfaz/Interfaz.h>

void menu(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS], int ventasVendedores[SIZE_VENTAS_VENDEDORES], int ventasProductos[SIZE_VENTAS_PRODUCTOS]){
    int opcion;

    do {
        printf("1 - Ingresar nombre de vendedores\n");
        printf("2 - Ingresar nombre de productos\n");
        printf("3 - Ingresar ventas mensuales\n");
        printf("4 - Mostrar ventas\n");
        printf("5 - Salir\n");

        while (scanf("%d", &opcion) == 0 || opcion < 1 || opcion > 6) {
            printf("ERROR: Escriba correctamente la opci\xa2n: ");
            fflush(stdin);
        }

        switch (opcion) {
            case 1:
                if(chequearVendedores(vendedores) == 1){
                system("cls");
                ingresarNombreVendedor(0, vendedores);
                ingresarNombreVendedor(1, vendedores);
                ingresarNombreVendedor(2, vendedores);
                ingresarNombreVendedor(3, vendedores);
                system("cls");
                }
                else{
                printf("ERROR: Ya se han ingresado los nombres de los vendedores\n");
                }
            break;
            case 2:
                if(chequearProductos(productos) == 1){
                    system("cls");
                    ingresarNombreProducto(0, productos);
                    ingresarNombreProducto(1, productos);
                    ingresarNombreProducto(2, productos);
                    ingresarNombreProducto(3, productos);
                    ingresarNombreProducto(4, productos);
                    system("cls");
                }
                else{
                    printf("ERROR: Ya se han ingresado los nombres de los productos\n");
                }
                break;
            case 3:
                system("cls");
                if(chequearProductos(productos) == false && chequearVendedores(vendedores) == false){
                    if(chequearDatosLlenados(sales) == false){
                        pedirVentasMensuales(vendedores, productos, sales);
                        system("cls");
                    }
                    else{
                        printf("Los datos ya han sido llenados\n");
                    }
                }
                else{
                    printf("ERROR: Los nombres de los vendedores y de los productos aun no han sido llenados");
                    printf("\n");
                }
                break;


            case 4:
                system("cls");
                imprimirTablaVentas(sales, vendedores, productos, ventasVendedores, ventasProductos);
                reportes(sales, vendedores, productos);
                break;
                }
    } while (opcion != 5);
}
