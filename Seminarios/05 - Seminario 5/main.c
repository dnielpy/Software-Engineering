#include <stdio.h>
#include <stdbool.h>


//Logica
int chequearNombre(char[] nombre, char[][] listado){
    //Devuelve -1 si el nombre no se encuentra, 1 si el nombre se encuentra
}


//Interfaz
void pedirNombreVendedor(int indice, char[][] productos){

    char[50] nombre;

    printf("Escriba el nombre del vendedor %d: ", indice);
    while(scanf("%s", nombre) == 0){
        printf("Escriba el nombre correctamente: ");
    }
    while(chequearNombre(nombre, indice) != -1){
        printf("El nombre ya est\xa0 en uso. Escriba uno diferente: ");
    }
}

void pedirNombreProducto(int indice, char[][] vendedores){

    char[50] nombre;

    printf("Escriba el nombre del vendedor %d: ", indice);
    while(scanf("%s", nombre) == 0){
        printf("Escriba el nombre correctamente: ");
    }
    while(chequearNombre(nombre, vendedores) != -1){
        printf("El nombre ya est\xa0 en uso. Escriba uno diferente: ");
    }
}



int main() {

    int sales[5][4];        //Tabla de ventas
    char vendedores[4][50]; //Nombres de vendedores
    char productos[4][50];  //Nombre de productos



 
}
