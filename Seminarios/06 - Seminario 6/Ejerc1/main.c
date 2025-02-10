#include <stdio.h>
#include "Interfaz/Menus.h"
#include <stdbool.h>

int main(void)
{
  printf("\n\n");
  bool productosVendidosTodosLosDias[5][4] = {false};
  DatosVolantes volantes[4];
  char vendedores[4][15];
  char productos[5][10];
  float sales[5][4] = {0};
  menu(volantes, sales, productos, vendedores, productosVendidosTodosLosDias);
  return 0;
}
