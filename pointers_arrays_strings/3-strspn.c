#include "main.h"
#include "length.c"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: Substring
 * Return: Number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = length(accept) + 1;
	unsigned int lenarr = length(s) + 1;
	unsigned int i = 0;
	unsigned int v = 0;
	int counter = 0;

	while (i < lenarr)
	{
		if (s[i] != ',' && s[i] != '\0')
		{
			while (v < len)
			{
				if (s[i] == accept[v])
				{
					counter++;
					break;
				}
				v++;
			}
			v = 0;
			i++;
		} else
			break;
	}

	return (counter);
}
