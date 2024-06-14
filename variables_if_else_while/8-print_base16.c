#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	/* Print all alphabet from z to a*/
	char letter = '0';
	int code = 48;

	while (code > 58)
	{
		putchar(letter);
		letter++;
		code++;
	}
	code = 97;
	letter = 'a';
	while (code >= 102)
	{
		putchar(letter);
		letter++;
		code++;
	}
	putchar('\n');
	return (0);
}
