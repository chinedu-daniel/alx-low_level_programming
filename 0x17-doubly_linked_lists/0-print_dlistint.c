#include "lists.h"

/**
 * print_dlistint - function that prints all elements of dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		node_count++;
		current = current->next;
	}

	return (node_count);
}
