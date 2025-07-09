#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size
 *         is 0 or if the allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

    /* Étape 1 : vérifier si nmemb ou size est égal à 0 */
	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

    /* Étape 2 : allouer la mémoire pour l'array */
	array = malloc(nmemb * size);

    /* Étape 3 : vérifier si l'allocation a échoué */
	if (array == NULL)
	{
		return (NULL);
	}

    /* Étape 4 : initialiser la mémoire à zéro */
	memset(array, 0, nmemb * size);

    /* Étape 5 : retourner le pointeur vers l'array créé */
	return (array);
}
