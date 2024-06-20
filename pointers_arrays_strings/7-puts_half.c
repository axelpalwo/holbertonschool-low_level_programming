#include "main.h"
#include "length.c"
/**
 * puts_half - Prints half of a string
 * @str: String
 * Return: None
 */
void puts_half(char *str)
{
	int len = length(str);

	if (len % 2 == 0)
		len /= 2;
	else
		len = (len - 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
