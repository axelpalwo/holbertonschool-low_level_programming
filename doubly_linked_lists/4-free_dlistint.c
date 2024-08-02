#include "lists.h"
/**
 * free_dlistint - Frees a dlistint list
 * @head: Head of the list
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current;
		current = current->next;
		free(next);
	}
}
