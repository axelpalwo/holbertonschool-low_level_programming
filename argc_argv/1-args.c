#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		argv[i] = argv[i];
	printf("%d\n", argc - 1);
	return (0);
}
