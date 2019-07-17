#include "holberton.h"

/**
 * str_concat - code
 * @s1: Char
 * @s2: Char
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i = 0, j = 0, k = 0, l = 0;
	int strlen1 = 0, strlen2 = 0;

	while (s1[i] != '\0')
	{
		strlen1++;
		i++;
	}

	while (s2[j] != '\0')
	{
		strlen2++;
		j++;
	}

	newstr = malloc(((strlen1 + strlen2 + 1) * (sizeof(char))));

	if (newstr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		newstr[k] = s1[k];

	for (l = 0 ; s2[l] != '\0' ; l++)
		newstr[strlen1 + l] = s2[l];

	newstr[strlen1 + strlen2 + 1] = '\0';

	return (newstr);
}
