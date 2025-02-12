#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>
#include <time.h>

//Inicializar datos
void inicializar(struct provincia provincias[], int cantProvincias){
    strcpy(provincias[0].nombre, "Pinar del Rio");
    strcpy(provincias[1].nombre, "Artemisa");
    strcpy(provincias[2].nombre, "La Habana");
    strcpy(provincias[3].nombre, "Mayabeque");
    strcpy(provincias[4].nombre, "Matanzas");
    strcpy(provincias[5].nombre, "Cienfuegos");
    strcpy(provincias[6].nombre, "Villa Clara");
    strcpy(provincias[7].nombre, "Sancti Spiritus");
    strcpy(provincias[8].nombre, "Ciego de Avila");
    strcpy(provincias[9].nombre, "Camaguey");
    strcpy(provincias[10].nombre, "Las Tunas");
    strcpy(provincias[11].nombre, "Holguin");
    strcpy(provincias[12].nombre, "Granma");
    strcpy(provincias[13].nombre, "Santiago de Cuba");
    strcpy(provincias[14].nombre, "Guantanamo");

    int provincia;
    int j;
    int k;
    for(provincia = 0; provincia < cantProvincias; provincia++){
        provincias[provincia].vacunados = 0;
        provincias[provincia].vacunar = 0;
        provincias[provincia].cantidadDeAlergicos = 0;
        for(j = 0; j < 1000; j++){
            for(k = 0; k < 11; k++){
                provincias[provincia].alergicosID[j][k] = '\0';
            }
        }
    }
}

//Generar un id
void generarID(char id[11]) {
    int year = 2007 + (rand() % 4);
    int month = 1 + (rand() % 12);
    int day = 1 + (rand() % 28);

    int lastTwoDigitsOfYear = year % 100;

    sprintf(id, "%02d%02d%02d", lastTwoDigitsOfYear, month, day);

    int i;
    for (i = 6; i < 11; i++) {
        id[i] = '0' + (rand() % 10);
    }
    id[10] = '\0';
}

//Ingresar datos automaticamente
void inicializarDatosAutomaticamente(struct provincia provincias[], int cantProvincias){
    int i;
    int j;
    for(i = 0; i < cantProvincias; i++){
        provincias[i].vacunados = rand() % 500000;
        provincias[i].vacunar = provincias[i].vacunados + (rand() % 200000);
        provincias[i].cantidadDeAlergicos = rand() % 5000;

        for (j = 0; j < provincias[i].cantidadDeAlergicos; j++) {
            generarID(provincias[i].alergicosID[j]);
        }
    }
}

//Devuelve el total a vacunar
int totalVacunar(Provincia *provincias, int cantProvincias){
    int total = 0;
    Provincia *p;

    for(p = provincias; p < provincias + cantProvincias; p++){
        total += p->vacunar;
    }

    return total;
}


//Devuelve el total de alérgicos
int totalAlergicos(Provincia *provincias, int cantProvincias){
    int total = 0;
    Provincia *p;

    for(p = provincias; p < provincias + cantProvincias; p++){
        total += p->cantidadDeAlergicos;
    }

    return total;
}

//Inicializa un arreglo donde las provincias que superen la cant de vacunados con respecto al año anterior, tengan true
void inicializarVacunaranMas(Provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]){
    int provincia;

    for(provincia = 0; provincia < cantProvincias; provincia++){
        provinciasVacunaranMas[provincia] = false;
    }

    for(provincia = 0; provincia < cantProvincias; provincia++){
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
        if(provincias[provincia].vacunar > mayor){
            mayor = provincias[provincia].vacunar;
        }
    }

    for(provincia = 0; provincia < cantProvincias; provincia++){
        if(provincias[provincia].vacunar == mayor){
            provinciasConMayorVacunacion[provincia] = true;
        }
    }
}


//Devuelve true si tiene algún alérgico
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


//Valida si el id ingresado es válido
bool chequearIdValido(char id[]) {
    bool response = true;

    if (id == NULL || id[0] == '\0') {
        response = false;
    } else {
        int i;
        for (i = 0; id[i] != '\0' && response == true; i++) {
            if (!isdigit(id[i])) {
                response = false;

            }
            if (response == true && i > 10) {
                response = false;
            }
        }

        if (response) {
            if (i != 10) {
                response = false;
            } else {
                char yearStr[3] = {id[0], id[1], '\0'};
                char monthStr[3] = {id[2], id[3], '\0'};
                char dayStr[3] = {id[4], id[5], '\0'};

                long year = strtol(yearStr, NULL, 10);
                long month = strtol(monthStr, NULL, 10);
                long day = strtol(dayStr, NULL, 10);

                if (year < 07 || year > 25) {
                    response = false;
                } else if (month < 1 || month > 12) {
                    response = false;
                } else {
                    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                    if (month == 2) { // Febrero
                        if (day < 1 || day > 28) {
                            response = false;
                        }
                    } else {
                        if (day < 1 || day > daysInMonth[month]) {
                            response = false;
                        }
                    }
                }
            }
        }
    }

    return response;
}

//Busca algun alérgico que haya nacido en el 2015
bool buscarAlergico2015(Provincia provincias[], int provincia, char idResult[11]) {
    bool result = false;
    int id;

    for (id = 0; id < provincias[provincia].cantidadDeAlergicos && !result; id++) {
        if (strncmp(provincias[provincia].alergicosID[id], "15", 2) == 0) {
            strcpy(idResult, provincias[provincia].alergicosID[id]);
            result = true;
        }
    }
    return result;
}





