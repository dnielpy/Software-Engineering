#include <Logica/Datos.h>
#include <stdio.h>
#include <stdbool.h>

//Inicializar manualmente los libros
int inicializarLibrosAutomaticamente(struct libro libros[]) {
    strcpy(libros[0].nombre, "el hobbit");
    libros[0].cantPag = 304;

    strcpy(libros[1].nombre, "1984");
    libros[1].cantPag = 328;

    strcpy(libros[2].nombre, "orgullo y prejuicio");
    libros[2].cantPag = 432;

    strcpy(libros[3].nombre, "cien años de soledad");
    libros[3].cantPag = 417;

    strcpy(libros[4].nombre, "el principito");
    libros[4].cantPag = 96;

    strcpy(libros[5].nombre, "don quijote de la mancha");
    libros[5].cantPag = 1072;

    return 6;
}


bool chequearNombreValido(char nombre[100]){
    bool response = true;

    if (nombre == NULL) {
        response = false;
    }


    int i;
    for (i = 0; nombre[i] != '\0'; i++) {
        if (!isalpha(nombre[i]) && !isspace(nombre[i]) && !isdigit(nombre[i])) {
            response = false;
        }
    }

    return response;
}

//Función para convertir una cadena a minúsculas
void convertirAMinusculas(char str[]) {
    int i;

    for(i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

//Devuelve TRUE si el libro esta duplicado
bool buscarDuplicado(char nombre[], struct libro libros[], int cantidadLibros) {
    bool encontrado = false;

    int i;

    for(i = 0; i < cantidadLibros && encontrado == false; i++) {
        convertirAMinusculas(nombre);

        if (strcmp(nombre, libros[i].nombre) == 0) {
            encontrado = true;
        }
    }

    return encontrado;
}

//Intenta insertar el libro y suma +1 al valor logico y lo devuelve
int insertarLibro(int cantPaginas, char nombre[100], struct libro libros[1000], int cantidadLibros){
    struct libro libro1;

    libro1.cantPag = cantPaginas;
    strcpy(libro1.nombre, nombre);

    libros[cantidadLibros] = libro1;

    return ++cantidadLibros;
}


//Elimina el libro con el indice dado
int eliminarLibro(struct libro libros[], int cantidadLibros, int indice) {

    libros[indice].nombre[0] = '\0';

    int i;
    for (i = indice; i < cantidadLibros - 1; i++) {
        libros[i] = libros[i + 1];
    }

    return --cantidadLibros;
}

//Obtiene el total de libros ingresados
int obtenerTotalLibros(struct libro libros[], int cantLibros) {
    int contador = 0;

    bool brake = false;
    int i;

    for(i = 0; i < cantLibros && brake == false; i++) {
        if (libros[i].cantPag != -1) {
            contador++;
        }
        else{
            brake = true;
        }
    }
    return contador;
}


//Devuelve el indice del que tenga mas pag
int mayorCantPaginas(struct libro libros[], int cantLibros){
    int maxPaginas = 0;
    int indice = 0;

    int i;

    for(i = 0; i < cantLibros; i++) {
        if (libros[i].cantPag > maxPaginas) {
            maxPaginas = libros[i].cantPag;
            indice = i;
        }

    }

    return indice;
}







