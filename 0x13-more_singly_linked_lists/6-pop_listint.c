#include "lists.h"

/**
 * pop_listint - still in the listint_t list
 * @head: point man list
 *
 * Return: NULL
 */

int pop_listint(listint_t **head)
{
	int data = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	listint_t *temp;

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
