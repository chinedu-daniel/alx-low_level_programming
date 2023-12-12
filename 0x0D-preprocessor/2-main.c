#include <stdio.h>

/**
 * main - a program that prints the name of the file
 * it was compiled from, followed by a new
 *
 * Return: (0)
 */

int main(void)
{
	printf("The name of the file is: %s\n" (__BUFFER_MACRO_H__));

	return (0);
}
