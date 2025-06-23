#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Description: Uses _putchar to display the digits from 0 to 9
 * followed by a newline.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar ('0' + n);
	}
	_putchar ('\n');
}
