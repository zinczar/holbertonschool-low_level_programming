#include "holberton.h"

/**
 * get_endianness - code
 *
 * Return: Count
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *c = (char*) &n;

	if (*c)
		return (*c == 1);
	else
		return(0);
}
