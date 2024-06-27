#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: Count of arguments passed
 * @argv: Array of arguments passed
 * Return: 0 Succes - 1 Error
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0)
			result += num;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (result == 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", result);
	return (0);
}
