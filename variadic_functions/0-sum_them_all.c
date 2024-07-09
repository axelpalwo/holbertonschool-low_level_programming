#include "variadic_functions.h"
/**
 * sum_them_all - Sums all the parameters
 * @n: Number of parameters
 * Return: Result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int total;

	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	return (total);
}
