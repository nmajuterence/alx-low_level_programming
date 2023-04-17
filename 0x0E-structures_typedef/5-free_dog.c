#include "dog.h"

/**
 * free_dog - this function frees all allocated memory
 * @d: function parameter
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

