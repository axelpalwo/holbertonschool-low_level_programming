#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: Formats to be printed
 * Return: None
 */
void print_all(const char * const format, ...)
{
	int i = 0, v = 0;
	char new_format[4];
	va_list ap;

	if (format[i] == '\0')
	{
		printf("\0");
		exit(98);
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				new_format[v] = format[i];
				v++;
				break;
		}
		i++;
	}
	i = 0;
	va_start(ap, format);
	while (i < v)
	{
		switch (new_format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				break;
		}
		if (i < v - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
