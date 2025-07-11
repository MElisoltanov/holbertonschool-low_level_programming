#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string in newly allocated memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	while (i <= len)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}

/**
 * new_dog - Creates a new dog and stores a copy of name and owner
 * @name: Pointer to a string with the dog’s name
 * @age: Age of the dog
 * @owner: Pointer to a string with the owner’s name
 *
 * Return: Pointer to the new dog (dog_t), or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
