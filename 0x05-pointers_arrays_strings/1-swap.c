#include "holberton.h"

/**
 * swap_int - code
 * @a: Int
 * @b: Int
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
