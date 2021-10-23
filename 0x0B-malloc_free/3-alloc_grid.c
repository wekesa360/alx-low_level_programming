#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: Width of grid i.e number of columns
 * @height: Height of grid i.e number of rows
 * 
 * Return: Pointer to 2D array, NULL if it fails
 */

int **alloc_grid(int width, int height){

    int **grid;
    int j, i;
    i = 0;
    if (width <= 0 || height <= 0)
        return (NULL);
    grid = malloc(height * sizeof(*grid));
    if (grid == NULL){
        free(grid);
        return (NULL);
    }
    while(i < height){
        grid[i] = malloc(width * sizeof(**grid));
        if (grid[i] == NULL){
            i--;
            while (i >= 0){
                free(grid[i]);
                i--;
            }
            free(grid);
            return (NULL);

        }
        j = 0;
        while (j < width){
            grid[i][j] = 0;
            j++;
        }
        i++:

    }
    i = 0;
    return (grid);
}