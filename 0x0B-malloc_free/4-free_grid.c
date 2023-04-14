#include "main.h"

/**
 * free_grid - this function frees a 2 dimensional grid
 * @height: height of grid
 * @grid: the address of 2 dimensional grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0 ; j < height ; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
