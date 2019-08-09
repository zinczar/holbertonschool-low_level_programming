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

	shifted = (n >> index);

	if (shifted & 1)
		return (1);
	else
		return (0);
}
