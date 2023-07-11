#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free two dimensional grid
 * @grid: grid created
 * @height: input integer
 * Return: nothing
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
