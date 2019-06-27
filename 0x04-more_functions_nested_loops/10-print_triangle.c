#include "holberton.h"

/**
 * print_triangle - code
 * @size: Int
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{

	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j != n)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}

    return (0);
}
