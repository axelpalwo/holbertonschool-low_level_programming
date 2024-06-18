#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 * Return: None
 */
void print_most_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		if (counter != 2 && counter != 4)
			_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
