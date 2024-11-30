#include <stdio.h>
#include <math.h>

int main(void) {
    float a;
    float b;
    float c;
    float area;

    printf("Ingrese la longitud del lado a: ");
    scanf("%f", &a);
    printf("Ingrese la longitud del lado b: ");
    scanf("%f", &b);
    printf("Ingrese la longitud del lado c: ");
    scanf("%f", &c);

    //Validación de los datos de entrada
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("La longitud de ninguno de los lados puede ser menor o igual que 0\n");
        return 0;
    }

    if (c > (a + b)) {
        printf("La longitud del lado c no puede ser mayor a la suma de las longitudes de los lados a+b (%.1f)\n", (a + b));
        return 0;
    }

    else {
        //Calcular el area
        c = c * M_PI / 180.0;
        area = 0.5 * a * b * sin(c);
    }

    printf("El area es %0.1f centimetros cuadrados\n", area);
    return 0;
}

