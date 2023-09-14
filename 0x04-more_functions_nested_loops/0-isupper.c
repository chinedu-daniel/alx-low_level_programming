#include "main.h"

/**
 * main - function that checks uppercase character
 *
 * Return: Always 0 or 1
 */

int main(void);

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
