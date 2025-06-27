#include "main.h"
/**
 * _strcpy - Copies a string, including the null byte, to a destination buffer
 * @dest: Destination buffer
 * @src: Source string to copy
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
