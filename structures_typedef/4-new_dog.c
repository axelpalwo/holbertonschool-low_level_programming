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

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
	}
	newdog->age = age;
	newdog->owner = owner;
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
	}

	return (newdog);
}
