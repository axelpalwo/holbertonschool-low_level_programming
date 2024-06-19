#include "main.h"
/**
 * _puts - Prints a string
 * @str: String
 * Return: None
 */
void print_rev(char *str)
{
	int counter = 0;
	int i = 0;

	while (counter == 0)
	{
		if (str[i] != '\0')
			i++;
		else
			break;
	}
	while (counter == 0)
	{
		if (i >= 0)
			_putchar(str[i]);
		else
		{
			_putchar('\n');
			break;
		}
		i--;
	}
}
