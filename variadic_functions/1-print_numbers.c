#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int result = 0;

	va_start(args, n);

	while (i < n)
	{
		result = va_arg(args, int);

		printf("%d", result);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
