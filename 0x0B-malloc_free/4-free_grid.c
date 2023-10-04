#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees previously created array
 * @grid: array's pointer
 * @height: array's height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
