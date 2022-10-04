#include "main.h"

/**
 * free_grid - function that frees grid
 * @grid: grid to freed
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}



