#include <stdio.h>

/**
 * main - Entry point
 * Description - prints number base 10
 * Return: 0
 */

int main(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
