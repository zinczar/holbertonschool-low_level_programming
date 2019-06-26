#include <stdlib.h>
#include <stdio.h>
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
			if (i < 10)
			{
				_putchar(' ');
			}
			else
			{
				printf("%d", i);
				if (i != 98)
				{
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
			printf("%d", j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		printf("98");
	}
}
