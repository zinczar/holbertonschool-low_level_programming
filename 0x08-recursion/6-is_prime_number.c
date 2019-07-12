#include "holberton.h"

/**
 * is_prime_number - code
 * @n: Int
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int i = n / 2;
	int prime_num;

	if (n <= 1)
		return (0);

	prime_num = check_for_prime(i, n);

	if (prime_num == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * check_for_prime - code
 * @i: Int
 * @n: Int
 *
 * Return: Always 0.
 */
int check_for_prime(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_for_prime((i - 1), n));
	}
}
