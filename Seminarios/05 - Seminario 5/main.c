#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Filas y columnas de los arreglos
#define FILAS_VENDEDORES 4
#define COLUMNAS_VENDEDORES 50

#define FILAS_PRODUCTOS 5
#define COLUMNAS_PRODUCTOS 50

#define FILAS_SALES 4
#define COLUMNAS_SALES 5


//Logica
int chequearNombre(char nombre[], char arreglo[][50]){    //Devuelve -1 si el nombre no se encuentra, 1 si el nombre se encuentra
    int encontrado = -1;

    for(int i = 0; i < FILAS_VENDEDORES && encontrado == -1; i++){
        if(strcmp(arreglo[i], nombre) == 0){
            encontrado = 1;
        }
    }

    return encontrado;
}


//funcion que reciba un arreglo de char y lo devuelva todo en minusculas
void normalizarTexto(char arreglo[]){
    for(int i = 0; i < strlen(arreglo); i++){
        arreglo[i] = tolower(arreglo[i]);
    }
}

//chequear si el arreglo esta vacio
int chequearVendedores(char arreglo[][50]){
    int vacio = 1;

    for(int i = 0; i < FILAS_VENDEDORES && vacio == 1; i++){
        if(strcmp(arreglo[i], "") != 0){
            vacio = -1;
        }
    }

    return vacio;
}

int chequearProductos(char arreglo[][50]){
    int vacio = 1;

    for(int i = 0; i < FILAS_PRODUCTOS && vacio == 1; i++){
        if(strcmp(arreglo[i], "") != 0){
            vacio = -1;
        }
    }
    return vacio;
}


//Interfaz
void imprimirProductos(char productos[5][COLUMNAS_PRODUCTOS]){
    int i;
    for (i = 0; i < FILAS_PRODUCTOS; i++) {
    printf("%d - %s\n", i, productos[i]);
  }
}

//imprimir tabla donde la primera columna sea el listado de productos, la primera fila los nombres de los vendedores, y luego la cantidad de productos vendidos por cada vendedor
void imprimirTabla(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]){
    int i, j;
    printf("Productos\t");
    for(i = 0; i < FILAS_VENDEDORES; i++){
        printf("%s\t", vendedores[i]);
    }
    printf("\n");
    for(i = 0; i < FILAS_PRODUCTOS; i++){
        printf("%s\t", productos[i]);
        for(j = 0; j < FILAS_VENDEDORES; j++){
            printf("%d\t", sales[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

}

void ingresarNombreVendedor(int vendedor, char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES]){
    char nombre[50];
    int encontrado = 1;

    do {
        printf("Ingrese el nombre del vendedor %d: ", vendedor+1);
        while(scanf("%s", nombre) == 0){
            printf("ERROR: Ingrese un nombre valido: ");
            fflush(stdin);
        }
        normalizarTexto(nombre);
        encontrado = chequearNombre(nombre, vendedores);

        if(encontrado == 1){
            printf("ERROR: El nombre ya se encuentra registrado. Ingrese otro nombre.\n");
        }

    } while (encontrado == 1);

    strcpy(vendedores[vendedor], nombre);

    printf("Nombre registrado con exito. Nombre: %s\n", vendedores[vendedor]);
}

void ingresarNombreProducto(int producto, char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]){
    char nombre[20];
    int encontrado = 1;

    do {
        printf("Ingrese el nombre del producto %d: ", producto+1);
        while(scanf("%s", nombre) == 0){
            printf("ERROR: Ingrese un nombre valido: ");
            fflush(stdin);
        }
        normalizarTexto(nombre);
        encontrado = chequearNombre(nombre, productos);

        if(encontrado == 1){
            printf("ERROR: El nombre ya se encuentra registrado. Ingrese otro nombre.\n");
        }

    } while (encontrado == 1);

    strcpy(productos[producto], nombre);

    printf("Nombre registrado con exito. Nombre: %s\n", productos[producto]);
}

void pedirVentasMensuales(char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_VENDEDORES][COLUMNAS_PRODUCTOS], int sales[FILAS_SALES][COLUMNAS_SALES]){

    //Va iterando por cada vendedor, le muestra todos los productos con su indice, el usuario elige que producto añadir y a continuacion que cantidad de ese producto quiere añadir
    for(int i = 0; i < FILAS_VENDEDORES; i++){
        int cantidad;
            system("cls");
            printf("Vendedor: %s\n", vendedores[i]);
            imprimirProductos(productos);
            printf("Ingrese el numero del producto que desea agregar: ");
            while(scanf("%d", &cantidad) == 0 || cantidad < 0 || cantidad > 4){
                printf("ERROR: Ingrese un numero valido: ");
                fflush(stdin);
            }
            printf("Ingrese la cantidad de %s que desea agregar: ", productos[cantidad]);
            while(scanf("%d", &sales[i][cantidad]) == 0){
                printf("ERROR: Ingrese un numero valido: ");
                fflush(stdin);
            }
            printf("Venta registrada con exito. Vendedor: %s, Producto: %s, Cantidad: %d\n", vendedores[i], productos[cantidad], sales[i][cantidad]);
        printf("Desea agregar otro producto?: \n1 - Si\n2 - No \n");
        int opcion;
        while(scanf("%d", &opcion) == 0 || opcion < 1 || opcion > 2){
            printf("ERROR: Ingrese un numero valido: ");
            fflush(stdin);
        }
        if(opcion == 1){
            i--;
        }
    }
}


//menu
void menu(int sales[FILAS_SALES][COLUMNAS_SALES], char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES], char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS]){
    int opcion;

    do {
        printf("1 - Ingresar nombre de vendedores\n");
        printf("2 - Ingresar nombre de productos\n");
        printf("3 - Ingresar ventas mensuales\n");
        printf("4 - Mostrar ventas\n");
        printf("5 - Salir\n");

        while (scanf("%d", &opcion) == 0 || opcion < 1 || opcion > 6) {
            printf("ERROR: Escriba correctamente la opci\xa2n: ");
            fflush(stdin);
        }

        switch (opcion) {
            case 1:
            if(chequearVendedores(vendedores) == 1){
                system("cls");
                ingresarNombreVendedor(0, vendedores);
                ingresarNombreVendedor(1, vendedores);
                ingresarNombreVendedor(2, vendedores);
                ingresarNombreVendedor(3, vendedores);    
                system("cls");
            }
            else{
                printf("ERROR: Ya se han ingresado los nombres de los vendedores\n");
            }

            break;
            case 2:
                system("cls");
                if(chequearProductos(productos) == 1){
                    ingresarNombreProducto(0, productos);
                    ingresarNombreProducto(1, productos);
                    ingresarNombreProducto(2, productos);
                    ingresarNombreProducto(3, productos);
                    ingresarNombreProducto(4, productos);
                    system("cls");
                }
                else{
                    printf("ERROR: Ya se han ingresado los nombres de los productos\n");
                }
                break;
            case 3:
                system("cls");
                pedirVentasMensuales(vendedores, productos, sales);
                system("cls");
                break;
                
                
            case 4:
                system("cls");
                imprimirTabla(sales, vendedores, productos);
                break;
                }
    } while (opcion != 5);
}

int main() {

    int sales[FILAS_SALES][COLUMNAS_SALES] = {0};        //Tabla de ventas

    char vendedores[FILAS_VENDEDORES][COLUMNAS_VENDEDORES] = {""};

    char productos[FILAS_PRODUCTOS][COLUMNAS_PRODUCTOS] = {""};
 
    menu(sales, vendedores, productos);
}
