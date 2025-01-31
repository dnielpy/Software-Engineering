#include <stdio.h>
#include <stdbool.h>
#include <string.h>


    


//Logica


//Interfaz
void ingresarDatos(struct Provincia provincias[], int cantidadProvincias) {
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

        int j;
        for(j = 0; j < cantidadDeAlergicos; j++){
            printf("Ingrese el ID del alergico: ");
            while(scanf("%d", &alergicosID[j]) == 0){
                printf("Ingrese un numero valido: ");
                fflush(stdin);
            }
            provincias[i].alergicosID[j] = alergicosID[j];
        }
    }
}

void ingresarDatosPrueba(struct Provincia provincias[], int cantidadProvincias) {
    for(int i = 0; i < cantidadProvincias; i++) {
        int cantidadDeAlergicos = 10 + i;

        sprintf(provincias[i].nombre, "Provincia %d", i + 1);

        provincias[i].vacunados = 1000 + i * 100;

        provincias[i].vacunar = 500 + i * 50;

        provincias[i].cantidadDeAlergicos = cantidadDeAlergicos;

        for(int j = 0; j < cantidadDeAlergicos; j++) {
            provincias[i].alergicosID[j] = j + 1;
        }
    }
    printf("Datos inicializados correctamente\n");
}


int main() {
    
    struct Provincia {
        char nombre[50];
        int vacunados;
        int vacunar;
        int cantidadDeAlergicos;
        int alergicosID[10000]; 
    };

    int cantidadProvincias = 15;

    struct Provincia[cantidadProvincias];

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


    return 0;
}
