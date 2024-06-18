#include "main.h"
#include "11.01-putchar.c"
/**
 * print_to_98 - Prints from number N to 98
 * @n: Natural number
 * Return: No return
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				if (n > 9)
					_printresult10(n);
				else if (n >= 0 && n <= 9)
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				} else if (n < 0 && n >= -9)
					_printresultnegativesimple(n);
				else if (n >= -99)
					_printresultnegative10(n);
				else
					_printresultnegative100(n);
			} else
				_printresultsimple(n);
			n++;
		}
	} else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				if (n > 99)
					_printresultpositive100(n);
				else
					_printresult10(n);
			} else
				_printresultsimple(n);
			n--;
		}
	}

}
