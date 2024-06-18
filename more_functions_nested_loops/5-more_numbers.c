#include "main.h"
#include "5.01_putchar.c"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * Return: None
 */
void more_numbers(void)
{
	int counter1 = 0;
	int number = 0;

	while (counter1 < 10)
	{
		while (number <= 14)
		{
			if (number <= 9)
				_putchar(number + '0');
			else
				_putcharsimple10(number);
			number++;
		}
		number = 0;
		_putchar('\n');
		counter1++;
	}
}
