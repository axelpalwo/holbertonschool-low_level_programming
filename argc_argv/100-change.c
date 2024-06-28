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
	int num;
	int result = 0;
	int i;
	int cents[] = {25, 10, 5, 2, 1};

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
	while (i < 5 && num > 0)
	{
		if (num / cents[i] > 0)
		{
			result += num / cents[i];
			num %= cents[i];
		}
		i++;
	}
	printf("%i\n", result);
	return (0);
}
