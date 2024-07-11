#include "variadic_functions.h"
#include "new_format.c"
#include "length.c"
/**
 * print_all - Prints anything
 * @format: Formats to be printed
 * Return: None
 */
void print_all(const char * const format, ...)
{
	int i = 0, v = 0;
	va_list ap;
	char *str, *separator = "", new_format[4];

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	new_formatter(new_format, format);
	v = length(new_format);
	va_start(ap, format);
	while (i < v)
	{
		printf("%s", separator);
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
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
}
