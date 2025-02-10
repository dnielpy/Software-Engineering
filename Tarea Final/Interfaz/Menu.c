#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>
#include <Interfaz/Interfaz.h>

void menu(struct provincia provincias[], int cantProvincias){
    inicializarNombres(provincias);
    int opcion;
    do {
        printf("\n--- Campa\244a de Vacunaci\242n Antipolio ---\n");
        printf("1. Cargar datos de las provincias manualmente\n");
        printf("2. Cargar datos de las provincias autom\240ticamente\n");
        printf("3. Total de ni\244os a vacunar\n");
        printf("4. Reporte de provincias con ni\244os al\202rgicos\n");
        printf("5. Reporte de provincias que superan la campa\244a anterior\n");
        printf("6. Provincias que vacunar\240n m\240s ni\244os\n");
        printf("7. Verificar si provincia tiene al menos un ni\244o al\202rgico nacido en 2015\n");
        printf("8. Salir\n");
        printf("Ingrese una opci\242n: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
        case 1:
            ingresarDatosManualmente(provincias, cantProvincias);
            break;
        case 2:
            ingresarDatosAutomaticamente(provincias, cantProvincias);
            break;
        case 3:
            printf("Reporte de provincias con ni\244os al\202rgicos (IMPLEMENTAR)\n");
            break;
        case 4:
            printf("Reporte de provincias que superan la campa\244a anterior (IMPLEMENTAR)\n");
            break;
        case 5:
            printf("Provincias que vacunar\240n m\240s ni\244os (IMPLEMENTAR)\n");
            break;
        case 6:
            printf("Verificar si provincia tiene al\202rgico nacido en 2015 (IMPLEMENTAR)\n");
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opci\242n inv\240lida. Intente de nuevo.\n");
        }
    } while (opcion != 0);
}
