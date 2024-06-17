#include "main.h"
/**
 * times_table - prints a table
 * Return: No return
 */
void times_table(void)
{
	int number = 0;
	int multiplier = 0;
	int result;

	while (multiplier < 10)
	{
		while (number < 9)
		{
			result = (number + 1) * multiplier;
			if (number == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			if (number != 8)
			{
				if (result >= 10)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					_putchar(',');
				}
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
					_putchar(',');
				}
			} else
			{
				if (result >= 10)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				} else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
			}
			number++;
		}
		_putchar('\n');
		number = 0;
		multiplier++;
	}
}
