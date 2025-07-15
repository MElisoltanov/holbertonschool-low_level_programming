#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @action: Function pointer to apply on each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
