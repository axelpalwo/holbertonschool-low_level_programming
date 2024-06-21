#include "main.h"
#include "length.c"
/**
 * _strncat - Concatenates two strings
 * @dest: Destiny to be concatenated
 * @src: Source to concatenate
 * @n: Number of Bytes to be concatenated
 * Return: String concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = length(dest) + 1;
	int i = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[lendest + i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
