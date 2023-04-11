#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: pointer to array
 * @height: array row
 * Return: frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(*(grid + count));
	free(grid);
}
