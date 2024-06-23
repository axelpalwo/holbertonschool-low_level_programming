#include "main.h"
/**
 * *leet - Encodes a string into 1337
 * @string: String
 * Return: String codified
 */
char *leet(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] == 65 || string[i] == 97)
			string[i] = 52;
		else if (string[i] == 69 || string[i] == 101)
			string[i] = 51;
		else if (string[i] == 79 || string[i] == 111)
			string[i] = 48;
		else if (string[i] == 84 || string[i] == 116)
			string[i] = 55;
		else if (string[i] == 76 || string[i] == 108)
			string[i] = 49;
		i++;
	}
	return (string);
}
