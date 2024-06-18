#include "main.h"
/**
 * print_to_98 - Prints from number N to 98
 * @n: Natural number
 * Return: No return
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else if (n > 0 && n <= 9)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			} else if (n < 0 && n >= -9)
			{
				_putchar('-');
				_putchar((-n) + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('-');
				_putchar(((-n) / 10) + '0');
				_putchar(((-n) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		} else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
		n++;
	}
}
