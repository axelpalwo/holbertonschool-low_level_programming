# include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Prints the size of data types */
	printf("Size of a char: = %u\n byte(s)", sizeof(char));
	printf("Size of an int: = %u\n byte(s)", sizeof(int));
	printf("Size of a long int: = %u\n byte(s)", sizeof(long int));
	printf("Size of a long long int: = %u\n byte(s)", sizeof(long long int));
	printf("Size of a float: = %u\n byte(s)", sizeof(float));
	return (0);
}
