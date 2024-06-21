#include "main.h"
/**
 * _atoi - Convers a string into an int
 * @s: String
 * Return: Returns the Int
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 2;
	int number = 0;
	int sign = 1;
	int quant_numbers = 0;
	int multiplier = 1;

	for ( ; s[i] != '\0'; i++)
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
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			for (j = 2; j <= quant_numbers; j++)
				multiplier *= 10;
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				number += ((s[i] - '0') * multiplier) * sign;
			else
			{
				number += ((s[i] - '0') * multiplier) * sign;
				break;
			}
			quant_numbers--;
		}
		multiplier = 1;
	}
	return (number);
}
