#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free space
 * @grid: pointer to two dimintional
 * @height: size of numbers
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
