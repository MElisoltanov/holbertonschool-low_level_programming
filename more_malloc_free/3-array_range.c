#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
*
* @min: the minimum value (inclusive)
* @max: the maximum value (inclusive)
*
* Return: pointer to the newly created array, or NULL if fails
*/

int *array_range(int min, int max)
{
	int *grid;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	for (i = 0; i < max - min + 1; i++)
	{
	}

	grid = malloc((max - min + 1) * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		grid[i] = min + i;
	}

	return (grid);
}
