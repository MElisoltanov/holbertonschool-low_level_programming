#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - prints the alphabet by 10 times
 * in lowercase followed by a newline
 */
void print_alphabet_x10(void)
{
	int i;
	char abc;

	for (i = 0; i < 10; i++)
	{

		for (abc = 'a'; abc <= 'z' ; abc++)

			_putchar(abc);

		_putchar('\n');
	}
}
