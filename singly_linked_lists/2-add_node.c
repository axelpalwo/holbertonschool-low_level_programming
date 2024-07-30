#include "lists.h"
/**
 * add_node - adds a new node at the beggining of a list
 * @head: Head of list
 * @str: String
 * Return: Structure (Node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t counter;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (counter = 0; *str != '\0'; counter++);
	new_node->str = strdup(str);
	new_node->len = counter;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
