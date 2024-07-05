#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	/* Malloc de la nueva estructura*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/* Le asignamos valor al atributo name*/
	newdog->name = name;
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
	}
	/* Le asignamos valor al atributo age */
	newdog->age = age;
	/* Le asignamos valor al atributo owner */
	newdog->owner = owner;
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
	}
	/* Retornamos la nueva estructura formada */
	return (newdog);
}
