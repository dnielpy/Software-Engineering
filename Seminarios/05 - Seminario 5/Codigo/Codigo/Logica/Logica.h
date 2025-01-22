#include <stdbool.h>
#include<stdio.h>
#include<Datos.h>


// Funciones de chequeo
bool chequearVendedores(char arreglo[][50]);
bool chequearProductos(char arreglo[][50]);
bool chequearSiTieneElProducto(int vendedor, int producto, int sales[FILAS_SALES][COLUMNAS_SALES]);
bool chequearNombre(char nombre[], char arreglo[][50], int filas);
bool chequearDatosLlenados(int sales[FILAS_SALES][COLUMNAS_SALES]);

// Funciones de manipulación de texto
void normalizarTexto(char arreglo[]);

// Funciones de cálculo de totales
int totalProducto(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]);
int totalVendedor(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]);

