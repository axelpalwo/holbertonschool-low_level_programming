#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the number of elements in an array
 * @a: Array of ints
 * @n: Number of elements to be printed
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{	
		if ((i + 2) > n)
			printf("%i", *(a + i));
		else
			printf("%i, ", *(a + i));
	}
	printf("\n");
}
