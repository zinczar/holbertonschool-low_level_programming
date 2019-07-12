#include "holberton.h"

/**
 * _isalpha - Entry point
 * @c: Int
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
