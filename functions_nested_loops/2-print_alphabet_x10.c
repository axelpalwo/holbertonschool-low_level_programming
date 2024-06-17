#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0
 */


void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter = 0;

	while (letter != '{')
	{
		_putchar(letter);
		letter++;
		if (letter == 'z')
		{
			counter++;
			_putchar('\n');
			letter = 'a';
		}
		if (counter == 10)
			break;
	}
}
