#include "dog.h"
/**
 * free_dog - Frees memory of a structure
 * @d: Instance of class
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
