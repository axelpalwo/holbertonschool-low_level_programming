#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9
 * Return: None
 */
void print_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
