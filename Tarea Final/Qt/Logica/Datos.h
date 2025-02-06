#ifndef DATOS_H
#define DATOS_H

struct provincia {
    char nombre[50];
    int vacunados;
    int vacunar;
    int cantidadDeAlergicos;
    char alergicosID[10000][9];
};

typedef struct provincia Provincia;

#endif // DATOS_H
