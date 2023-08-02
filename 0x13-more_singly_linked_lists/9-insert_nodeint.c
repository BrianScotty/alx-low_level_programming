#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer
 * @idx: position to add node
 * @n: node input
 * Return: address of new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
