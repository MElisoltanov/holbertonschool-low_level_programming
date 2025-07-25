#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 * @dest: the destination buffer
 * @src: the source string to copy
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
