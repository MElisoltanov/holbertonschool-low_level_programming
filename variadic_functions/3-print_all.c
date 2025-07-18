#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);

/**
 * print_all - Prints any type of argument based on a format string
 * @format: A constant string containing type specifiers
 *
 * Description: Supports the following format specifiers:
 * 'c' - char, 'i' - int, 'f' - float, 's' - char *.
 * Each argument is printed in order, separated by ", ".
 * If a string is NULL, prints "(nil)".
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	char tab[] = {'c', 'i', 'f', 's', '\0'};
	void (*fun[])(va_list) = {print_c, print_i, print_f, print_s};
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (tab[j] != '\0')
		{
			if (format[i] == tab[j])
			{
				printf("%s", separator);
				fun[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

/**
 * print_c - Prints a character
 * @args: The argument list containing the character to print
 */

void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - Prints an integer
 * @args: The argument list containing the integer to print
 */

void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - Prints a float
 * @args: The argument list containing the float to print
 */

void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - Prints a string
 * @args: The argument list containing the string to print
 *
 * Description: If the string is NULL, prints "(nil)".
 */

void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);

}
