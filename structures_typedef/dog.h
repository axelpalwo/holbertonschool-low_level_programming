#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct dog - Doggy
 * @name: Name of the dog
 * @age: Float number of the age
 * @owner: Owner of the dog
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
