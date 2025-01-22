#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>
#include <Logica/Logica.h>

//***PEDIR DATOS***
void ingresarNombreVendedor(int vendedor, char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES]){
    char nombre[50];
    int encontrado = false;

    do {
        printf("Ingrese el nombre del vendedor %d: ", vendedor+1);
        while(scanf("%s", nombre) == 0 || chequearNombreValido(nombre) == false){
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

    printf("\n");
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

//***MOSTRAR RESULTADOS***

//Imprime la lista de productos
void imprimirProductos(char productos[5][COLUMNAS_PRODUCTOS]){
    int i;
    for (i = 0; i < FILAS_PRODUCTOS; i++) {
        printf("%d - %s\n", i, productos[i]);
    }
}

//Imprime la tabla con los resultados finales
void imprimirTablaVentas(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS], int ventasVendedores[SIZE_VENTAS_VENDEDORES], int ventasProductos[SIZE_VENTAS_PRODUCTOS]) {
    int fila;
    int columna;
    int totalP = 0;
    int totalV = 0;

    printf("\n----------------------  TABLA DE VENTAS  ------------------------\n\n");
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
        totalP = calcularTotalProducto(fila, sales);
        ventasProductos[fila] = totalP;
        printf("%d\n", totalP); // Mostrar total por producto
    }
    // Mostrar totales de vendedores
    printf("Total\t");
    for (columna = 0; columna < FILAS_VENDEDORES; columna++) {
        totalV = calcularTotalVendedor(columna, sales);
        ventasVendedores[columna] = totalV;
        printf("%d\t", totalV);
    }
    printf("\n\n-------------------------------------------------------------");
    printf("\n\n");
}

//Imprime los reportes
void reportes(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS],  int ventasVendedores[SIZE_VENTAS_VENDEDORES], int ventasProductos[SIZE_VENTAS_PRODUCTOS]){
    printf("\n----------------------  REPORTES  ----------------------------");

    int indiceVendedor = vendedorConMasVentas(ventasVendedores);
    char vendedor[50];
    strcpy(vendedor, vendedores[indiceVendedor]);

    int indiceProducto = productoConMasVentas(ventasProductos);
    char producto[50];
    strcpy(producto, productos[indiceProducto]);
    int columnaProductoMasVendido;

    printf("\n\nVendedor Con Mas Ventas: %s", vendedor);
    printf("\nMayor Valor De Ventas: %d", mayorValorDeVentas(sales));
    printf("\nProducto Con Mas Ventas: %s Con Un Valor De: %d\n\n", producto, ventasProductos[indiceProducto]);

    printf("--------------------------------------------------------------\n");
}





