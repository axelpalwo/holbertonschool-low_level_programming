#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	} else
	{
		_putchar('\n');
		return;
	}
}
