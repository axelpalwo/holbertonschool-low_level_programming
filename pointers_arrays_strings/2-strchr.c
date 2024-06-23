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
	int len = length(s);

	while (i <= len)
	{
		if (s[i] == c)
			break;
		i++;
	}

	if (s[i] == '\0')
		return (NULL);
	else
		return (s + i);
}
