#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Head of the list
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (head != NULL)
	{
		free(current->str);
		current = current->next;
	}
}
