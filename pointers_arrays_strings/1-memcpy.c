#include "main.h"
/**
 * *_memcpy - Copies memory area
 * @dest: Destiny to be changed
 * @src: Content to be copied
 * @n: Number of bytes copied
 * Return: String
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
