#include "holberton.h"

/**
 * main - code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int *temp = b;

	b = a;
	a = temp;
}
