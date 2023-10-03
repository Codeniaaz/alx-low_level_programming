#include "main.h"
#include <stdlib.h>

/**
 *free_grid - function that frees a 2D previously created by your alloc_grid
 *@grid: pointer to a grid to be freed
 *@height: theheight of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
