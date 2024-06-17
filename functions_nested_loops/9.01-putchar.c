#include "main.h"

int _putcharresultbig(int result)
{
	_putchar(' ');
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	_putchar(',');
	return (result);
}

int _putcharresultlittle(int result)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(result + '0');
	_putchar(',');
	return (result);
}

int _putcharresultfinal(int result)
{
	_putchar(' ');
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	return (result);
}
