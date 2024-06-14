#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	/* Print all alphabet from z to a*/
	char letter = 'z';
	int code = 122;

	while (code >= 97)
	{
		putchar(letter);
		letter--;
		code--;
	}
	putchar('\n');
	return (0);
}
