#include <stdio.h>

int minimumOperations(int grid[4][3], int gridSize, int gridColSize) {
    int result = 0;

    int fila;
    int columna;

    for(columna = 0; columna < gridColSize; columna++){
        for(fila = 1; fila < gridSize; fila++){
            if(fila > 0){
                while(grid[fila][columna] <= grid[fila-1][columna]){
                    result++;
                    grid[fila][columna]++;
                }
            }   
        }
    }
    return result;
}

int main() {
    int grid[4][3] = {
        {1, 0, 3},
        {3, 1, 2},
        {0, 2, 1},
        {2, 1, 3}
    };

    int gridSize = 4;
    int gridColSize = 3;

    int result = minimumOperations(grid, gridSize, gridColSize);

    printf("%d", result);

    return 0;
}