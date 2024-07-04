#include "dog.h"
/**
 * print_dog - Prints the attributes of dog
 * @d - Instance of dog
 * Return: 0 Success
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)");

		if (d->age >= 0)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)");
	}
}
