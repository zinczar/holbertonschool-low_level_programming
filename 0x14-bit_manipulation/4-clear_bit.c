#include "holberton.h"

/**
 * clear_bit - code
 * @n: Int
 * @index: Unsigned Int
 *
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
