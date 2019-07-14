#include "holberton.h"

/**
 * rev_string - code
 * @s: Char
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int strlen = _strlen(s);
	int len2 = strlen - 1;
	char buffer;

	for (i = 0; i < strlen / 2; i++)
	{
		buffer = s[i];
		s[i] = s[len2];
		s[len2--] = buffer;
	}
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
