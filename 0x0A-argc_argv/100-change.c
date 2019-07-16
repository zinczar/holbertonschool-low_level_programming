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
	int remaining = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
	int total_coins = 0;
	int money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
	}
	if (argc == 2)
	{
			quarters = money / 25;
			remaining = money % 25;
			dimes = remaining / 10;
			remaining = remaining % 10;
			nickels = remaining / 5;
			remaining = remaining % 5;
			pennies = remaining;

		total_coins = quarters + dimes + nickels + pennies;
		printf("%d\n", total_coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
