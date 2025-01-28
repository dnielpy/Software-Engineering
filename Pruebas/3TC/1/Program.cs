using System;

public class Solution
{
    public int MinimumOperations(int[,] grid, int gridSize, int gridColSize)
    {
        int result = 0;

        int anterior = grid[0,0];

        int fila = 0;
        int columna = 0;

        for (columna; columna < gridColSize; columna++)
        {
            for (fila; fila < gridSize; fila++)
            {
                while (anterior > grid[fila, columna])
                {
                    grid[fila, columna]++;
                    result++;
                }
                anterior = grid[fila, columna];
            }
        }
        return result;
    }

    public static void Main(string[] args)
    {
        int[,] grid = new int[,] {
            { 1, 0, 3 },
            { 3, 1, 2 },
            { 0, 2, 1 },
            { 2, 1, 3 }
        };

        int gridSize = 4;
        int gridColSize = 3;

        Solution solution = new Solution();
        int result = solution.MinimumOperations(grid, gridSize, gridColSize);

        Console.WriteLine(result);
    }
}

