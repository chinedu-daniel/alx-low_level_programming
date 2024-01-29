#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
