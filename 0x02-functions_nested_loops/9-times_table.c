#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (((i * j) / 10) == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
			}
			_putchar(((i * j) % 10) + '0');
			if (j % 9 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
