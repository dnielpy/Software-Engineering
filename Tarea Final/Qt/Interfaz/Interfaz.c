#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


void ingresarDatosManualmente(Provincia provincias[], int cantidadProvincias) {
    int vacunados;
    int vacunar;
    int cantidadDeAlergicos;
    int alergicosID[1000];

    int i;
    for(i = 0; i < cantidadProvincias; i++){
        printf("Provincia: %s\n", provincias[i].nombre);
        //Inicializar Vacunados
        printf("Ingrese la cantidad de vacunados: ");
        while(scanf("%d", &vacunados) == 0){
            printf("Ingrese un numero valido: ");
            fflush(stdin);
        }
        provincias[i].vacunados = vacunados;

        //Inicializar Vacunar
        printf("Ingrese la cantidad de personas a vacunar: ");
        while(scanf("%d", &vacunar) == 0){
            printf("Ingrese un numero valido: ");
            fflush(stdin);
        }
        provincias[i].vacunar = vacunar;

        //Inicializar Alergicos
        printf("Ingrese la cantidad de alergicos: ");
        while(scanf("%d", &cantidadDeAlergicos) == 0){
            printf("Ingrese un numero valido: ");
            fflush(stdin);
        }
        provincias[i].cantidadDeAlergicos = cantidadDeAlergicos;

        //Inicializar AlergicosID
//        int j;
//        for(j = 0; j < cantidadDeAlergicos; j++){
//            printf("Ingrese el ID del alergico: ");
//            while(scanf("%ld", &alergicosID[j]) == 0){
//                printf("Ingrese un numero valido: ");
//                fflush(stdin);
//            }
//            provincias[i].alergicosID[j] = alergicosID[j];
//        }
    }
}









