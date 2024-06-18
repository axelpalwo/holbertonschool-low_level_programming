#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: Number?
 * Return: (1) Success - (0) Otherwise
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
