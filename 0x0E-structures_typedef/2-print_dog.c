#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints information about a dog
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
