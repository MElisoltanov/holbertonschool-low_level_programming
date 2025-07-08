#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated space
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the new string, or NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, len1 = 0, len2 = 0;

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

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
