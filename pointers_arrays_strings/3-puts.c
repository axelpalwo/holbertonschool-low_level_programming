#include "main.h"
/**
 * _puts - Prints a string
 * @str: String
 * Return: None
 */
void _puts(char *str)
{
	int counter = 0;
	int i = 0;

	while (counter == 0)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		else
		{
			_putchar('\n');
			break;
		}
		i++;
	}
}
