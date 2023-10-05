#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	unsigned int len = 0, i;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
