#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>
#include <Logica/Logica.h>


void ingresarDatosManualmente(Provincia provincias[], int cantidadProvincias) {
    int vacunados;
    int vacunar;
    int cantidadDeAlergicos;
    char alergicosID[10000][11];

    system("cls");
    int provincia;

    printf("-- Provincias Ya Inicializadas --");
    for(provincia = 0; provincia < cantidadProvincias; provincia++){
        if(provincias[provincia].vacunar != 0 && provincias[provincia].vacunados != 0){
            printf("\n* %s", provincias[provincia].nombre);
        }
    }

    printf("\n\n------------------------------------------------\n\n");
    printf("\n-- PROVINCIAS RESTANTES --");
    printf("\nEscriba a continuaci\242n el \241ndice de la provincia: ");
    for(provincia = 0; provincia < cantidadProvincias; provincia++){
        if(provincias[provincia].vacunar == 0 && provincias[provincia].vacunados == 0){
            printf("\n%d - %s", provincia+1, provincias[provincia].nombre);
        }
    }

    while(scanf("%d", &provincia) == 0 || provincia <= 0 || provincia > cantidadProvincias || (provincias[provincia-1].vacunar != 0 && provincias[provincia-1].vacunados != 0)){
        printf("ERROR: Escriba una opci\242n v\240lida.");
        fflush(stdin);
    }
    provincia--;

    system("cls");
    printf("Provincia: %s\n", provincias[provincia].nombre);
    //Inicializar Vacunados
    printf("Ingrese la cantidad de vacunados: ");
    while(scanf("%d", &vacunados) == 0 || vacunados < 0){
        printf("Ingrese un n\243mero v\240lido: ");
        fflush(stdin);
    }
    provincias[provincia].vacunados = vacunados;

    //Inicializar Vacunar
    printf("Ingrese la cantidad de personas a vacunar: ");
    while(scanf("%d", &vacunar) == 0 || vacunar < 0){
        printf("Ingrese un n\243mero v\240lido: ");
        fflush(stdin);
    }
    provincias[provincia].vacunar = vacunar;

    //Inicializar Alergicos
    printf("Ingrese la cantidad de alergicos: ");
    while(scanf("%d", &cantidadDeAlergicos) == 0 || cantidadDeAlergicos < 0){
        printf("Ingrese un n\243mero v\240lido: ");
        fflush(stdin);
    }

    provincias[provincia].cantidadDeAlergicos = cantidadDeAlergicos;

    //Inicializar AlergicosID
    int j;
    for(j = 1; j <= cantidadDeAlergicos; j++){
        printf("Ingrese el ID del al\202rgico %d: ", j);
        while(scanf("%s", &alergicosID[j-1]) == 0 || chequearIdValido(alergicosID[j-1]) == false) {
            printf("Ingrese un n\243mero v\240lido: ");
            fflush(stdin);
        }
        strcpy(provincias[provincia].alergicosID[j-1], alergicosID[j-1]);
    }
    system("clear");
}


//Ingresar Datos Automaticamente
void ingresarDatosAutomaticamente(Provincia provincias[], int cantidadProvincias){
    system("cls");
    inicializarDatosAutomaticamente(provincias, cantidadProvincias);
    printf("Provincias inicializadas correctamente.\n");
    system("pause");
}


//Mostrar Total a Vacunar
void mostrarTotalAVacunar(Provincia provincias[], int cantidadProvincias){
    system("cls");
    printf("El total de ni\244os a vacunar esta campa\244a es de: %d \n\n", totalVacunar(provincias, cantidadProvincias));
    system("pause");
}

//Reporte de alergicos
void reporteAlergicos(Provincia provincias[], int cantidadProvincias){
    system("cls");
    int provincia;

    for(provincia = 0; provincia < cantidadProvincias; provincia++){
        if(provincias[provincia].cantidadDeAlergicos > 0){
            printf("\n\nProvincia: %s", provincias[provincia].nombre);
            printf("\nCantidad de al\202rgico: %d", provincias[provincia].cantidadDeAlergicos);
        }
    }
    printf("\n\n-- Total de al\202rgico a vacunar en el pa\241s: %d --", totalAlergicos(provincias, cantidadProvincias));
    system("pause");
}


void reporteVacunadosVsVacunar(Provincia provincias[], int cantidadProvincias){
    system("cls");
    int contador = 0;
    int provincia;
    for(provincia = 0; provincia < cantidadProvincias; provincia++){
        int vacunados = provincias[provincia].vacunados;
        int vacunar = provincias[provincia].vacunar;

        if(vacunar > vacunados){
            printf("\n\nLa provincia %s superar\240 la cantidad de ni\244os a vacunar con respecto a la campa\244a anterior.\nTotal de vacunados el a\244o anterior: %d \nTotal a vacunar este a\244o: %d", provincias[provincia].nombre, vacunados, vacunar);
        }
    }
    if(contador == 0){
        printf("Ninguna provincia superar\240 la cantidad de ni\244os a vacunar con respecto a la campa\244a anterior");
    }
    system("pause");
}

void reporteProvinciasMasVacunaran(Provincia provincias[], int cantidadProvincias, bool provinciasVacunaranMas[]){
    system("cls");
    inicializarProvinciasConMayorVacunacion(provincias, cantidadProvincias, provinciasVacunaranMas);

    int provincia;

    printf("Provincias con la mayor cantidad de ni\244os a vacunar: ");
    for(provincia = 0; provincia < cantidadProvincias; provincia++){
        if(provinciasVacunaranMas[provincia] == true){
            printf("\n%s - %d ni\244os\n", provincias[provincia].nombre, provincias[provincia].vacunar);
        }
    }
    system("pause");
}

void reporteAlergico2015(Provincia provincias[], int cantidadProvincias){
    system("cls");
    int provincia;

    printf("\nEscriba a continuaci\242n el \241ndice de la provincia: ");
    for(provincia = 0; provincia < cantidadProvincias; provincia++){
        printf("\n%d - %s", provincia+1, provincias[provincia].nombre);
    }

    while(scanf("%d", &provincia) == 0 || provincia < 0 || provincia > cantidadProvincias){
        printf("ERROR: Escriba una opci\242n v\240lida.");
        fflush(stdin);
    }

    provincia--;

    char idResult[11];
    if(buscarAlergico2015(provincias, provincia, idResult) == true){
        system("cls");
        printf("La provincia %s tiene al menos un al\202rgico nacido en el 2015, con el ID: %s\n\n", provincias[provincia].nombre, idResult);
    }
    else{
        system("cls");
        printf("La provincia %s no tiene ning\243n al\202rgico nacido en el 2015\n\n", provincias[provincia].nombre);
    }
    system("pause");
}




