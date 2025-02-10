#include <Logica\Datos.h>
#include <stdio.h>
#include <Logica\Logica.h>
#include <Interfaz\Interfaz.h>


void menu(struct libro libros[], int cantidadLibros){
    int opt;
    bool inicializado = false;

    do{
        printf("1 - Ingresar libros manualmente\n");
        printf("2 - Ingresar libros autom\240ticamente\n");
        printf("3 - Eliminar libro\n");
        printf("4 - Mostrar libros registrados\n");
        printf("5 - Mostrar reportes (libro con la mayor cantidad de p\xa0ginas)\n");
        printf("6 - Salir\n");

        while (scanf("%d", &opt) == 0 || opt < 1 || opt > 6) {
            printf("ERROR: Escriba correctamente la opci\242n: ");
            fflush(stdin);
        }

        switch (opt) {

        case 1:
            system("cls");
            cantidadLibros = ingresarLibro(libros, cantidadLibros);
            inicializado = true;
            system("pause");
            system("cls");
            break;

        case 2:
            system("cls");
            if(inicializado == false){
                cantidadLibros = inicializarLibrosAutomaticamente(libros);
                inicializado = true;
            }
            else{
                printf("Los libros ya fueron inicializados");
            }
            printf("\nLibros inicializados correctamente");
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            if(inicializado == true){
                eliminarLibros(libros, cantidadLibros);
                cantidadLibros--;
                printf("Cantidad de libros: %d", cantidadLibros);
            }
            else{
                printf("Los libros aun no han sido inicializados");
            }
            system("pause");
            system("cls");
            break;

        case 4:
            system("cls");
            if(inicializado == true){
                mostrarLibrosRegistrados(libros, cantidadLibros);
            }
            else{
                printf("Los libros aun no han sido inicializados");
            }
            system("pause");
            system("cls");
            break;

        case 5:
            system("cls");
            if(inicializado == true){
                mostrarReporte(libros, cantidadLibros);
            }
            else{
                printf("Los libros aun no han sido inicializados");
            }
            system("pause");
            system("cls");
            break;
        }

    }while (opt != 6);
}
