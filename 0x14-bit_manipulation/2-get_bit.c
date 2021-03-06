#include "holberton.h"

/**
 * get_bit - code
 * @n: Int
 * @index: Unsigned Int
 *
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted;

	if (index >= sizeof(n) * 8)
		return (-1);

	shifted = (n >> index);

	if (shifted & 1)
		return (1);
	else
		return (0);
}
