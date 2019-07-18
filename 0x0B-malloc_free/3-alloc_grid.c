#include "holberton.h"

/**
 * alloc_grid - code
 * @width: Int
 * @height: Int
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * (width * height));

		if (grid == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

return (grid);

}
