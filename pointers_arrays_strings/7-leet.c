#include "main.h"
#include "length.c"
/**
 * *leet - Encodes a string into 1337
 * @string: String
 * Return: String codified
 */
char *leet(char *string)
{
	int i = 0;
	int v = 0;
	int numVal[] = {0, 1, 3, 4, 7};
	char letterVal[] = {'O', 'L', 'E', 'A', 'T'};
	int arrlen = sizeof(letterVal) / sizeof(letterVal[0]);

	while (string[i] != '\0')
	{
		while (v < arrlen)
		{
			if (string[i] == letterVal[v] || string[i] == (letterVal[v] + 32))
			{
				string[i] = numVal[v] + '0';
				break;
			}
			v++;
		}
		v = 0;
		i++;
	}
	return (string);
}
