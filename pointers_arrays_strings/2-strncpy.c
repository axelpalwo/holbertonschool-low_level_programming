#include "main.h"
#include "length.c"
/**
 * *_strncpy - Copies a string in destiny the number of bytes n
 * @dest: Destiny to be reemplaced
 * @src: Sources to be copies
 * @n: Number of bytes copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lensrc = length(src);
	int i = 0;

	while (i < n)
	{
		if (i <= lensrc)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
