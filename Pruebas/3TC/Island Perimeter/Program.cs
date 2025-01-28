//https://leetcode.com/problems/island-perimeter/
using System;

int IslandPerimeter(int[][] grid) {
    int perimeter = 0;

    int row = grid.GetLength(0); 
    int col = 0;
        if (row > 0)
        {
            col = grid[0].Length;
        }

    System.Console.WriteLine(row);
    System.Console.WriteLine(col);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int posibilities = 4;
            if ((grid[i][j] == 1) && (i > 0) && (grid[i-1][j] == 1))
            {
                posibilities--;
            }
            if ((grid[i][j] == 1) && (i < row - 1) && (grid[i+1][j] == 1))
            {
                posibilities--;
            }
            if ((grid[i][j] == 1) && (j > 0) && (grid[i][j-1] == 1))
            {
                posibilities--;
            }
            if ((grid[i][j] == 1) && (j < col - 1) && (grid[i][j+1] == 1))
            {
                posibilities--;
            }
            perimeter += posibilities;
        }
    }
    return perimeter;
}

int[][] grid = new int[4][];
grid[0] = new int[] { 0, 1, 0, 0};
grid[1] = new int[] { 1, 1, 1, 0};
grid[2] = new int[] { 0, 1, 0, 0};
grid[3] = new int[] { 1, 1, 0, 0};

Console.WriteLine(IslandPerimeter(grid)); 


