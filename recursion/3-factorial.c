#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: Number
 * Return: Result
 */
int factorial(int n)
{
	if (n > 0)
		return ((n * factorial(n - 1)));
	else if (n < 0)
		return (-1);
	return (1);
}
