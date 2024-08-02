#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at index of list
 * @head: Head of list
 * @index: Index
 * Return: 1 Success / -1 Failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	for (counter = 0; current != NULL && counter < index; counter++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
	} else
	{
		if (current->next != NULL)
			current->next->prev = current->prev;
		current->prev->next = current->next;
	}
	free(current);
	return (1);
}
