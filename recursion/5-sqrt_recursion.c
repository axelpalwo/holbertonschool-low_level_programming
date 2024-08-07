#include "main.h"
/**
 * findroot - Finds the natural square root of a number
 * @n: Number
 * @num: Number to be powered by itself
 * Return: Number
 */
int findroot(int num, int n)
{
	if (num * num == n)
		return (num);
	else if (num * num < n)
		return (findroot(num + 1, n));
	return (-1);
}
/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: Number
 * Return: Number
 */
int _sqrt_recursion(int n)
{
	int num1 = 0;

	return (findroot(num1, n));
}
