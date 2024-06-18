#include "main.h"
/**
 * print_square - Prints a square of a certain size
 * @size: The size of the square
 * Return: None
 */
void print_square(int size)
{	
	int length = size;
	int constant = size;

	if (size <= 0)
		_putchar('\n');
	if (size > 0)
	{
		while (size > 0)
		{
			while (length > 0)
			{
				_putchar('#');
				length--;
			}
			_putchar('\n');
			length = constant;
			size--;
		}
	}
}
