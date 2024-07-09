#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of ints passed
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, v;

	va_start(ap, n);
	i = 0;
	v = 0;
	while (i < n)
	{
		printf("%i", va_arg(ap, int));
		if (separator != NULL)
		{
			if (i != n - 1)
			{
				while (separator[v] != '\0')
				{
					printf("%c", separator[v]);
					v++;
				}
			}
		}
		v = 0;
		i++;
	}
	printf("\n");
}
