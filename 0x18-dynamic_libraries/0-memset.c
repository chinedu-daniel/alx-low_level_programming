#include "main.h"
/**
 * _memset - function that fills the first n bytes
 * @s: A pointer to the memory area to be filled
 * @b: The byte value to be set in each memory location
 * @n: The number of bytes to be set
 * Return: A pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
