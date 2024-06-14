#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	/* Print all alphabet except q and e*/
	char letter = 'a';
	int code = 97;

	while (code <= 122)
	{
		if (letter != 'q' || letter != 'e')
		{
			putchar(letter);
			letter++;
			code++;
		}
	}
	putchar('\n');
	return (0);
}
