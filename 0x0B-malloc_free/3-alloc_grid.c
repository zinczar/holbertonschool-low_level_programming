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

	grid = malloc(sizeof(int *) * height);

		if (grid == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

return (grid);

}
