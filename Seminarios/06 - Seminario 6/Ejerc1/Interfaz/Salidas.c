#include <stdio.h>
#include "Interfaz/Salidas.h"

void ProductosVendidosTodosLosDias(DatosVolantes volantes[4], bool productosVendidosTodosLosDias[5][4], char vendedores[][15], char productos[][10]) {

    int vendedor;

    for(vendedor = 0; vendedor < 4; vendedor++){
        printf("\n%d - %s", vendedor+1, vendedores[vendedor]);
    }
    printf("\nEscriba el \xa1ndice del vendedor: ");

    while(scanf("%d", &vendedor) == 0 || vendedor < 1 || vendedor > 5){
        printf("\nERROR: Escriba un \xa1ndice v\xa0lido: ");
        fflush(stdin);
    }

    vendedor--;

    int i;
    int j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            productosVendidosTodosLosDias[i][j] = false;
        }
    }

    inicializarProductosVendidosTodosLosDias(vendedor, volantes, productosVendidosTodosLosDias);
    int producto;
    for (producto = 0; producto < 5; producto++) {
        if (productosVendidosTodosLosDias[producto][vendedor]) {
            printf("El vendedor %s tiene ventas todos los d\241as del producto: %s\n", vendedores[vendedor], productos[producto]);
        }
    }
    printf("\n");
}

void verificarVendedoresQueNoVendieronProductoMasDel50Porciento(DatosVolantes volantes[], char vendedores[][15], char productos[][10]) {

    int producto;

    for(producto = 0; producto < 5; producto++){
        printf("\n%d - %s", producto+1, productos[producto]);
    }
    printf("\nEscriba el \xa1ndice del producto: ");

    while(scanf("%d", &producto) == 0 || producto < 1 || producto > 5){
        printf("\nERROR: Escriba un \xa1ndice v\xa0lido: ");
        fflush(stdin);
    }

    producto--;

    int vendedor;
    bool encontrado = false;
    for (vendedor = 0; vendedor < 4; vendedor++) {
        if (noVendioProductoMasDel50Porciento(vendedor, producto, volantes, 5, 4)) {
            printf("El vendedor %s no vendi\xa2 el producto %s m\xa0s del 50%% de los d\241as que trabaj\xa2.\n", vendedores[vendedor], productos[producto]);
            encontrado = true;
        }
    }
    if(encontrado == false){
        printf("Todos los vendedores vendieron el producto %s mas del 50%% de los d\241as que trabajaron\n", productos[producto]);
    }
}

void verificarProductosQueNoFueronVendidosPorVendedor(DatosVolantes volantes[], char productos[][10], char vendedores[][15], float sales[][4]) {
    int noVentas = 0;

    int vendedor;

    for(vendedor = 0; vendedor < 4; vendedor++){
        printf("\n%d - %s", vendedor+1, vendedores[vendedor]);
    }
    printf("\nEscriba el \xa1ndice del vendedor: ");

    while(scanf("%d", &vendedor) == 0 || vendedor < 1 || vendedor > 5){
        printf("\nERROR: Escriba un \xa1ndice v\xa0lido: ");
        fflush(stdin);
    }

    vendedor--;

    int producto;
    for (producto = 0; producto < 5; producto++) {
        if(sales[producto][vendedor] == 0){
            printf("\nEl producto %s no se vendi\xa2 en el 100% de los d\241as que trabaj\xa2", productos[producto]);
            noVentas++;
        }
    }
    if(noVentas == 0){
        printf("El vendedor no tuvo ning\xa3n producto sin vender en el 100%% de los d\241as que trabaj\xa2.");
    }
    printf("\n");
}

void mostrarArregloProductos(char arreglo[][10], int cant) {
    printf("Productos\n");
    int i;
    for (i = 0; i < cant; i++)
        printf("%s \n",  arreglo[i]);
    system("pause");
    fflush(stdin);
}

void mostrarArregloVendedores(char arreglo[][15], int cant) {
    printf("Vendedores \n");
    int i;
    for (i = 0; i < cant; i++)
        printf("%s \n",  arreglo[i]);
    system("pause");
    fflush(stdin);
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
    printf("\n");
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
