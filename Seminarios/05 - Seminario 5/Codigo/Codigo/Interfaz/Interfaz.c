#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>
#include <Logica/Logica.h>

void imprimirProductos(char productos[5][COLUMNAS_PRODUCTOS]){
    int i;
    for (i = 0; i < FILAS_PRODUCTOS; i++) {
    printf("%d - %s\n", i, productos[i]);
  }
}

//Devuelve las ventas totales de un vendedor
int calcularTotalVendedor(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]){
    int ventas = 0;

    int filas;

    for(filas = 0; filas < FILAS_SALES; filas++){
        ventas += sales[filas][indice];
    }

    return ventas;
}

//Devuelve las ventas totales de un producto
int calcularTotalProducto(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]){
    int ventas = 0;

    int columna;

    for(columna = 0; columna < FILAS_SALES; columna++){
        ventas += sales[indice][columna];
    }

    return ventas;
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

    for(fila = 0; fila < FILAS_SALES; fila++){
        printf("%s\t", productos[fila]);              //Imprimir el producto
        for(columna = 0; columna < COLUMNAS_SALES; columna++){
            printf("%d\t", sales[fila][columna]);
        }
        printf("%d", calcularTotalProducto(fila, sales));
        printf("\n");
    }



    // // Imprimir productos y ventas
    // for (i = 0; i < FILAS_PRODUCTOS; i++) {
    //     int totalProducto = 0;
    //     printf("%s\t", productos[i]);
    //     for (j = 0; j < FILAS_VENDEDORES; j++) {
    //         printf("%d\t", sales[i][j]);
    //         totalProducto += sales[i][j];
    //     }
    //     printf("%d\n", totalProducto);
    // }
    // printf("\n");
}

void ingresarNombreVendedor(int vendedor, char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES]){
    char nombre[50];
    int encontrado = 1;

    do {
        printf("Ingrese el nombre del vendedor %d: ", vendedor+1);
        while(scanf("%s", nombre) == 0){
            printf("ERROR: Ingrese un nombre valido: ");
            fflush(stdin);
        }
        normalizarTexto(nombre);
        encontrado = chequearNombre(nombre, vendedores);

        if(encontrado == 1){
            printf("ERROR: El nombre ya se encuentra registrado. Ingrese otro nombre.\n");
        }

    } while (encontrado == 1);

    strcpy(vendedores[vendedor], nombre);

    printf("Nombre registrado con exito. Nombre: %s\n", vendedores[vendedor]);
}

void ingresarNombreProducto(int producto, char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]){
    char nombre[20];
    int encontrado = 1;

    do {
        printf("Ingrese el nombre del producto %d: ", producto+1);
        while(scanf("%s", nombre) == 0){
            printf("ERROR: Ingrese un nombre valido: ");
            fflush(stdin);
        }
        normalizarTexto(nombre);
        encontrado = chequearNombre(nombre, productos);

        if(encontrado == 1){
            printf("ERROR: El nombre ya se encuentra registrado. Ingrese otro nombre.\n");
        }

    } while (encontrado == 1);

    strcpy(productos[producto], nombre);

    printf("Nombre registrado con exito. Nombre: %s\n", productos[producto]);
}

void pedirVentasMensuales(char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_VENDEDORES][COLUMNAS_PRODUCTOS], int sales[FILAS_SALES][COLUMNAS_SALES]){
    //Va iterando por cada vendedor, le muestra todos los productos con su indice, el usuario elige que producto añadir y a continuacion que cantidad de ese producto quiere añadir
    int producto = 0;
    int cantidad = 0;

    int vendedor = 0;
    for(vendedor; vendedor < FILAS_VENDEDORES; vendedor++){
        system("cls");
        printf("Vendedor: %s\n", vendedores[vendedor]);
        imprimirProductos(productos);
        printf("Ingrese el n\xa3mero del producto que desea agregar: ");
        while(scanf("%d", &producto) == 0 || producto < 0 || producto > 4){
            if(chequearS)
            printf("ERROR: Ingrese un n\xa3mero v\xa0lido: ");                  //Seleccionar producto
            fflush(stdin);
        }

        printf("Ingrese la cantidad de %s que desea agregar: ", productos[cantidad]);
        while(scanf("%d", &cantidad) == 0){
            printf("ERROR: Ingrese un n\xa3mero v\xa0lido: ");                  //Seleccionar cantidad
            fflush(stdin);
        }
        sales[producto][vendedor] = cantidad;
        printf("Venta registrada con exito. Vendedor: %s, Producto: %s, Cantidad: %d\n", vendedores[vendedor], productos[producto], sales[producto][vendedor]);

        printf("Desea agregar otro producto?: \n1 - Si\n2 - No \n");

        int opcion;
        while(scanf("%d", &opcion) == 0 || opcion < 1 || opcion > 2){
            printf("ERROR: Ingrese un n\xa3mero v\xa0lido: ");                  //Seguir agregando?
            fflush(stdin);
        }
        if(opcion == 1){
            vendedor--;
        }
    }


    // int i = 0;
    // for(i = 0; i < FILAS_VENDEDORES; i++){
    //     int cantidad = 0;
    //         system("cls");
    //         printf("Vendedor: %s\n", vendedores[i]);
    //         imprimirProductos(productos);
    //         printf("Ingrese el numero del producto que desea agregar: ");
    //         while(scanf("%d", &cantidad) == 0 || cantidad < 0 || cantidad > 4){
    //             printf("ERROR: Ingrese un numero valido: ");
    //             fflush(stdin);
    //         }
    //         printf("Ingrese la cantidad de %s que desea agregar: ", productos[cantidad]);
    //         int cant = 0;
    //         while(scanf("%d", &cant) == 0){
    //             printf("ERROR: Ingrese un numero valido: ");
    //             fflush(stdin);
    //         }
    //         sales[]
    //         printf("Venta registrada con exito. Vendedor: %s, Producto: %s, Cantidad: %d\n", vendedores[i], productos[cantidad], sales[i][cantidad]);
    //     printf("Desea agregar otro producto?: \n1 - Si\n2 - No \n");
    //     int opcion;
    //     while(scanf("%d", &opcion) == 0 || opcion < 1 || opcion > 2){
    //         printf("ERROR: Ingrese un numero valido: ");
    //         fflush(stdin);
    //     }
    //     if(opcion == 1){
    //         i--;
    //     }
    // }
}
