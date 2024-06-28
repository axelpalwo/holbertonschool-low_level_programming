#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins tomake change for an amount money
 * @argc: Count of arguments passed
 * @argv: Array of arguments passed
 * Return: 1 (Error) - 0 (Arg negative) - Change (Success)
 */
int main(int argc, char *argv[])
{
	int num =;
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num / 25 > 0)
		{
			result += num / 25;
			num %= 25;
		}
		else if (num / 10 > 0)
		{
			result += num / 10;
			num %= 10;
		}
		else if (num / 5 > 0)
		{
			result += num / 5;
			num %= 5;
		}
		else if (num / 2 > 0)
		{
			result += num / 2;
			num %= 2;
		}
		else
		{
			result += num;
			num -= 1;
		}
	}
	printf("%i\n", result);
	return (0);
}
