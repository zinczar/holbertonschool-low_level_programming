#include "function_pointers.h"

/**
 * int_index - Code
 * @array: Int
 * @size: Int
 * @cmp: Int
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		    return (array[i]);
	}
}
