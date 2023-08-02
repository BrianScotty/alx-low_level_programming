#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer
 * Return: node address where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
		return (NULL);
	while (x && y && y->next)
	{
		y = y->next->next;
		x = x->next;
		if (y == x)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (y);
		}
	}
	return (NULL);
}
