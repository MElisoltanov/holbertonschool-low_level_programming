#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isdigit - checks for digit
 * @c: the character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else

	{
		return (0);
	}
}
