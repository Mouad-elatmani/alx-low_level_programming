#include "dog.h"
#include <stdlib.h>

/**
 *  z free_dog - function that frees space of strcut dog
 * @d: pointer to struct dog_t
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
