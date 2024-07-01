#include "main.h"
#include "length.c"
/**
 * *_strdup - Returns a pointer of the copy of a string
 * @str: String
 * Return: Pointer to String's copy
 */
char *_strdup(char *str)
{
	char *strcpy;
	unsigned long int i = 0;

	if (str == NULL)
		return (NULL);
	strcpy = malloc((length(str) + 1) * sizeof(char));
	if (strcpy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
