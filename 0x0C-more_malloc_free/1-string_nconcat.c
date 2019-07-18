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
	unsigned int i, j, strlen = 0, total_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*s1)
	{
		strlen++;
		s1++;
	}

	total_length = (strlen + n);

	x = malloc(sizeof(char) * (total_length + 1));

	if (x == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];

	for (j = 0; j < n; j++)
                x[i + j] = s2[j];

	x[i + j] = '\0';

	return (x);

}
