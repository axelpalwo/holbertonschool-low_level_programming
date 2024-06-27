#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: Count of arguments passed
 * @argv: Array of arguments passed
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
