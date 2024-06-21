#include "main.h"
#include "length.c"
/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0 (Success) - 1 (S1 > S2) - -1 (S2 > S1)
 */
int _strcmp(char *s1, char *s2)
{
	int lens1 = length(s1);
	int lens2 = length(s2);
	int i = 0;

	while (i < lens1 && i < lens2)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (lens1);
			else if (s1[i] < s2[i])
				return (-lens1);
		}
		i++;
	}
	return (0);
}
