#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: Char
 * @src: Char
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int strlen = 0;
	int i;

	while (*dest)
	{
		strlen++;
		dest++;
	}

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[(strlen - 1) + i] = src[i];
	}
	dest[i + 1] = '\0';

	return (dest);
}
