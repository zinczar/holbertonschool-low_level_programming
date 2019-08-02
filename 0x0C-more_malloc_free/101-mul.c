#include "holberton.h"

/**
 * main - code
 * @argc: Int
 * @argv: Char
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned int mult;

	(void)argc;
	mult = argv[1] * argv[2];

	return (mult);
}
