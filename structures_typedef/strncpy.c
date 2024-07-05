#include "dog.h"
/**
 * *_strncpy - Copies a string in destiny the number of bytes n
 * @dest: Destiny to be reemplaced
 * @src: Sources to be copies
 * @n: Number of bytes copied
 * Return: New string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n - 1 && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
