#include "main.h"
/*
 * _islower - Entry point
 * @c: character
 * Return: 1 (Success) - 0 (Otherwise)
 */

int _islower(int c)
{
	/*This script determines if a character is lower */
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
