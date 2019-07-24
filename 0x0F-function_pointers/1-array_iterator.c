#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Code
 * @array: Int
 * @size: Size_t
 * @action: Int
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
