#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>


//**Chequear cosas**

//Devuelve true si el arreglo esta vacio
bool chequearVendedores(char arreglo[][50]){
    bool vacio = true;

    int i;
    for(i = 0; i < FILAS_VENDEDORES && vacio == true; i++){
        if(strcmp(arreglo[i], "") != 0){
            vacio = false;
        }
    }

    return vacio;
}

//Devuelve true si el arreglo esta vacio
bool chequearProductos(char arreglo[][50]){
    int vacio = true;

    int i;
    for(i = 0; i < FILAS_PRODUCTOS && vacio == true; i++){
        if(strcmp(arreglo[i], "") != 0){
            vacio = false;
        }
    }
    return vacio;
}

bool chequearSiTieneElProducto(int vendedor, int producto, int sales[FILAS_SALES][COLUMNAS_SALES]){

    bool response = false;

    if(sales[producto][vendedor] != 0){
        response = true;
    }

    return response;
}

bool chequearNombre(char nombre[], char arreglo[][50], int filas){
    bool encontrado = false;

    int i;
    for(i = 0; i < filas && encontrado == false; i++){
        if(strcmp(arreglo[i], nombre) == 0){
            encontrado = true;
        }
    }
    return encontrado;
}

//Devuelve true si ya llenaron las ventas
bool chequearDatosLlenados(int sales[FILAS_SALES][COLUMNAS_SALES]){
    bool llenado = false;

    int i;
    int j;
    for(i = 0; i < FILAS_SALES; i++){
        for(j = 0; j < COLUMNAS_SALES; j++){
            if(sales[i][j] != 0){
                llenado = true;
            }
        }
    }

    return llenado;
}

//funcion que reciba un arreglo de char y lo devuelva todo en minusculas
void normalizarTexto(char arreglo[]){
    int i;
    for(i = 0; i < strlen(arreglo); i++){
        arreglo[i] = tolower(arreglo[i]);
    }
}

//Devuelve las ventas totales de un producto
int calcularTotalProducto(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]){
    int ventas = 0;

    int columna;

    for(columna = 0; columna < COLUMNAS_SALES; columna++){
        ventas += sales[indice][columna];
    }

    return ventas;
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

//Devuelve el indice en el arreglo Vendedores del vendedor con mas ventas
int vendedorConMasVentas(int ventasVendedores[SIZE_VENTAS_VENDEDORES]){
    //Inicializamos en 0 antes de comparar
    int contador = ventasVendedores[0];
    int indice = 0;

    int i = 0;
    for(i = 0; i < SIZE_VENTAS_VENDEDORES; i++){
        if(ventasVendedores[i] > contador){
        contador = ventasVendedores[i];
        indice = i;
       }
    }
    return indice;
}

//Devuelve el indice en el arreglo Productos del producto con mas ventas
int productoConMasVentas(int ventasProductos[SIZE_VENTAS_PRODUCTOS]){
    //Inicializamos en 0 antes de comparar
    int contador = ventasProductos[0];
    int indice = 0;

    int i = 0;
    for(i = 0; i < SIZE_VENTAS_PRODUCTOS; i++){
        if(ventasProductos[i] > contador){
        contador = ventasProductos[i];
        indice = i;
       }
    }
    return indice;
}

//Devuelve el mayor valor de ventas del vendedor solicitado (columna)
int mayorValorDeVentas(int sales[FILAS_SALES][COLUMNAS_SALES]){
    int valor = sales[0][0];

    int i;
    int j;
    for(i = 0; i < FILAS_SALES; i++){
        for(j = 0; j < COLUMNAS_SALES; j++){
            if(sales[i][j] > valor){
                valor = sales[i][j];
            }
        }
    }
    return valor;
}






