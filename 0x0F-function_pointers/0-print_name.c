#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: function name that we want to print
 * @f: function pointer
 *
 * Return: success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
