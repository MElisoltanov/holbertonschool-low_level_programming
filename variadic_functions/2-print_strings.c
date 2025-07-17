#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 *
 * Description: Prints each string from the variadic list.
 * If a string is NULL, prints "(nil)" instead.
 * If separator is not NULL, it is printed between strings,
 * but not after the last one.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *result;

	va_start(args, n);

	while (i < n)
	{
		result = va_arg(args, char *);

		printf("%s", result);

		if (result == NULL)
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
