#include <stdbool.h>
#include <Logica/Datos.h>

int inicializarLibrosAutomaticamente(struct libro libros[]);
bool chequearNombreValido(char nombre[100]);
void convertirAMinusculas(char str[]);
bool buscarDuplicado(char nombre[], struct libro libros[], int cantidadLibros);
int insertarLibro(int cantPaginas, char nombre[100], struct libro libros[1000], int cantidadLibros);
int eliminarLibro(struct libro libros[], int cantidadLibros, int indice);
int obtenerTotalLibros(struct libro libros[], int cantLibros);
int mayorCantPaginas(struct libro libros[], int cantLibros);
