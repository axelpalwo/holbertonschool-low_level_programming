#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @str: String
 * Return: None
 */
void rev_string(char *str)
{
	int i = 0;
	int len;
	char letters[500];

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0 ; i < len; i++)
	{
		letters[i] = str[len - i - 1];
	}
	letters[len] = '\0';
	for (i = 0; i < len; i++)
	{
		str[i] = letters[i];
	}
	str[len] = '\0';
}
