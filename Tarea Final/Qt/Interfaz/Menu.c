#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <Logica/Datos.h>


void menu(){

    do {
        printf("\n--- Campaña de Vacunación Antipolio ---\n");
        printf("1. Cargar datos de las provincias\n");
        printf("2. Total de niños a vacunar\n");
        printf("3. Reporte de provincias con niños alérgicos\n");
        printf("4. Reporte de provincias que superan la campaña anterior\n");
        printf("5. Provincias que vacunarán más niños\n");
        printf("6. Verificar si provincia tiene al menos un niño alérgico nacido en 2015\n");
        printf("0. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        getchar(); // Consume el newline pendiente

        switch (opcion) {
        case 1:
            printf("Implementar");
            break;
        case 2:
            printf("Total de niños a vacunar (IMPLEMENTAR)\n");
            break;
        case 3:
            printf("Reporte de provincias con niños alérgicos (IMPLEMENTAR)\n");
            break;
        case 4:
            printf("Reporte de provincias que superan la campaña anterior (IMPLEMENTAR)\n");
            break;
        case 5:
            printf("Provincias que vacunarán más niños (IMPLEMENTAR)\n");
            break;
        case 6:
            printf("Verificar si provincia tiene alérgico nacido en 2015 (IMPLEMENTAR)\n");
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 0);
}
