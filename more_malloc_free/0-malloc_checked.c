#include "main.h"
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Bytes
 * Return: None
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
