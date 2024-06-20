#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: String
 * Return: None
 */
void puts2(char *str)
{
	int i;
	int length;

	while (str[i] != '\0')
	{
		i++;
	}
	length = i;
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
}
