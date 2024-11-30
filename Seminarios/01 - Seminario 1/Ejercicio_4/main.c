#include <stdio.h>

int main(void) {
  float lado1;
  float lado2;
  float lado3;

  printf("Ingrese la longitud del primer lado: ");
  scanf("%d", &lado1);

  printf("Ingrese la longitud del segundo lado: ");
  scanf("%d", &lado2);

  printf("Ingrese la longitud del tercer lado: ");
  scanf("%d", &lado3);

  if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
    if (lado1 == lado2 && lado2 == lado3) {
      printf("El tri\xA0ngulo es equil\xA0tero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      printf("El tri\xA0ngulo es is\xA2sceles\n");
    } else {
      printf("El tri\xA0ngulo es escaleno\n");
    }
  } else {
    printf("Los lados ingresados no forman un tri\xA0ngulo v\xA0lido.\n");
  }

  return 0;
}

