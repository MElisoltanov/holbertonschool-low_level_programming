#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the square matrix
 * @size: the number of rows and columns (square matrix)
 *
 * Description: The function calculates and prints the sum of the primary
 * (top-left to bottom-right) and secondary (top-right to bottom-left)
 * diagonals of a square matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];

		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
