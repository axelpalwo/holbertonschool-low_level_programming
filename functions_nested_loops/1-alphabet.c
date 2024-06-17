#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: Always 0
 */


void print_alphabet(void)
{
	char letter = 'a';

	while (letter != '{')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
