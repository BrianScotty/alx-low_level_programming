#include "lists.h"

/**
* listint_len - gives the amount of elements in a linked list
* @h: pointer
* Return: amount of elements
*/

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
