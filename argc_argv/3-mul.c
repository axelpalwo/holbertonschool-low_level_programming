#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: Counts arguments passed
 * @argv: Array of arguments passed
 * Return: Result
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", result);
	return (result);
}
