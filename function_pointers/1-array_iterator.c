#include "function_pointers.h"
/**
 * array_iterator - Executes a funct on each element of an array
 * @array: Array given
 * @size: Size of the Array
 * @action: Funct to execute in each element
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
