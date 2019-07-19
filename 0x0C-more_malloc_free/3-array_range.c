#include "holberton.h"

/**
 * array_range - code
 * @min: Int
 * @max: Int
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min));

	if (array == NULL)
		return (NULL);

	for (i = min, j = 0; i < max; i++, j++)
		array[j] = i;

return (array);
}
