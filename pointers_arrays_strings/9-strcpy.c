#include "main.h"
#include "length.c"
/**
 * _strcpy - Copies a string
 * @dest: Array of destiny
 * @src: Array source
 * Return: String of characters
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}
