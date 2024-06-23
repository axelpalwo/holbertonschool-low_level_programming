#include "main.h"
#include "length.c"
#include <stddef.h>
/**
 * *_strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: Pointer to character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int len = length(s) + 1;

	while (i < len)
	{
		if (s[i] == c)
			break;
		i++;
	}

	if (i == len)
		return (NULL);
	else
		return (s + i);
}
