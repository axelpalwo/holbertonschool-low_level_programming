#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: Separator between strings
 * @n: Number of Strings
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
