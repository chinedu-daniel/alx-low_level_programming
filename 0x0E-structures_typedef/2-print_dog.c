#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints information about a dog
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Dog's Name: %s\n", d->name);
		printf("Dog's Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
