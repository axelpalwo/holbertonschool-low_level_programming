#include "main.h"
/**
 * print_diagonal - Prints a diagonal n times
 * @n: Number of length of the diagonal
 * Return: None
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
