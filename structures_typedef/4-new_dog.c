#include "dog.h"
#include "length.c"
#include "strncpy.c"
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
	int len_name = length(name) + 1;
	int len_owner = length(owner) + 1;
	char *new_owner;
	char *new_name;

	new_name = malloc(sizeof(char) * len_name);
	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	new_name = _strncpy(new_name, name, len_name);

	new_owner = malloc(sizeof(char) * len_owner);
	if (new_owner == NULL)
	{
		free(new_owner);
		return (NULL);
	}
	new_owner = _strncpy(new_owner, owner, len_owner);
	/* Malloc de la nueva estructura*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/* Le asignamos valor al atributo name*/
	newdog->name = new_name;
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
	}
	/* Le asignamos valor al atributo age */
	newdog->age = age;
	/* Le asignamos valor al atributo owner */
	newdog->owner = new_owner;
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
	}
	/* Retornamos la nueva estructura formada */
	return (newdog);
}
