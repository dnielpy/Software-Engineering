#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>
#include <Logica/Logica.h>

//Imprime la lista de productos
void imprimirProductos(char productos[5][COLUMNAS_PRODUCTOS]){
    int i;
    for (i = 0; i < FILAS_PRODUCTOS; i++) {
    printf("%d - %s\n", i, productos[i]);
  }
}


void imprimirTablaVentas(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]) {
    int fila;
    int columna;

    // Imprimir encabezado de vendedores
    printf("\t");
    for (fila = 0; fila < FILAS_VENDEDORES; fila++) {
        printf("%s\t", vendedores[fila]);
    }
    printf("Total\n");

    for (fila = 0; fila < FILAS_PRODUCTOS; fila++) {
        printf("%s\t", productos[fila]);  // Imprimir el producto
        for (columna = 0; columna < COLUMNAS_SALES; columna++) {
            printf("%d\t", sales[fila][columna]);
        }
        printf("%d\n", calcularTotalProducto(fila, sales)); // Mostrar total por producto
    }
    // Mostrar totales de vendedores
    printf("Total\t");
    for (columna = 0; columna < FILAS_VENDEDORES; columna++) {
        printf("%d\t", calcularTotalVendedor(columna, sales));
    }
    printf("\n\n");
}


void ingresarNombreVendedor(int vendedor, char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES]){
    char nombre[50];
    int encontrado = false;

    do {
        printf("Ingrese el nombre del vendedor %d: ", vendedor+1);
        while(scanf("%s", nombre) == 0){
            printf("ERROR: Ingrese un nombre valido: ");
            fflush(stdin);
        }
        normalizarTexto(nombre);
        encontrado = chequearNombre(nombre, vendedores, FILAS_VENDEDORES);

        if(encontrado == true){
            printf("ERROR: El nombre ya se encuentra registrado. Ingrese otro nombre.\n");
        }

    } while (encontrado == 1);

    strcpy(vendedores[vendedor], nombre);

    printf("Nombre registrado con exito. Nombre: %s\n", vendedores[vendedor]);
}

void ingresarNombreProducto(int producto, char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]){
    char nombre[20];
    bool encontrado = false;

    do {
        printf("Ingrese el nombre del producto %d: ", producto+1);
        while(scanf("%s", nombre) == 0){
            printf("ERROR: Ingrese un nombre valido: ");
            fflush(stdin);
        }
        normalizarTexto(nombre);
        encontrado = chequearNombre(nombre, productos, FILAS_PRODUCTOS); // Pasamos el tamaño del arreglo

        if(encontrado){
            printf("ERROR: El nombre ya se encuentra registrado. Ingrese otro nombre.\n");
        }

    } while (encontrado);

    strcpy(productos[producto], nombre);

    printf("Nombre registrado con exito. Nombre: %s\n", productos[producto]);
}

void pedirVentasMensuales(char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS], int sales[FILAS_SALES][COLUMNAS_SALES]) {
    int cantidad;
    int vendedor;
    int producto;

    for (vendedor = 0; vendedor < FILAS_VENDEDORES; vendedor++) {
        system("cls");
        printf("Vendedor: %s\n", vendedores[vendedor]);

        for (producto = 0; producto < FILAS_PRODUCTOS; producto++) {
            printf("Ingrese la cantidad de %s que vendi\xa2 %s: ", productos[producto], vendedores[vendedor]);
            while (scanf("%d", &cantidad) == 0 || cantidad < 0 ) {
                printf("ERROR: Ingrese una cantidad v\xa0lida (no negativa): ");
                fflush(stdin);
            }
           sales[producto][vendedor] = cantidad;
        }
    }
}
