#include "lists.h"
/**
 * print_dlistint - Prints all the elements in a double list
 * @h: Double list
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t counter = 0;

	if (h == NULL)
		return (counter);

	current = h;
	while (current != NULL)
	{
		counter++;
		printf("%i\n", current->n);
		current = current->next;
	}
	return (counter);
}
