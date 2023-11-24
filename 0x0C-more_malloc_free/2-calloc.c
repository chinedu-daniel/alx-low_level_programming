#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb element
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, or if malloc fails, it returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
