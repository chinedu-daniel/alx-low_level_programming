#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function parameter
 * @d: anything
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->name);
	free(d);

	d = NULL;
}
