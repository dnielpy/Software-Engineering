#include <math.h>

//Formula para calcular el area
float calcularArea(float a, float b, float angulo){
    float area;
    float radianes = angulo * M_PI / 180.0;
    area = 0.5 * (a*b) * sin(radianes);

    return area;
}

//Formula para calcular el porcentaje
float calcularPorcentaje(int grandes, int total){
    float porcentaje = (grandes * 100) / total * 1.0;

    return porcentaje;
}
