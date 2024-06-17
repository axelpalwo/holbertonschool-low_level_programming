#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hours1 = 0;
	int hours2 = 0;
	int min1 = 0;
	int min2 = 0;
	int counter = 0;

	while (counter < 1)
	{
		_putchar(hours1 + '0');
		_putchar(hours2 + '0');
		_putchar(':');
		_putchar(min1 + '0');
		_putchar(min2 + '0');
		_putchar('\n');
		min2++;
		if (hours1 == 2 && hours2 == 3 && min1 == 5 && min2 == 10)
			break;
		if (min2 == 10)
		{
			min1++;
			min2 = 0;
		}
		if (min1 == 10)
		{
			hours2++;
			min1 = 0;
		}
		if (hours2 == 10)
		{
			hours1++;
			hours2 = 0;
		}
	}
}
