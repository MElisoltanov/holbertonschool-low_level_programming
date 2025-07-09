#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limit on the second string
 * @s1: First string (can be NULL)
 * @s2: Second string (can be NULL)
 * @n: Maximum number of bytes to take from s2
 *
 * Return: Pointer to the newly allocated string containing
 * s1 + first n bytes of s2
 * If malloc fails, returns NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	if (n > len2)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		ptr[len1] = s1[len1];

	for (i = 0; i < n; i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + n] = '\0';

	return (ptr);
}
