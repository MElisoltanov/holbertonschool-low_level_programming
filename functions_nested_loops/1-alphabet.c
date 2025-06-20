#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - prints the alphabet in lowercase followed by a newline
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z' ; abc++)

		_putchar(abc);

	_putchar('\n');
}
