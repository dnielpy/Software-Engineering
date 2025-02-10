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

    int i;
    for(i = 0; i < cantidadProvincias; i++){
        system("cls");
        printf("Provincia: %s\n", provincias[i].nombre);
        //Inicializar Vacunados
        printf("Ingrese la cantidad de vacunados: ");
        while(scanf("%d", &vacunados) == 0 || vacunados < 0){
            printf("Ingrese un n\243mero v\240lido: ");
            fflush(stdin);
        }
        provincias[i].vacunados = vacunados;

        //Inicializar Vacunar
        printf("Ingrese la cantidad de personas a vacunar: ");
        while(scanf("%d", &vacunar) == 0 || vacunar < 0){
            printf("Ingrese un n\243mero v\240lido: ");
            fflush(stdin);
        }
        provincias[i].vacunar = vacunar;

        //Inicializar Alergicos
        printf("Ingrese la cantidad de alergicos: ");
        while(scanf("%d", &cantidadDeAlergicos) == 0 || cantidadDeAlergicos < 0){
            printf("Ingrese un n\243mero v\240lido: ");
            fflush(stdin);
        }

        provincias[i].cantidadDeAlergicos = cantidadDeAlergicos;

        //Inicializar AlergicosID
        int j;

        for(j = 0; j < cantidadDeAlergicos; j++){
            printf("Ingrese el ID del al\202rgico %d: ", j);
            while(scanf("%s", &alergicosID[j]) == 0 || chequearIdValido(alergicosID[j]) == false) {
                printf("Ingrese un n\243mero v\240lido: ");
                fflush(stdin);
            }
            strcpy(provincias[i].alergicosID[j], alergicosID[j]);
        }
    }
}

//Ingresar Datos Automaticamente
void ingresarDatosAutomaticamente(Provincia provincias[], int cantidadProvincias){
    system("cls");
    inicializarDatosAutomaticamente(provincias, cantidadProvincias);
    printf("\nProvincias inicializadas correctamente.\n");
    system("pause");
}







