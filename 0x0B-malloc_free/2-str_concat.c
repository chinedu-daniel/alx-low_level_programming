#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function to concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++
			;
	while (s2[len2])
		len2++;

	concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i++] = s2[j];

	concat_str[i] = '\0';

	return (concat_str);
}
