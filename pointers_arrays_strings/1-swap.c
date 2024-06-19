#include "main.h"
/**
 * swap_int - Swaps the values of two ints
 * @a: First int
 * @b: Second int
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int placeholder = *a;
	int placeholder2 = *b;

	*a = placeholder2;
	*b = placeholder;
}
