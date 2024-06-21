#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: Number of elements of the array
 * Return: None;
 */
void reverse_array(int *a, int n)
{
	int newarr[100];
	int i = 0;
	int v = 0;

	while (i < n)
	{
		newarr[i] = a[i];
		i++;
	}
	i = n - 1;
	while (v <= n)
	{
		a[v] = newarr[i];
		v++;
		i--;
	}
}
