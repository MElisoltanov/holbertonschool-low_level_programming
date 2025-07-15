#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer using a comparison function.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that compares values.
 *
 * Return: Index of first matching element, or -1 if none or invalid input.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}

	return (-1);
}
