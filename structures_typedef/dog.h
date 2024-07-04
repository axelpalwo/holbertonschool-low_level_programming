#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Doggy
 * @name: Name of the dog
 * @age: Float number of the age
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
