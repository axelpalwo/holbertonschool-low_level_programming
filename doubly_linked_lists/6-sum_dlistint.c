#include "lists.h"
/**
 * sum_dlistint - Sums all the data (n) of a list
 * @head: Head of list
 * Return: Result
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *current;

	if (head == NULL)
		return (result);
	current = head;
	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
