#include "main.h"
/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of ints
 * @width: Width of the matrix
 * @height: Height of the matrix
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int v = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((height * sizeof(int *)));
	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (v < i)
			{
				free(grid[v]);
				v++;
			}
			free(grid);
			return (NULL);
		}
		while (v < width)
		{
			grid[i][v] = 0;
			v++;
		}
		i++;
		v = 0;
	}
	return (grid);
}
