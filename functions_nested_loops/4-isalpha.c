#include "main.h"

/**
 * _isalpha - Entry point
 * @c: is a letter, lowercase or uppercase
 * Return: 1 if Letter, 0 Otherwise
 */

int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
