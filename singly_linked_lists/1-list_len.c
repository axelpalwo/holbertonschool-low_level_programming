#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list
 * @h: Structure
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
