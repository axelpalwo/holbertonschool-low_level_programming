#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Head of the list
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *prev;

	current = head;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev->str);
		free(prev);
	}
}
