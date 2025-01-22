#include <Datos.h>

void imprimirProductos(char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]);
int calcularTotalVendedor(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]);
int calcularTotalProducto(int indice, int sales[FILAS_SALES][COLUMNAS_SALES]);
void imprimirTablaVentas(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS], int ventasVendedores[SIZE_VENTAS_VENDEDORES], int ventasProductos[SIZE_VENTAS_PRODUCTOS]);
void ingresarNombreVendedor(int vendedor, char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES]);
void ingresarNombreProducto(int producto, char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]);
void pedirVentasMensuales(char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS], int sales[FILAS_SALES][COLUMNAS_SALES]);
void reportes(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]);
