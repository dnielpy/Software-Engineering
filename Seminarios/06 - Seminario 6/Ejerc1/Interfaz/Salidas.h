#include "Logica/Datos.h"
#include <stdbool.h>


void ProductosVendidosTodosLosDias(DatosVolantes volantes[4], bool productosVendidosTodosLosDias[5][4], char vendedores[][15], char productos[][10]);
void mostrarArregloVendedores(char[][15], int);
void mostrarArregloProductos(char [][10], int);
void mostrarVolantes(DatosVolantes [4]);
void mostrarVentas(float [][4], char [][15], char [][10]);
void verificarVendedoresQueNoVendieronProductoMasDel50Porciento(DatosVolantes volantes[], char vendedores[][15], char productos[][10]);
void verificarProductosQueNoFueronVendidosPorVendedor(DatosVolantes volantes[], char productos[][10], char vendedores[][15], float sales[][4]);
