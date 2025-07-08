#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: The 2D grid to free
 * @height: The number of rows in the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
