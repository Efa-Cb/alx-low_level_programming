#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees  memory allocated for the grid
 * previously created by alloc_grid().
 * @grid: grid to be freed.
 * @height: height of grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
