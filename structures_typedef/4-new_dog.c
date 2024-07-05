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
	char *newname;
	char *newowner;

	newname = malloc(sizeof(name));
	if (newname == NULL)
		return (NULL);
	strncpy(newname, name, 10);

	newowner = malloc(sizeof(owner));
	if (newowner == NULL)
		return (NULL);
	strncpy(newowner, owner, 10);
	/* Malloc de la nueva estructura*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/* Le asignamos valor al atributo name*/
	newdog->name = newname;
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
	}
	/* Le asignamos valor al atributo age */
	newdog->age = age;
	/* Le asignamos valor al atributo owner */
	newdog->owner = newowner;
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
	}
	/* Retornamos la nueva estructura formada */
	return (newdog);
}
