#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: pointer
 * Return: frees dogs.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
