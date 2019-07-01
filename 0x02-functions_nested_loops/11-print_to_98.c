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
	int i, j, k;

	if (n < 98)
	{
		for (i = n; i <= 9; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n; j > 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("98\n");
	}
}
