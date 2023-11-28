#include<stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @newDog: function prototype
 * @name: first function
 * @age: second function
 * @owner: third function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog != NULL)
	{
		newDog->name = strdup(name);

		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}

		newDog->age = age;

		newDog->owner = strdup(owner);

		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);

			return (NULL);
		}
	}

	return (newDog);
}
