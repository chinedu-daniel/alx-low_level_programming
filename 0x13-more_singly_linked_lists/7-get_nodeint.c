#include "lists.h"

/**
 * get_nodeint_at_index - to get the pointer at the index
 * @head: the point man
 * @index: the array to be explored
 *
 * Return: if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
