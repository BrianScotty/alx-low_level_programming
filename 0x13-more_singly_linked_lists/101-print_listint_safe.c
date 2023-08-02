#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - Counts nodes
 * @head: pointer
 * Return: 9 if list is not looped, otherwise number of nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	x = head->next;
	y = (head->next)->next;
	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				nodes++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				nodes++;
				x = x->next;
			}
			return (nodes);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a list
 * @head: pointer
 * Return: amout of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %u\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %u\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %u\n", (void *)head, head->n);
	}
	return (nodes);
}
