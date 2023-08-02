#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer
 * @n: new node input
 * Return: pointer, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (node);
}
