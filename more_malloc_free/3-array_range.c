#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: Minimum number
 * @max: Maximum number
 * Return: Array of Ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	if (min == max)
		arr[i] = min;
	else
	{
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}

	return (arr);
}
