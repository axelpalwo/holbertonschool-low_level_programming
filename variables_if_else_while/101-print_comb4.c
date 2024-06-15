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
	int counter = 0;
	int counter2 = 0;
	int counter3 = 0;

	for ( ; counter < 9 ; )
	{
		if (num1 != num2 && num3 != num2 && num1 != num3)
		{
			for ( ; counter2 < 9 ; )
			{
				if (num1 != num2 && num3 != num2 && num1 != num2)
				{
					for ( ; counter3 < 9 ; counter3++)
					{
						if (num2 != num3)
						{
							putchar(num1);
							putchar(num2);
							putchar(num3);
							if (num1 <= 55)
							{
								putchar(',');
								putchar(' ');
								num3++;
							}
							if (num3 >= 58)
							{
								num2++;
								num3 = num2;
							}
						} else
						{
							if (num3 >= 58)
							{
								num3 = num2;
								num2 = num1;
							} else
								num3++;
						}
					}
					counter3 = 0;
					counter2++;
					if (num2 >= 57)
					{
						num1++;
						num2 = num1;
					}
				}
			}
			counter2 = 0;
			counter++;
		} else
			num2++;
	}
	putchar('\n');
	return (0);
}
