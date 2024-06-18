#include "main.h"

void _printresult10(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(',');
	_putchar(' ');
}

void _printresultnegative100(int n)
{
	int var;

	var = (-n) % 100;
	if (var >= 10)
		var = var % 10;
	_putchar('-');
	_putchar(((-n) / 100) + '0');
	_putchar((((-n) % 100) / 10) + '0');
	_putchar(var + '0');
	_putchar(',');
	_putchar(' ');
}

void _printresultpositive100(int n)
{
	int var;

	var = n % 100;
	if (var >= 10)
		var = var % 10;
	_putchar((n / 100) + '0');
	_putchar(((n % 100) / 10) + '0');
	_putchar(var + '0');
	_putchar(',');
	_putchar(' ');
}
