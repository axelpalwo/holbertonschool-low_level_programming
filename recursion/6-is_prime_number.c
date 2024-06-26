#include "main.h"
/**
 * isprime - Divides number
 * @num: Number that will divide
 * @n: Number divided
 * Return: Result
 */
int isprime(int num, int n)
{
	if (n <= 1)
		return (0);
	if (n == num)
		return (1);
	if (n % num == 0)
		return (0);

	return (isprime(num + 1, n));
}

/**
 * is_prime_number - Looks if number is prime
 * @n: Number
 * Return: 1 (Success) - 0 (Otherwise)
 */
int is_prime_number(int n)
{

	return (isprime(2, n));
}
