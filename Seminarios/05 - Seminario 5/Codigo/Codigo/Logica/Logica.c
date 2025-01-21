#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Datos.h>


int chequearNombre(char nombre[], char arreglo[][50], int filas){    //Devuelve -1 si el nombre no se encuentra, 1 si el nombre se encuentra
    int encontrado = -1;

    int i;
    for(i = 0; i < filas && encontrado == -1; i++){
        if(strcmp(arreglo[i], nombre) == 0){
            encontrado = 1;
        }
    }
    return encontrado;
}

//funcion que reciba un arreglo de char y lo devuelva todo en minusculas
void normalizarTexto(char arreglo[]){
    int i;
    for(i = 0; i < strlen(arreglo); i++){
        arreglo[i] = tolower(arreglo[i]);
    }
}

//chequear si el arreglo esta vacio
int chequearVendedores(char arreglo[][50]){
    int vacio = 1;

    int i;
    for(i = 0; i < FILAS_VENDEDORES && vacio == 1; i++){
        if(strcmp(arreglo[i], "") != 0){
            vacio = -1;
        }
    }

    return vacio;
}

int chequearProductos(char arreglo[][50]){
    int vacio = 1;

    int i;
    for(i = 0; i < FILAS_PRODUCTOS && vacio == 1; i++){
        if(strcmp(arreglo[i], "") != 0){
            vacio = -1;
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


