#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beggining of a list
 * @head: Head of list
 * @n: Int to be added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;

	return (new_node);
}

