#include <stdio.h>
#include <stdbool.h>

#ifndef DATOS_H
#define DATOS_H

struct datosVolantes {
  int cantDias;
  float ventas[5][30];
};

typedef struct datosVolantes DatosVolantes;

#endif // DATOS_H




//Logica
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



//Interfaz
void mostrarArregloProductos(char arreglo[][10], int cant) {
  printf("Productos\n");
  int i;
  for (i = 0; i < cant; i++)
    printf("%s \n",  arreglo[i]);
  system("pause");
  system("cls");
}

void mostrarArregloVendedores(char arreglo[][15], int cant) {
  printf("Vendedores \n");
  int i;
  for (i = 0; i < cant; i++)
    printf("%s \n",  arreglo[i]);
  system("pause");
  system("cls");
}

void mostrarVolantes(DatosVolantes volantes[4]) {
  int cantDias;
  int i;
  int j;
  int k;
  for (i = 0; i < 4; i++) {
    printf("Vendedor %d\n", i + 1);
    cantDias = volantes[i].cantDias;
    for (j = 0; j < cantDias; j++) {
      printf("D\241a %d \n", j + 1);
      for (k = 0; k < 5; k++)
        printf("Producto %d: %.2f \n", k + 1, volantes[i].ventas[k][j]);
    }
    printf("\n");
  }
  system("pause");
}

void mostrarVentas(float sales[][4], char vendedores[][15], char productos[][10]) {
  int i;
  int j;
  float sumaColumna[4] = {0};
  float sumaFila = 0;
  float total = 0;
  printf("%10s", "");
  for (i = 0; i < 4; i++)
    printf("%15s", vendedores[i]);
  printf("%15s\n",  "Total");
  for (i = 0; i < 5; i++) {
    printf("%10s", productos[i]);
    for (j = 0; j < 4; j++) {
       printf("%15.2f", sales[i][j]);
       sumaFila += sales[i][j];
       sumaColumna[j] += sales[i][j];
    }
    printf("%15.2f\n", sumaFila);
    total += sumaFila;
    sumaFila = 0;
  }
  printf("%10s", "Total");
  for (i = 0; i < 4; i++)
    printf("%15.2f", sumaColumna[i]);
  printf("%15.2f\n", total);
}

bool menuEntrada(DatosVolantes volantes[], char vendedores[][15], char productos[][10]) {
  char resp = 0;
  bool datos = false;
  do {
    printf("   Opciones de entrada de datos \n");
    printf("1. Entrada por teclado \n");
    printf("2. Inicializar por funci\242n \n");
    resp = getchar();
    fflush(stdin);
  }
  while (resp < '1' || resp > '2');
  switch (resp) {
    case '1':
      printf("Implementar \n");
      // Cuando se implemente, se debe cambiar el valor de datos a true
      system("pause");
      break;
    case '2':
      inicializar(volantes);
      inicializarVendedores(vendedores);
      inicializarProductos(productos);
      printf("Datos inicializados \n");
      datos = true;
      system("pause");
      break;
  }
  return datos;
}


void menuListados(float sales[5][4], DatosVolantes volantes[4], char productos[5][10], char vendedores[4][15], bool datos, bool act) {
  char resp = 0;
  do {
    printf("   Listados \n");
    printf("1. Listado de productos \n");
    printf("2. Listado de vendedores \n");
    printf("3. Listado de volantes \n");
    printf("4. Ventas del mes \n");
    resp = getchar();
    fflush(stdin);
  }
  while (resp < '1' || resp > '4');
  switch (resp) {
    case '1':
      if (datos)
        mostrarArregloProductos(productos, 5);
      else {
        printf("Los datos no han sido inicializados \n");
        system("pause");
      }
      break;
    case '2':
      if (datos)
        mostrarArregloVendedores(vendedores, 4);
      else {
        printf("Los datos no han sido inicializados \n");
        system("pause");
      }
      break;
    case '3':
      if (datos)
        mostrarVolantes(volantes);
      else {
        printf("Los datos no han sido inicializados \n");
        system("pause");
      }
      break;
    case '4':
      if (act)
        mostrarVentas(sales, vendedores, productos);
      else
        printf("No se han actualizado las ventas \n");
      system("pause");

  }
}

void menuReportes() {
  char resp;
  do {
    printf("   Reportes \n");
    printf("1. Ventas por vendedores \n");
    printf("2. Ventas de productos \n");
    printf("3. Ventas de un vendedor para un producto \n");
    printf("4. Mayor valor de venta diario de un producto por un vendedor (F3) \n");
    printf("5. Mayor valor de venta del mes y cantidad de vendedores (F4) \n");
    printf("6. Nombre de los productos que un vendedor dado tenga ventas en todos sus d\241as de trabajo (F5) \n");
    printf("7. Nombre de los vendedores que no vendieron un producto dado m\240s del 50%% de los d\241as que trabaj\242 (F6) \n");
    printf("8. Nombre de los productos que no fueron vendidos por un vendedor dado el 100%% de los d\241as que trabaj\242 (F7) \n");
    resp = getchar();
    fflush(stdin);
  }
  while (resp < '1' || resp > '8');
  switch (resp) {
    case '1':
      printf("Implementar \n");
      system("pause");
      break;
    case '2':
      printf("Implementar \n");
      system("pause");
      break;
    case '3':
      printf("Implementar \n");
      system("pause");
      break;
    case '4':
      printf("Implementar \n");
      system("pause");
      break;
    case '5':
      printf("Implementar \n");
      system("pause");
      break;
    case '6':
      printf("Implementar \n");
      system("pause");
      break;
    case '7':
      printf("Implementar \n");
      system("pause");
      break;
    case '8':
      printf("Implementar \n");
      system("pause");
      break;
  }
}

void menu(DatosVolantes volantes[], float sales[5][4], char productos[5][10], char vendedores[4][15]) {
  char resp;
  bool datos = false;
  bool act = false;
  do {
    system("cls");
    printf("     Opciones \n");
    printf("1. Entrada de vendedores, productos y volantes \n");
    printf("2. Actualizar ventas (sales) \n");
    printf("3. Mostrar datos \n");
    printf("4. Reportes \n");
    printf("5. Terminar \n");
    resp = getchar();
    fflush(stdin);
    switch (resp) {
      case '1':
        datos = menuEntrada(volantes, vendedores, productos);
        break;
      case '2':
        if (datos) {
          actualizarSales(sales, volantes);
          act = true;
          printf("Se han actualizado las ventas \n");
          system("pause");
        }
        else {
           printf("Los volantes no han sido inicializados \n");
           system("pause");
        }
        break;
      case '3':
        if (datos)
          menuListados(sales, volantes, productos, vendedores, datos, act);
        else {
          printf("Los datos no han sido inicializados \n");
          system("pause");
        }
        break;
      case '4':
        menuReportes();
        break;
      case '5':
        break;
      default:
        printf("Opci\242n err\242nea \n");
        system("pause");
    }
  }
  while (resp != '5');
}


int main(void)
{
    printf("\n\n");
  DatosVolantes volantes[4];
  char vendedores[4][15];
  char productos[5][10];
  float sales[5][4] = {0};
  menu(volantes, sales, productos, vendedores);
  return 0;
}

