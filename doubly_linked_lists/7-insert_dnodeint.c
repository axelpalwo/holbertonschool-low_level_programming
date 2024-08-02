#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Head of list
 * @idx: Index to insert
 * @n: N attribute to new node
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int counter;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	current = *h;
	for (counter = 0; current != NULL; counter++)
		current = current->next;

	if (counter < idx)
		return (NULL);

	current = *h;
	for (counter = 0; counter < idx; counter++)
		current = current->next;

	current->prev->next = new_node;
	new_node->prev = current->prev;

	current->prev = new_node;
	new_node->next = current;

	return (new_node);
}
