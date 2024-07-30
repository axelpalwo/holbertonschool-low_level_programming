#include "lists.h"
/**
 * print_list - Prints a single linked list
 * @h: Structure
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}

	return (counter);
}
