#include "lists.h"
/**
 * print_dlistint - Prints all the elements in a double list
 * @dlistint_t: Double list
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t counter = 0;

	if (h == NULL)
		return (NULL);

	current = h;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}

