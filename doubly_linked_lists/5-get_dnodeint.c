#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: Head of list
 * @index: Index
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	if (counter < index)
		return (NULL);
	current = head;
	for (counter = 0; counter < index; counter++)
		current = current->next;

	return (current);
}
