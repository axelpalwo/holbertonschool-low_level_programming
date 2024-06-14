#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	/* This script starts at ASCII code number 'a' 97 and goes until 'z' at 122*/
	char letter = 'a';
	int code = 97;

	while (code <= 122)
	{
		putchar(letter);
		putchar('\n');
		letter++;
		code++;
	}
}
