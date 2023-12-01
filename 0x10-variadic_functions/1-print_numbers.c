#include "variadic_functions.h"

/**
 * print_numbers - print integers
 * @separator: string to be printed between numbers
 * @n: number of ints to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arr;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, int);
		printf("%d\n", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
