#include "main.h"
/**
 * _isupper - Checks if the letter is upper case
 * @c: - Letter
 * Return: (1) if Success - (0) Otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	} else
		return (0);
}
