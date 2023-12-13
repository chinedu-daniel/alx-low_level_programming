#include "lists.h"

/**
 * reverse_listint - elements to reverse listint_t list
 * @head: the point man
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;
	return (*head);
}
