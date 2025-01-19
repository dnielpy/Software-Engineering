#include <math.h>

//Formula para calcular el area
float calcularArea(float a, float b, float angulo){
    float area = 0;
    float radianes = angulo * M_PI / 180.0;
    area = 0.5 * (a*b) * sin(radianes);

    return area;
}

//Formula para calcular el porcentaje
float calcularPorcentaje(int grandes, int total){
    float porcentaje = (grandes * 100) / total * 1.0;

    return porcentaje;
}

//Formula para obtener el promedio de valores de un arreglo
float obtenerPromedio(float arreglo[], int size){

    float promedio = 0;

    if(size != 1){
        int i = 0;
        for(i; i < size; i++){
            promedio += arreglo[i];
        }

        promedio = promedio / size;
    }

    else{
        promedio = arreglo[0];
    }

    return promedio;
}


//Contar mayores que promedio
int contarMayoresQuePromedio(float arreglo[], int size, float promedio){

    int contador = 0;

    int i = 0;
    for(i; i < size; i++){
        if(arreglo[i] > promedio){
            contador++;
        }
    }

    return contador;
}






