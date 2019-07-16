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
	int remaining = 0;
	int total_coins = 0;
	int money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		total_coins = money / 25;
		remaining = money % 25;
		total_coins = total_coins + (remaining / 10);
		remaining = remaining % 10;
		total_coins = total_coins + (remaining / 5);
		remaining = remaining % 5;
		total_coins = total_coins + (remaining / 2);
		remaining = remaining % 2;
		total_coins = total_coins + remaining;

		printf("%d\n", total_coins);
	}
	return (0);
}
