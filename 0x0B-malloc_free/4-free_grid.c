/*
* File: 4-free_grid.c
* Author: Peter Njoroge
*/

#include "main.h"
#include <stdlib.h>

/**
*  free_grid -  frees a 2 dimensional grid previously created
*  by your alloc_grid function.
*  @grid: int arg
*  @height: int arg
*  Return: int
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
