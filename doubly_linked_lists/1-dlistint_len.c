#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a list
 *@h: List
 *Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t counter = 0;

	if (h == NULL)
		return (counter);
	current = h;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
