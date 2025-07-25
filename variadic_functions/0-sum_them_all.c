#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of arguments passed to the function.
 * Return: Sum of all arguments, or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		i++;
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
