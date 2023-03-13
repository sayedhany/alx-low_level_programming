#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - description
 * @width: number
 * @height: number
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
