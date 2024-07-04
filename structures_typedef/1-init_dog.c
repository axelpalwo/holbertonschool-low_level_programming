#include "dog.h"
/**
 * init_dog - Initializes a new dog
 *@d: New dog instance
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *Return: None;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
