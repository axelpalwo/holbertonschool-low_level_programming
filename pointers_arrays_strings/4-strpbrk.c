#include "main.h"
#include "length.c"
#include <stddef.h>
/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: String
 * @accept: Set of Bytes
 * Return: Returns a Pointer that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int len_accept = length(accept) + 1;
	int i = 0;
	int v = 0;

	while (s[i] != '\0')
	{
		while (v < len_accept)
		{
			if (s[i] == accept[v])
				return (s + i);
			v++;
		}
		v = 0;
		i++;
	}
	return (NULL);
}
