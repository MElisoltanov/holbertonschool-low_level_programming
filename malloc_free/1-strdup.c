#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicates a string into newly allocated memory
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string,
 * or NULL if str is NULL or malloc fails
 */

char *_strdup(char *str)
{
	unsigned int len = 0, i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';

	return (copy);
}
