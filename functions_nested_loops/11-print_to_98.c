#include "main.h"
/**
 * print_to_98 - Prints from number N to 98
 * @n: Natural number
 * Return: No return
 */
void print_to_98(int n)
{
	int var;

	if (n <= 98)
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
				} else if (n >= 0 && n <= 9)
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
	} else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				if (n > 99)
				{
					var = n % 100;
					if (var >= 10)
						var = var / 10;
					_putchar((n / 100) + '0');
					_putchar(((n % 100) / 10) + '0');
					_putchar(var + '0');
					_putchar(',');
					_putchar(' ');
					var = 0;
				} else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			} else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar('\n');
			}
			n--;
		}
	}

}
