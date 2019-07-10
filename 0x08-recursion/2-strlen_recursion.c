#include "holberton.h"

/**
 * _strlen_recursion - code
 * @s: Char
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		_strlen_recursion(++s);
	}
	return (length);
}
