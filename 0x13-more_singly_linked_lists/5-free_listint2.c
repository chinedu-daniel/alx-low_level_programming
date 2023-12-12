#include "lists.h"

/**
 * free_listint2 - free the element of listint_t list
 * @head: the point man
 *
 * Return: NULL on failure
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
