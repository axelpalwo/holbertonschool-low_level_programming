#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	/* Starts at ASCII code number 'a' 97 and goes until 'z' at 122*/
	char letter = 'a';
	int code = 97;

	while (code <= 122)
	{
		putchar(letter);
		letter++;
		code++;
	}
	putchar('\n');
	return (0);
}
