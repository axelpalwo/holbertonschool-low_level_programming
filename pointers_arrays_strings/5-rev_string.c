#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @str: String
 * Return: None
 */
void rev_string(char *str)
{
	int counter = 0;
	int i = 0;
	char **pointer1 = &str;
	char *pointer2;
	char letter1;
	char letter2;

	while (counter == 0)
	{
		if (str[i] != '\0')
			i++;
		else
			break;
	}
	i--;
	pointer2 = pointer1 + i;
	
	for ( ; i >= 0; i--)
	{
		letter1 = *pointer1;
		letter2 = *pointer2;
		
		*pointer1 = letter2;
		*pointer2 = letter1;
		
		pointer1++;
		pointer2--;
	}
}
