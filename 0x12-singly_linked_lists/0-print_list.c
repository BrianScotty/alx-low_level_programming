#include "lists.h"

/**
 * print_list - prints all elements of the list
 * @h: pointer
 * Return: amount of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
