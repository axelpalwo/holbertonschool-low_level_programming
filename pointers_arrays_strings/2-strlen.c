#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: String's length
 */
int _strlen(char *s)
{
	int length = sizeof(*s);

	length /= 4;
	return (length);
}
