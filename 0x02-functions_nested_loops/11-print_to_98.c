#include "holberton.h"

/**
 * print_to_98 - Entry point
 * @n: Int
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
	else if (n > 98)
	{
		for (j = n; j > 98; j--)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}
	else
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
}
