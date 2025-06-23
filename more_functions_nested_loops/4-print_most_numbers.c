#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9 (except 2 and 4)
 *
 * Description: Uses _putchar to display digits 0-9, skipping 2 and 4,
 * followed by a newline.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar ('0' + n);
	}
	_putchar ('\n');
}
