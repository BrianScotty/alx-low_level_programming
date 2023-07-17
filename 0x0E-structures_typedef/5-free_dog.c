#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory of struct dog
 * @d: input to free
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
