#include "main.h"
/**
 * print_line - Prints underscores in function of n
 * @n: The times of underscores
 * Return: None
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	} else if (n < 0)
	{
		while (n < 0)
		{
			_putchar('_');
			n++;
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
