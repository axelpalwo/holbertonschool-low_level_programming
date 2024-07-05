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
		return (NULL);
	_strncpy(new_name, name, len_name);
	new_name[len_name - 1] = '\0';
	new_owner = malloc(sizeof(char) * len_owner);
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	_strncpy(new_owner, owner, len_owner);
	new_owner[len_owner - 1] = '\0';
	/* Malloc de la nueva estructura*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	/* Le asignamos valor al atributo name, age y owner*/
	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;
	/* Retornamos la nueva estructura formada */
	return (newdog);
}
