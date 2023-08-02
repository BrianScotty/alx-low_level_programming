#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 * Return: size of list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int x;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
