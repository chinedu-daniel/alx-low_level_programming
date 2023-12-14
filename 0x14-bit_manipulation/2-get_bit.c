#include "main.h"

/**
 * get_bit - gets the value of a bit at a given inbox
 * @n: the number to extract the bit from
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at the given index, or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
