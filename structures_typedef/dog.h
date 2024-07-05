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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int length(char *str);
char *_strncpy(char *dest, char *src, int n);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
