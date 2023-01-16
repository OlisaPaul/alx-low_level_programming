#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it frees memory in the heap
 * @d: a structure
 *
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
