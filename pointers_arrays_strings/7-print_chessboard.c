#include "main.h"
#include "length.c"
/**
 * print_chessboard - Prints a chessboard
 * @a: Nested Array
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int v = 0;

	while (i < 8)
	{
		while (v < 8)
		{
			_putchar(a[i][v]);
			v++;
		}
		_putchar('\n');
		v = 0;
		i++;
	}
}
