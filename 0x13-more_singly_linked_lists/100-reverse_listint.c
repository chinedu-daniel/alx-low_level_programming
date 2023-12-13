#include "lists.h"

/**
 * reverse_listint - elements to reverse listint_t list
 * @head: the point man
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node = NULL;

	if (current == NULL || current->next == NULL)
	{
		return (current);
	}

	next_node = current->next;
	current->next = NULL;

	reverse_listint(&next_node);

	next_node->next = current;
	*head = next_node;

	return (*head);
}
