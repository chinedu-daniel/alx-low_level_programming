#include "lists.h"

/**
 * free_listint - free the elements of listint_t list
 * @head: the pointman
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
