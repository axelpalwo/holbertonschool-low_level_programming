#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Array given
 * @size: Size of the Array
 * @cmp: Funct to be used to compare values
 * Return: Index of the first element / -1 on No element Matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || *cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
