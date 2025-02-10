#include "Logica/Logica.h"
#include <stdio.h>
#include <stdbool.h>

bool noVendioProductoMasDel50Porciento(int vendedor, int producto, DatosVolantes volantes[], int numProductos, int numVendedores) {
    bool cond = false;
    int cantidadDias = volantes[vendedor].cantDias;
    int diasNoVendidos = 0;

    int dia;
    for (dia = 0; dia < cantidadDias; dia++) {
        if (volantes[vendedor].ventas[producto][dia] == 0.00) {
            diasNoVendidos++;
        }
    }

    float porcentajeNoVendidos = ((float)diasNoVendidos / cantidadDias) * 100;
    if (porcentajeNoVendidos > 50) {
        cond = true;
    }
    return cond;
}

void inicializarProductosVendidosTodosLosDias(int vendedor, DatosVolantes volantes[4], bool productosVendidosTodosLosDias[5][4]){
    int cantidadDias = volantes[vendedor].cantDias;
    bool stop = false;

    bool productosVendidos[5];
    int i;
    for(i = 0; i < 5; i++) {
        productosVendidos[i] = true;
    }

    int producto;
    for(producto = 0; producto < 5; producto++) {
      stop = false;
      if (cantidadDias == 0) {
          productosVendidos[producto] = false;
      } else {
          int dia;
        for (dia = 0; dia < cantidadDias && stop == false; dia++) {
            if (volantes[vendedor].ventas[producto][dia] == 0.00) {
              productosVendidos[producto] = false;
              stop = true;
            }
        }
      }
    }

    for(producto = 0; producto < 5; producto++){
      if(productosVendidos[producto]){
        productosVendidosTodosLosDias[producto][vendedor] = true;
      } else{
         productosVendidosTodosLosDias[producto][vendedor] = false;
      }
    }
}

void inicializar(DatosVolantes volantes[]) {
  volantes[0].cantDias = 2;
  volantes[0].ventas[0][0] = 1;
  volantes[0].ventas[0][1] = 0;
  volantes[0].ventas[1][0] = 2;
  volantes[0].ventas[1][1] = 9;
  volantes[0].ventas[2][0] = 0;
  volantes[0].ventas[2][1] = 5;
  volantes[0].ventas[3][0] = 5;
  volantes[0].ventas[3][1] = 2;
  volantes[0].ventas[4][0] = 3;
  volantes[0].ventas[4][1] = 4;
  volantes[1].cantDias = 3;
  volantes[1].ventas[0][0] = 1;
  volantes[1].ventas[0][1] = 0;
  volantes[1].ventas[0][2] = 2;
  volantes[1].ventas[1][0] = 3;
  volantes[1].ventas[1][1] = 4;
  volantes[1].ventas[1][2] = 2;
  volantes[1].ventas[2][0] = 0;
  volantes[1].ventas[2][1] = 0;
  volantes[1].ventas[2][2] = 5;
  volantes[1].ventas[3][0] = 5;
  volantes[1].ventas[3][1] = 6;
  volantes[1].ventas[3][2] = 7;
  volantes[1].ventas[4][0] = 8;
  volantes[1].ventas[4][1] = 9;
  volantes[1].ventas[4][2] = 5;
  volantes[2].cantDias = 2;
  volantes[2].ventas[0][0] = 11;
  volantes[2].ventas[0][1] = 0;
  volantes[2].ventas[1][0] = 2;
  volantes[2].ventas[1][1] = 9;
  volantes[2].ventas[2][0] = 0;
  volantes[2].ventas[2][1] = 5;
  volantes[2].ventas[3][0] = 5;
  volantes[2].ventas[3][1] = 2;
  volantes[2].ventas[4][0] = 3;
  volantes[2].ventas[4][1] = 4;
  volantes[3].cantDias = 3;
  volantes[3].ventas[0][0] = 1;
  volantes[3].ventas[0][1] = 0;
  volantes[3].ventas[0][2] = 2;
  volantes[3].ventas[1][0] = 3;
  volantes[3].ventas[1][1] = 4;
  volantes[3].ventas[1][2] = 2;
  volantes[3].ventas[2][0] = 0;
  volantes[3].ventas[2][1] = 0;
  volantes[3].ventas[2][2] = 5;
  volantes[3].ventas[3][0] = 5;
  volantes[3].ventas[3][1] = 6;
  volantes[3].ventas[3][2] = 7;
  volantes[3].ventas[4][0] = 8;
  volantes[3].ventas[4][1] = 9;
  volantes[3].ventas[4][2] = 5;
}

void inicializarVendedores(char vendedores[][15]) {
  sprintf(vendedores[0], "Jorge Diaz");
  sprintf(vendedores[1], "Carlos Tio");
  sprintf(vendedores[2], "Luis Torres");
  sprintf(vendedores[3], "Ricardo Zapata");
}

void inicializarProductos(char productos[][10]) {
  sprintf(productos[0], "arroz");
  sprintf(productos[1], "leche");
  sprintf(productos[2], "frijoles");
  sprintf(productos[3], "aceite");
  sprintf(productos[4], "pan");
}

void actualizarSales(float sales[5][4], DatosVolantes volantes[4]) {
  int cantDias;
  float totalProd;
  int i;
  int j;
  int k;
  for (i = 0; i < 4; i++) {
    cantDias = volantes[i].cantDias;
    for (j = 0; j < 5; j++) {
      totalProd = 0;
      for (k = 0; k < cantDias; k++)
        totalProd += volantes[i].ventas[j][k];
      sales[j][i] = totalProd;
     }
  }
}
