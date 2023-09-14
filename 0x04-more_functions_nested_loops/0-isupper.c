#include "main.h"

/**
 * main - function that checks uppercase character
 * @c: the function parameter
 * Return: Always 0 or 1
 */

int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
