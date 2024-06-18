#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 1;

	for ( ; counter <= 100; counter++)
	{
		if (counter % 5 == 0 && counter % 3 == 0)
			printf("FizzBuzz");
		else if (counter % 5 == 0)
			printf("Buzz");
		else if (counter % 3 == 0)
			printf("Fizz");
		else
			printf("%i", counter);
		if (counter != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
