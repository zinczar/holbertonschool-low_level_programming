#include "holberton.h"

/**
 * _strdup - code
 * @str: Char
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0, j, strlen = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}

	newstr = malloc((strlen + 1) * (sizeof(char)));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j < strlen; j++)
		newstr[j] = str[j];

	newstr[strlen + 1] = '\0';

return (newstr);

}
