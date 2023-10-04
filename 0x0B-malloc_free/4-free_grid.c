#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a prototype function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: variable holding the 2D grid
 * @height: variable holding the height of the array dimension
 * Return: 0 Always
 */

void free_grid(int **grid, int height)
{
	int cycle;

	for (cycle = 0; cycle < height; cycle++)
	{
		free(grid[cycle]);
	}

	{
	free(grid);
	}
}
