#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
