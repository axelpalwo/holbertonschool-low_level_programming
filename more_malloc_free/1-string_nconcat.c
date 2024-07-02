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
	unsigned int lens1;
	unsigned int lens2;
	char *newstr;

	/* Tratamos strings nulls*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Longitud de los strings */
	lens1 = length(s1);
	lens2 = length(s2);
	/* Si n es mayor a Len2, toma su valor */
	if (n > lens2)
		n = lens2;
	/* Espacio dinamico de newstring */
	newstr = malloc((lens1 + n + 1));
	/* Malloc handle error */
	if (newstr == NULL)
		return (NULL);
	/* Copiamos String1 */
	while (i < lens1)
	{
		newstr[i] = s1[i];
		i++;
	}
	/* Copiamos String2 */
	while (v < n)
	{
		newstr[i] = s2[v];
		i++;
		v++;
	}
	/* Colocamos Null al final del String */
	newstr[i] = '\0';
	return (newstr);
}
