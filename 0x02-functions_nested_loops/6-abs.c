#include "holberton.h"

/**
 * _abs - Entry point
 * @i: Int
 *
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	return (i);
}
