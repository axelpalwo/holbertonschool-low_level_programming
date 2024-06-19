#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: String's length
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	do {
		if (s[i] != '\0')
			length++;
		else
			break;
		i++;
	} while (i < 999);

	return (length);
}
