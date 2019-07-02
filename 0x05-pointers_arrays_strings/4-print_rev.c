#include "holberton.h"

/**
 * print_rev - code
 * @s: Char
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	int strlen = _strlen(s);

	for (i = strlen; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * _strlen - code
 * @s: Char
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
