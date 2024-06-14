#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	/* Print from 0 to 9*/
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		if (number == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
