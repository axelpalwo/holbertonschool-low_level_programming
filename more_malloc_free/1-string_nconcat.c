#include "main.h"
#include "length.c"
/**
 * *string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to be concatenated
 * Return: String concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int v = 0;
	unsigned int lens1 = length(s1);
	unsigned int lens2 = length(s2);
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	newstr = malloc(((lens1 + lens2) * sizeof(char)) + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < lens1)
	{
		newstr[i] = s1[i];
		i++;
	}
	if (n < lens2)
	{
		while (n < lens2)
		{
			newstr[i] = s2[v];
			i++;
			v++;
			n--;
		}
	} else
	{
		while (v <= lens2)
		{
			newstr[i] = s2[v];
			i++;
			v++;
		}
	}
	newstr[i] = '\0';
	return (newstr);
}
