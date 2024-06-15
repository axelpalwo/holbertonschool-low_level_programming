#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int num3 = 50;

	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != 55 || num2 != 56 || num3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
