#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0
 */


void print_alphabet_x10(void)
{
	char letter = 'a';

	for (int counter = 0; counter < 10; counter++)
	{
		while (letter != '|')
		{
			_putchar(letter);
			letter++;
			if (letter == '{')
			{
				_putchar('\n');
				letter = 'a';
			}
		}
	}
}
