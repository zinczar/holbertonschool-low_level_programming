#include "holberton.h"

/**
 * _print_rev_recursion - code
 * @s: Char
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
        _print_rev_recursion(++s);
        _putchar(*s);
}
