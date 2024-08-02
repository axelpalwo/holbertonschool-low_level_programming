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
	/* Case index = 0 (Primera posicion) */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	/* Recorremos la lista hasta la pos anterior al index*/
	for (counter = 0; current != NULL && counter < idx - 1; counter++)
		current = current->next;
	/* Si el nodo es nulo, nos salimos de la lista*/
	if (current == NULL)
		return (NULL);
	/* Prev & Next del nodo creado */
	new_node->next = current->next;
	new_node->prev = current;
	/* Si el nodo siguiente existe, hacemos que Prev apunte a nuestro nodo */
	if (current->next != NULL)
		current->next->prev = new_node;
	/* Colocamos nuestro nodo en el next a su anterior*/
	current->next = new_node;

	return (new_node);
}
