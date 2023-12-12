#include<stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: function parameter 1
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
