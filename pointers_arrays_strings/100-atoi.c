#include "main.h"
#include "length.c"
/**
 * _atoi - Convers a string into an int
 * @s: String
 * Return: Returns the Int
 */
int _atoi(char *s)
{
	int i = 1;
	int multiplier = 1;
	int number = 0;

	if (s[0] == '-')
		i = 1;

	while (s[i] != '\0')
	{
		number += s[i] - '0';
		i++;
	}
	while (i >= 0)
	{
		number +=  * multiplier;
		multiplier *= 10;
	}
	return (number);
}
