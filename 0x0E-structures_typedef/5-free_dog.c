#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees instance of struct dog
 * @d: instance to free
 */
void free_dog(dog_t *d)
{
	/* free members of struct that exist */
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
