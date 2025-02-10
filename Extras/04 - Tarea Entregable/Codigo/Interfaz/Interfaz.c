#include <Logica\Datos.h>
#include <stdio.h>
#include <Logica\Logica.h>


int ingresarLibro(struct libro libros[], int cantiLibros){
    char nombreLibro[100];
    int cantidadPaginas;


    printf("Ingrese el nombre del libro: ");
    while(scanf("%s", &nombreLibro) == 0 || chequearNombreValido(nombreLibro) == false || buscarDuplicado(nombreLibro, libros, cantiLibros) == true){
        if(buscarDuplicado(nombreLibro, libros, cantiLibros) == true){
            printf("El libro ya existe en la base de datos");
        }
        else{
            printf("Nombre de libro inv\240lido. Ingrese solo letras, n\243meros o espacios\n");
        }
        fflush(stdin);
    }
    printf("Ingresa la cantidad de paginas: ");
    while(scanf("%d", &cantidadPaginas) == 0 || cantidadPaginas < 1){
        printf("Escriba un n\243mero v\240lido: \n");
        fflush(stdin);
    }

    printf("Libro insertado con \202xito\n");


    return insertarLibro(cantidadPaginas, nombreLibro, libros, cantiLibros);
}

int eliminarLibros(struct libro libros[], int cantLibros){
    int indice = 0;

    printf("Escriba el \241ndice del libro que desea eliminar: \n");

    int i;
    int y = 0;
    for(i = 0; i < cantLibros; i++){
        y = i + 1;
        printf("\n%d - %s", y, libros[i].nombre);
    }

    while(scanf("%d", &indice) == 0 || indice < 1 || indice > cantLibros){
        printf("Escriba un \241ndice v\240lido: \n");
        fflush(stdin);
    }
    printf("Libro eliminado con \202xito\n");
    return eliminarLibro(libros, cantLibros, --indice);
}

void mostrarLibrosRegistrados(struct libro libros[], int cantLibros){
    int i;
    int y = 0;
    for(i = 0; i < cantLibros; i++){
        if(cantLibros > 0){
            y = i + 1;
            printf("\n%d - %s (p\240ginas: %d)\n", y, libros[i].nombre, libros[i].cantPag);
        }
        else{
            printf("Aun no hay libros para mostrar");
        }
    }
}

void mostrarReporte(struct libro libros[], int cantLibros){
    int mayor = mayorCantPaginas(libros, cantLibros);

    if(cantLibros > 0){

    printf("El libro con la mayor cantidad de paginas es: \n");
    printf("%s - (paginas: %d)",libros[mayor].nombre, libros[mayor].cantPag);
    }
    else{
        printf("No hay libros que mostrar\n");
    }
}






