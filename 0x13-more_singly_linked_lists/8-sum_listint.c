#include "lists.h"

/**
 * sum_listint - sum the elements of listint_t list
 * @head: the point man
 *
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
