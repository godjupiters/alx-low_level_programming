#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a prototype function that frees struct dog
 * @d: struct to be freed
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
