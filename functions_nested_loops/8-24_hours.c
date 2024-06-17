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

	while (hours1 <= 2)
	{
		while (hours2 <= 9)
		{
			while (min1 <= 5)
			{
				while (min2 <= 9)
				{
					if (hours1 == 2 && hours2 == 3 && min1 == 5 && min2 == 9)
						break;
					else
					{
						_putchar(hours1 + '0');
						_putchar(hours2 + '0');
						_putchar(':');
						_putchar(min1 + '0');
						_putchar(min2 + '0');
						_putchar('\n');
						min2++;
					}
				min1++;
			}
			hours2++;
		}
		hours1++;
	}
}
