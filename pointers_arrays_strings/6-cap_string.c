#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String
 * Description: 33 34 40 41 44 46 58 59 63 123 125
 * Return: String
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 46)
		{
			if (str[i + 1] >= 61 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		else if (str[i] >= 58 && str[i] <= 63)
		{
			if (str[i + 1] >= 61 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		else if (str[i] == 123 || str[i] == 125)
		{
			if (str[i + 1] >= 61 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		else if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		{
			if (str[i + 1] >= 61 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
