#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *strdout;
	size_t i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
		return (NULL);

	for (j = 0; j < i; i++)
		strdout[j] = str[j];
	return (strdout);
}
