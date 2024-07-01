#include "main.h"
/**
 * *create_array - Creates an array of chars
 * @size: Size of the array
 * @c: Character to be initialized
 * Return: String
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
