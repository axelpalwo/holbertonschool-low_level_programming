#include "main.h"
#include "length.c"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String
 * Return: None
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
