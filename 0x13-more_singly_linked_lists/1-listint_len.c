#include "lists.h"

/**
 * listint_len - prints the length of elements of a list_t list
 * @h: the list_t list
 *
 * Return: the number of nodes in h
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
