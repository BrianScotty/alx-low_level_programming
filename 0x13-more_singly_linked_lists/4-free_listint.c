#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
	}
	free(head);
}
