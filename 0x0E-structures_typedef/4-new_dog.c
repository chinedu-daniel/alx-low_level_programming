#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates new dog
 * @name: function parameter
 * @age: function parameter
 * @owner: function parameter
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dognew;

	dognew = malloc(sizeof(dog_t));

	if (dognew == NULL)
	{
		return (NULL);
	}

	dognew->name = malloc(strlen(name) + 1);
	dognew->owner = malloc(strlen(owner) + 1);

	if (dognew->name == NULL || dognew->owner == NULL)
	{
		free(dognew->name);
		free(dognew->owner);
		free(dognew);

		return (NULL);
	}
	strcpy(dognew->name, name);
	dognew->age = age;
	strcpy(dognew->owner, owner);

	return (dognew);
}
