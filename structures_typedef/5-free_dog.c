#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog to be freed
 *
 * Description: Frees name, owner, and the dog struct itself
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
