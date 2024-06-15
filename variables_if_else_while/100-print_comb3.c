#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int counter = 0;
	int counter2 = 0;

	for ( ; counter < 9 ; counter++)
	{
		if (num1 != num2)
		{
			for ( ; counter2 < 9 ; counter2++)
			{
				if (num1 != num2)
				{
					putchar(num1);
					putchar(num2);
					if (num1 != 57)
					{
						putchar(',');
						putchar(' ');
						num2++;
					} else
					{
						break;
					}
				}
				if (num2 == 58)
				{
					num1++;
					num2 = num1;
				}
			}
			counter2 = 0;
		} else
		{
			num2++;
		}

	}
	putchar('\n');
	return (0);
}
