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
	int i = 0, j, k = 0;
	int strlen1 = 0, strlen2 = 0;

	if (s1 == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		strlen1++;
		i++;
	}

	while (s2[k] != '\0')
	{
		strlen2++;
		k++;
	}

	newstr = malloc(((strlen1 + strlen2) - 1) * (sizeof(char)));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j < strlen1; j++)
		newstr[j] = s[j];

	return (newstr);

}
