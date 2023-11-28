#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function prototype
 * @d: funtion 1
 * @name: function 2
 * @age: function 3
 * @owner: function 4
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
