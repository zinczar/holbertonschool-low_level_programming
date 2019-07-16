#include "holberton.h"

/**
 * create_array - code
 * @size: Unsigned Int
 * @c: Char
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = c;

return (array);

}
