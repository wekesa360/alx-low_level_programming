#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  Free memory allocated to apreviously created 2D array
 * @grid: The 2D array to free memory from
 * @height: The height of the 2D array 
 * 
 * Return: Nothing
 * 
 */
vouid free_grid(int **grid, int height){
    int i;

    i = 0;
    while (i < height){
        free(grid[i]);
        i++;
    }
    free(grid);
}