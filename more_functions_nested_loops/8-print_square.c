#include "main.h"
/**
 * print_square - Prints a square with '#'
 * @size: The square's size
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar (35);
			}
				_putchar ('\n');
		}
	}
}
