#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int num1_1 = 48;
	int num1_2 = 48;
	int num2_1 = 48;
	int num2_2 = 48;

	while (num1_1 <= 57)
	{
		while (num1_2 <= 57)
		{
			while (num2_1 <= 57)
			{
		
				while (num2_2 <= 57)
				{
					putchar(num1_1);
					putchar(num1_2);
					putchar(' ');
					putchar(num2_1);
					putchar(num2_2);
					putchar(',');
					putchar(' ');
					num2_2++;
				}
				num2_1++;
				num2_2 = num1_2 + 1;
			}
			num2_1 = num1_1;
			num1_2++;
		}
		num1_1++;
	}
	putchar('\n');
	return (0);
}
