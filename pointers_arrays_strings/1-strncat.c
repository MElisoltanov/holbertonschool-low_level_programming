#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: the destination string (must have enough space)
 * @src: the source string to append to dest
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	/* Step 1: go to the end of dest */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/* Step 2: copy at most n characters from src */
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;

		dest[i] = src[j];
		i++;
	}

	/* Step 3: add null terminator */
	dest[i] = '\0';

	return (dest);
}

