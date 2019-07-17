#include "holberton.h"

/**
 * argstostr - code
 * @ac: Int
 * @av: Char
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *constring;
	int strlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strlen++;
		}
		strlen++;
	}

	constring = malloc (sizeof(char) * (strlen +1));

	if (constring == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
                for (j = 0; av[i][j] != '\0'; j++)
                {
                        constring[k] = av[i][j];
			k++;
		}
                constring[k] = '\n';
		k++;
        }

return (constring);

}
