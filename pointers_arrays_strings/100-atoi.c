#include "main.h"
#include "length.c"
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
		else if (s[i] == '+')
			sign = sign;
		else if (s[i] >= 48 && s[i] <= 57)
			quant_numbers++;
		else
			continue;
		i++;
	}
	i = 0;
	while (i >= 0)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (j <= quant_numbers)
			{
				multiplier *= 10;
				j++;
			}
			j = 2;
			number += (s[i + quant_numbers] - '0') * multiplier;
			quant_numbers--;
		}
		multiplier = 1;
	}
	number -= 1;
	number *= sign;
	return (number);
}
