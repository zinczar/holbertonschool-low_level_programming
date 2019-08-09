#include "holberton.h"

/**
 * flip_bits - code
 * @n: Int
 * @m: Unsigned long Int
 *
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long xor = n ^ m;
	unsigned long flipped = 0;

	while (xor > 0)
	{
		flipped += xor & 1;
		xor >>= 1;
	}
	return (flipped);
}
