#include "main.h"
/**
 * print_triangle - Prints a triangle by size
 * @size: Size
 * Return: None
 */
void print_triangle(int size)
{
	int length = size - 1;
	int constant = size;
	int triangle = size - 1;
	int counter = 1;

	if (size <= 0)
		_putchar('\n');
	if (size > 0)
	{
		while (size > 0)
		{
			while (length > 0)
			{
				_putchar(' ');
				length--;
			}
			while (triangle < constant)
			{
				_putchar('#');
				triangle++;
			}
			_putchar('\n');
			counter++;
			triangle -= counter;
			length = constant - counter;
			size--;
		}
	}
}
