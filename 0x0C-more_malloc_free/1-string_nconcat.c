#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the maximum number of bytes from s2 to concatenate
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int result;
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *new_ptr = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] != '\0'; i++)
		s1_len++;

	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = s1_len + n;
	new_ptr = malloc(result + 1);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new_ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		new_ptr[s1_len = j] = s2[j];

	new_ptr[result] = '\0';

	return (new_ptr);
}
