#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beggining of a list
 * @head: Head of list
 * @n: Int to be added
 * Return: Node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	current->prev = new_node;
	new_node->next = current;
	*head = new_node;
	return (new_node);
}
