#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0
 */


void print_alphabet_x10(void)
{
	int letter = 'a';
	int counter = 0;

	for ( ; counter < 10 ; counter++)
	{
		while (letter != '{')
		{
			_putchar(letter);
			if (letter == 'z')
				_putchar('\n');
			letter++;
		}
	}
}
