#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * @height: height dimension of grid
 * @grid: 2d grid
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

