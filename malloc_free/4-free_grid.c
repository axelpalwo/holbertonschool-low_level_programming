#include "main.h"
/**
 * free_grid - Frees the matrix previously made
 * @grid: Pointer to a pointer where is the matrix
 * @height: Height of the matrix
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
