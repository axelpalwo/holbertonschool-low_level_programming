#include "main.h"
#include "9.01-putchar.c"
/**
 * times_table - prints a table
 * Return: No return
 */
void times_table(void)
{
	int result, number = 0, multiplier = 0;

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
					_putcharresultbig(result);
				}
				if (result < 10)
				{
					_putcharresultlittle(result);
				}
			} else
			{
				if (result >= 10)
				{
					_putcharresultfinal(result);
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
