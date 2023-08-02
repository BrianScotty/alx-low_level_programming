#include "lists.h"

/**
 * sum_listint - add the data in a list
 * @head: pointer
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int y = 0;
	listint_t *temp = head;

	while (temp)
	{
		y += temp->n;
		temp = temp->next;
	}

	return (y);
}
