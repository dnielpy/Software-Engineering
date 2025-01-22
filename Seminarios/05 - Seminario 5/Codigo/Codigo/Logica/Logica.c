#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>


//**Chequear cosas**
//chequear si el arreglo esta vacio
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


//Devuelve las ventas totales de ese producto
int totalProducto(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]){
    int total = 0;

    int columna;
    for(columna = 0; columna < COLUMNAS_SALES; columna++){
        total += sales[indice][columna];
    }
    return total;
}

//Devuelve las ventas totales de ese vendedor
int totalVendedor(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]){
    int total = 0;

    int fila;
    for(fila = 0; fila < FILAS_SALES; fila++){
        total += sales[fila][indice];
    }
    return total;
}


