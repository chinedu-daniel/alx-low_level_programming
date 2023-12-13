#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely, handling loop
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t node_count = 0;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		node_count++;

		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			printf("Linked list is a loop\n");
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		head = head->next;
	}
	return (node_count++);
}
