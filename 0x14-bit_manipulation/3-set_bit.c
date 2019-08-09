#include "holberton.h"

/**
 * set_bit - code
 * @n: Int
 * @index: Int
 *
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n |= 1 << index;

	return (1);
}
