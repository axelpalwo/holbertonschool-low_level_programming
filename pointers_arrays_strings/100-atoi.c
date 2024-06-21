#include "main.h"
#include "length.c"
#include <stdio.h>
/**
 * _atoi - Convers a string into an int
 * @s: String
 * Return: Returns the Int
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 2;
	int number = 1;
	int len = length(s);
	int sign = 1;
	int quant_numbers = 0;
	int multiplier = 1;

	while (i <= len)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				quant_numbers++;
			else
			{
				quant_numbers++;
				break;
			}
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (j <= quant_numbers)
			{
				multiplier *= 10;
				j++;
			}
			j = 2;
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				number += (s[i] - '0') * multiplier;
			else
			{
				number *= sign;
				number -= 1;
				number += (s[i] - '0') * multiplier;
				break;
			}
			quant_numbers--;
		}
		multiplier = 1;
		i++;
	}
	return (number);
}
