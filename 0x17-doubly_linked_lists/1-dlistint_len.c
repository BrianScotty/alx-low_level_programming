#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlistint_t list
 * @h: first node of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
