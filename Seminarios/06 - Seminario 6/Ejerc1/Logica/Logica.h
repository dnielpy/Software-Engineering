#include "Logica/Datos.h"
#include <stdbool.h>

void inicializar(DatosVolantes[]);
void inicializarProductos(char [][10]);
void inicializarVendedores(char [][15]);
void actualizarSales(float [5][4], DatosVolantes[]);
bool noVendioProductoMasDel50Porciento(int vendedor, int producto, DatosVolantes volantes[], int numProductos, int numVendedores);
void inicializarProductosVendidosTodosLosDias(int vendedor, DatosVolantes volantes[4], bool productosVendidosTodosLosDias[5][4]);
