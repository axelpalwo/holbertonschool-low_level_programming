#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins tomake change for an amount of money
 * @argc: Count of arguments passed
 * @argv: Array of arguments passed
 * Return: 1 (Error) - 0 (Arg negative) - Change (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int num = atoi(argv[1]);

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	if (num / 25 > 0)
		printf("%i\n", num / 25);
	else if (num / 10 > 0)
		printf("%i\n", num / 10);
	else if (num / 5 > 0)
		printf("%i\n", num / 5);
	else if (num / 2 > 0)
		printf("%i\n", num / 2);
	else
		printf("%i\n", num);
	return (0);
}
