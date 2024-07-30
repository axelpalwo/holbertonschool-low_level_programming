#include "lists.h"
#include <stdio.h>
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	list_t list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	if (h->str == NULL)
		printf("[0] (nil)");

	while (h->str != NULL)
	{
		printf("[%i] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	free(h->str);
	free(h->len);
	free(list);

	return (counter);
}
