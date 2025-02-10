#include <stdio.h>
#include <stdbool.h>
#include "Interfaz/Menus.h"
#include "Logica/Logica.h"
#include "Interfaz/Salidas.h"


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

void menuReportes(DatosVolantes volantes[4], bool productosVendidosTodosLosDias[5][4], char vendedores[][15], char productos[][10], float sales[][4]) {
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
      system("cls");
      ProductosVendidosTodosLosDias(volantes, productosVendidosTodosLosDias, vendedores, productos);
      system("pause");
      break;
    case '7':
      system("cls");
      verificarVendedoresQueNoVendieronProductoMasDel50Porciento (volantes, vendedores, productos);
      system("pause");
      break;
    case '8':
      system("cls");
      verificarProductosQueNoFueronVendidosPorVendedor(volantes, productos, vendedores, sales);
      system("pause");
      break;
  }
}


void menu(DatosVolantes volantes[], float sales[5][4], char productos[5][10], char vendedores[4][15], bool productosVendidosTodosLosDias[5][4]) {
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
        menuReportes(volantes, productosVendidosTodosLosDias, vendedores, productos, sales);
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
