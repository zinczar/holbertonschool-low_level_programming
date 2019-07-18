#include "holberton.h"

/**
 * free_grid - code
 * @grid: Int
 * @height: Int
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
