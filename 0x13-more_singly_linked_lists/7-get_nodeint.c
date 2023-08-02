#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: node index
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
