#include "lists.h"
/**
 * add_node_end - adds a new node at the beggining of a list
 * @head: Head of list
 * @str: String
 * Return: Structure (Node)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	size_t counter;
	list_t *current;

	*current = *head;
	while (current != NULL)
	{
		current = current->next;
	}

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (counter = 0; *str != '\0'; str++)
		counter++;
	new_node->len = counter;
	new_node->next = NULL;

	return (new_node);
}
