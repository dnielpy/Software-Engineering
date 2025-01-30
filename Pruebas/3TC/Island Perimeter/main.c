#include <stdio.h>
#include <stdbool.h>


int bordes(int** grid, int fila, int columna, int posFil, int posCol){
    int contador = 4;
    // -->
    if(posFil + 1 < fila && grid[posFil + 1][posCol] == 1){  
        contador--;
    }
    // <--
    if(posFil - 1 >= 0 && grid[posFil - 1][posCol] == 1){  
        contador--;
    }
    //abajo
    if(posCol + 1 < columna && grid[posFil][posCol + 1] == 1){  
        contador--;
    }
    //arriba
    if(posCol - 1 >= 0 && grid[posFil][posCol - 1] == 1){  
        contador--;
    }

    return contador;
}

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter = 0;

    int i;
    int j;
    for(i = 0; i < gridSize; i++){
        for(j = 0; j < * gridColSize; j++){
            if(grid[i][j] == 1){
                perimeter += bordes(grid, gridSize, *gridColSize, i, j);
            }
        }
    }
    return perimeter;
}


int main() {


    
    return 0;
}
