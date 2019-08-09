#include "holberton.h"

/**
 * binary_to_uint - code
 * @b: Char
 *
 * Return: Count
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		count = (count * 2) + (*b - '0');
		b++;
	}
	return (count);
}
