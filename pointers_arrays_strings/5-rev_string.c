#include "main.h"
#include <string.h>
/**
 * rev_string - Prints a string in reverse
 * @str: String
 * Return: None
 */
void rev_string(char *str)
{
	int i;
	int len = strlen(str);
	char letters[500];

	for (i = 0 ; i < len; i++)
	{
		letters[i] = str[len - i - 1];
	}
	letters[len] = '\0';
	strcpy(str, letters);
}
