#include "holberton.h"

/**
 * print_to_98 - Entry point
 * @n: Int
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i, j, k;

	if (n < 98)
	{
		for (i = n; i <= 9; i++)
		{
			for (k = 0; k <= 8; k++)
			{
				if ((i / 10) == 0)
				{
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar((i / 10) + '0');
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (j = n; j > 98; j--)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
	}
	_putchar('\n');
}
