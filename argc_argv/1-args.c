#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 * Return: 0 Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
