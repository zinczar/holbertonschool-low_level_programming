#include "holberton.h"

/**
 * more_numbers - code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(i + '0');
		}
	}

    return (0);
}
