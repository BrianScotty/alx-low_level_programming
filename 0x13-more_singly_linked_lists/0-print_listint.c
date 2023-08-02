#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: pointer
 * Return: amount of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
