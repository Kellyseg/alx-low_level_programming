#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D grid created previously
 * using alloc_grid fxn
 * @grid: grid to be freed
 * @height: number of rows in grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
