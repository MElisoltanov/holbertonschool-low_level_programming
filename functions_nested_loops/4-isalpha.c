#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isalpha - checks for letter
 * @c: the character to check
 *
 * Return: 1 if c is letter  lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
