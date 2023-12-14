#include <unistd.h>

/**
 * _putchar - write a character to stdout
 * @c: the character to be written
 *
 * Return: 1, success. -1, error
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
