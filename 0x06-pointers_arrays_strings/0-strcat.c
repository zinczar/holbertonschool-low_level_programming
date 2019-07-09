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

	printf("DEST start start:%s\n", dest);

	while (*dest)
	{
		strlen++;
		dest++;
	}

	printf("strlen:%i\n", strlen);
        printf("DEST start:%s\n", dest);

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[(strlen - 1) + i] = src[i];
		printf("SRC:%s\n", src);
		printf("DEST:%s\n", dest);
	}
	dest[i + 1] = '\0';

        printf("SRC:%s\n", src);
        printf("DEST:%s\n", dest);

	return (dest);
}
