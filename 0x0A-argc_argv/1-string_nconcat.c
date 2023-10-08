#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function name
 * @s1: first parameter
 * @s2: second parameter
 * @n: portion of n bytes of s2 and it should be null-terminated
 *
 * Return: pointer to a character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc((s1_len + n + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[1] = s1[1];

	for (i = 0; i < n; i++)
		concat_str[s1_len + i] = s2[i];

	concat_str[s1_len + n] = '\0';

	return (concat_str);
}
