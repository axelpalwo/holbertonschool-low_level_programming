#include <stdio.h>
#include <stdlib.h>
/**
 * main - Generates random valid passwords
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char character;

	for (i = 0; i < 15; i++)
	{
		character = (rand() % 126);
		if (character < 33)
			character += 33;
		printf("%c", character);
	}
	printf("\n");
	return (0);
}
