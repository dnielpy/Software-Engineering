#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>
#include <Interfaz/Interfaz.h>

void menuDatos(struct provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]){
    int opcion;
    bool completed = false;
    do {
        system("cls");
        printf("##::::'##:'########:'##::: ##:'##::::'##::::'########:::::'###::::'########::'#######:::'######::\n###::'###: ##.....:: ###:: ##: ##:::: ##:::: ##.... ##:::'## ##:::... ##..::'##.... ##:'##... ##:\n####'####: ##::::::: ####: ##: ##:::: ##:::: ##:::: ##::'##:. ##::::: ##:::: ##:::: ##: ##:::..::\n## ### ##: ######::: ## ## ##: ##:::: ##:::: ##:::: ##:'##:::. ##:::: ##:::: ##:::: ##:. ######::\n##. #: ##: ##...:::: ##. ####: ##:::: ##:::: ##:::: ##: #########:::: ##:::: ##:::: ##::..... ##:\n##:.:: ##: ##::::::: ##:. ###: ##:::: ##:::: ##:::: ##: ##.... ##:::: ##:::: ##:::: ##:'##::: ##:\n##:::: ##: ########: ##::. ##:. #######::::: ########:: ##:::: ##:::: ##::::. #######::. ######::");
        printf("\n\n1. Cargar datos de las provincias manualmente\n");
        printf("2. Cargar datos de las provincias autom\240ticamente\n");
        printf("3. Salir\n");
        printf("Ingrese una opci\242n: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
        case 1:
            if(completed == false){
                ingresarDatosManualmente(provincias, cantProvincias);
            }
            else{
                printf("Los Datos Ya Han Sido Cargados");
            }
            break;
        case 2:
            if(completed == false){
                ingresarDatosAutomaticamente(provincias, cantProvincias);
                completed = true;
            }
            else{
                printf("Los Datos Ya Han Sido Inicializados");
            }
            break;
        case 3:
            break;

        default:
            printf("Opci\242n inv\240lida. Intente de nuevo.\n");
        }
    } while (opcion != 3 && completed == false);
}

void menuReportes(struct provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]){
    int opcion;
    do {
        system("cls");
        printf("########::'########:'########:::'#######::'########::'########:'########::'######::\n##.... ##: ##.....:: ##.... ##:'##.... ##: ##.... ##:... ##..:: ##.....::'##... ##:\n##:::: ##: ##::::::: ##:::: ##: ##:::: ##: ##:::: ##:::: ##:::: ##::::::: ##:::..::\n########:: ######::: ########:: ##:::: ##: ########::::: ##:::: ######:::. ######::\n##.. ##::: ##...:::: ##.....::: ##:::: ##: ##.. ##:::::: ##:::: ##...:::::..... ##:\n##::. ##:: ##::::::: ##:::::::: ##:::: ##: ##::. ##::::: ##:::: ##:::::::'##::: ##:\n##:::. ##: ########: ##::::::::. #######:: ##:::. ##:::: ##:::: ########:. ######::");
        printf("\n\n1. Total de ni\244os a vacunar\n");
        printf("2. Reporte de Provincias con ni\244os al\202rgicos\n");
        printf("3. Reporte de Provincias que superan la campa\244a anterior\n");
        printf("4. Reporte de Provincias que vacunar\240n m\240s ni\244os\n");
        printf("5. Verificar si provincia tiene al menos un ni\244o al\202rgico nacido en 2015\n");
        printf("6. Salir\n");
        printf("Ingrese una opci\242n: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
        case 1:
            mostrarTotalAVacunar(provincias, cantProvincias);
            break;
        case 2:
            reporteAlergicos(provincias, cantProvincias);
            break;
        case 3:
            reporteVacunadosVsVacunar(provincias, cantProvincias);
            break;
        case 4:
            reporteProvinciasMasVacunaran(provincias, cantProvincias, provinciasVacunaranMas);
            break;
        case 5:
            system("cls");
            reporteAlergico2015(provincias, cantProvincias);
            system("pause");
            break;

        case 6:
            break;
        default:
            printf("Opci\242n inv\240lida. Intente de nuevo.\n");
        }
    } while (opcion != 6);
}

void menu(struct provincia provincias[], int cantProvincias, bool provinciasVacunaranMas[]){
    int opcion;
    do {
        system("cls");
        printf("##::::'##:'########:'##::: ##:'##::::'##:\n###::'###: ##.....:: ###:: ##: ##:::: ##:\n####'####: ##::::::: ####: ##: ##:::: ##:\n## ### ##: ######::: ## ## ##: ##:::: ##:\n##. #: ##: ##...:::: ##. ####: ##:::: ##:\n##:.:: ##: ##::::::: ##:. ###: ##:::: ##:\n##:::: ##: ########: ##::. ##:. #######::");
        printf("\n\n1. Cargar datos\n");
        printf("2. Reportes\n");
        printf("3. Salir\n");
        printf("Ingrese una opci\242n: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
        case 1:
            menuDatos(provincias, cantProvincias, provinciasVacunaranMas);
            system("pause");
            break;

        case 2:
            menuReportes(provincias, cantProvincias, provinciasVacunaranMas);
            break;

        case 3:
            break;

        default:
            printf("Opci\242n inv\240lida. Intente de nuevo.\n");
        }
    } while (opcion != 3);
}

