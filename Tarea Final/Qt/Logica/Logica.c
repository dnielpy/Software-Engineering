#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


//Devuelve el total a vacunar
int totalVacunar(Provincia provincias[], int cantProvincias){
    int total = 0;

    int j;
    for(provincia = 0;provincia < cantProvincias; provincia++){
        total += provincias[i].vacunar;
    }

    return total;
}

//Devuelve el total de alérgicos
int totalAlergicos(Provincia provincias[], int cantProvincias){
    int total = 0;

    int provincia;
    for(provincia = 0;provincia < cantProvincias; provincia++){
        total += provincias[i].cantidadDeAlergicos;
    }

    return total;
}

//Inicializa un arreglo donde las provincias que superen la cant de vacunados con respecto al año anterior, tengan truue
void inicializarVacunaranMas(Provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]){
    int provincia;

    for(provincia = 0; provincia < cantProvincias; provincia++){
        provinciasVacunaranMas[provincia] = false;
    }

    for(provincia = 0; provincia < cantProvincias; cantProvincias++){
        if(provincias[provincia].vacunados < provincias[provincia].vacunar){
            provinciasVacunaranMas[provincia] = true;
        }
    }
}

//Inicializa el arreglo y pone True en la posicion de la o las provincias con el mayor numero
void inicializarProvinciasConMayorVacunacion(Provincia provincias[], int cantProvincias, bool provinciasConMayorVacunacion[]){
    int provincia;
    int mayor = -1;

    for(provincia = 0; provincia < cantProvincias; provincia++){
        provinciasConMayorVacunacion[provincia] = false;
    }

    for(provincia = 0; provincia < cantProvincias; provincia++){
        if(provincias[provincia] > mayor){
            mayor = provincias[provincia];
        }
    }

    for(provincia = 0; provincia < cantProvincias; provincia++){
        if(provincias[provincia].vacunar == mayor){
            provinciasConMayorVacunacion[provincia] = true;
        }
    }
}


bool tieneAlergico(Provincia provincias[], int cantProvincias, int provincia){

    bool alergico = false;

    int fila;
    for(fila = 0; fila < provincias[provincia].cantidadDeAlergicos && alergico == false; fila++){
        if(provincias[provincia].alergicosID[fila][0] == 1 && provincias[provincia].alergicosID[fila][1] == 5){
            alergico = true;
        }
    }

    return alergico;
}






