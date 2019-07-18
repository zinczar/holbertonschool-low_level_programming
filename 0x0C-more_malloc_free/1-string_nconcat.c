#include "holberton.h"

/**
 * string_nconcat - code
 * @s1: Char
 * @s2: Char
 * @n: Unsigned Int
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j, strlen = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*s2)
	{
		strlen++;
		s2++;
	}

	x = malloc(sizeof(char) * (strlen + n));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
		x[i] = s1[i];

	for (j = 0; j < n; j++)
                x[strlen + j] = s2[j];

	x[strlen + n + 1] = '\0';

return (x);

}
