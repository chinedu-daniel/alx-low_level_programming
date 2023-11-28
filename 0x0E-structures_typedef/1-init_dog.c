#include<stdio.h>

/**
 * main - main function
 * struct dog: struct function
 * @init_dog - function prototype
 * @d: funtion 1
 * @name: function 2
 * @age: function 3
 * @owner: function 4
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


int main(void)
{
	struct dog myDog;

	init_dog(&myDog, "Buddy", 3.5, "John Doe");

	printf("Dog's Name: %s\n", myDog.name);
	printf("Dog's Age: %.lf\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);

	return (0);
}

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
