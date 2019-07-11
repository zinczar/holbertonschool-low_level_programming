#include "holberton.h"

/**
 * _pow_recursion - code
 * @x: Int
 * @y: Int
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
