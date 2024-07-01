#include "main.h"
#include "length.c"
/**
 * *str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: String
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned long int i = 0;
	unsigned long int v = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc((length(s1) + length(s2)) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[v] != '\0')
	{
		str[i] = s2[v];
		v++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
