#include "holberton.h"

/**
 * main - code
 * @argc: Int
 * @argv: Char
 *  *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, add;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
