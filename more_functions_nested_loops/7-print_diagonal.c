#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
				_putchar (92);
				_putchar ('\n');
		}
	}
}
