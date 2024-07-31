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

	/* Asignamos memoria para el nuevo nodo */
	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* Duplicamos string y asignamos len */
	new_node->str = strdup(str);
	for (counter = 0; *str != '\0'; str++)
		counter++;
	new_node->len = counter;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Vamos hasta el ultimo nodo */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	/* Retornamos el nuevo nodo armado */
	return (new_node);
}
