#include "main.h"
#include "length.c"
#include <stddef.h>
/**
 * *_strstr - Locates a substring
 * @haystack: A super String probably
 * @needle: A little String
 * Return: String
 */
char *_strstr(char *haystack, char *needle)
{
	int len_needle = length(needle) + 1;
	int i = 0;
	int v = 0;
	int i_placeholder;
	int v_placeholder;

	while (haystack[i] != '\0')
	{
		while (v < len_needle)
		{
			i_placeholder = i;
			v_placeholder = v;
			if (haystack[i] == needle[v])
			{
				while (haystack[i] == needle[v] && haystack[i] != '\0')
				{
					i++;
					v++;
				}
				if (v == len_needle)
					return (haystack + i_placeholder);
			}
			v = v_placeholder + 1;
		}
		v = 0;
		i = i_placeholder + 1;
	}
	return (NULL);
}
