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

	/* Loop through n characters */
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')           /* If src has a character at this position */
			dest[i] = src[i];         /* Copy the character from src to dest */
		else
			dest[i] = '\0';          /* Otherwise, pad dest with '\0' */
	}

	return (dest);                    /* Return the modified dest string */
}
