#include "main.h"
/**
 * _calloc - Allocates memory for an array and sets it on 0
 *@nmemb: Number of Elements
 *@size: Size in bytes
 *Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	char *settingzero;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	settingzero = str;
	while (i < nmemb * size)
	{
		settingzero[i] = 0;
		i++;
	}
	return (str);
}
