#include "main.h"
#include "length.c"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: String
 * Description: 33 34 40 41 44 46 58 59 63 123 125
 * Return: String
 */
char *cap_string(char *str)
{
	int i = 0;
	int v = 0;
	char array[] = {',',';','.','!','?','"','(',')','{','}',' ','\t','\n'};
	int lenarray = sizeof(array) / sizeof(array[0]);

	while (str[i] != '\0')
 	{
		while (v <= lenarray)
		{
			if (str[i] == array[i])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
					printf("Cambie una letra");
				}
			}
			v++;
		}
		v = 0;
		i++;
	}
	return (str);
}
