#include "holberton.h"

/**
 * main - code
 * @argc: Int
 * @argv: Char
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int add = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_positive(argv[i]))
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%u\n", add);
	return (0);
}

#include "holberton.h"

/**
 * is_positive - code
 * @s: Char
 *
 * Return: Always 0.
 */
int is_positive(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
