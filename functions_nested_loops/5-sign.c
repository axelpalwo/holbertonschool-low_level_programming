#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Its a number with a positive or negative sign
 * Return: 1 if its positive - 0 if its negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
