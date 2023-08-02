#include "lists.h"

/**
 * add_nodeint - adds a node to beginning of the list
 * @head: pointer
 * @n : new node input
 * Return: new element address or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (node);
}
