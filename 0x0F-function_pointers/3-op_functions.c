#include "3-calc.h"

/**
 * op_add - Code
 * @a: Int
 * @b: Int
 *
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Code
 * @a: Int
 * @b: Int
 *
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Code
 * @a: Int
 * @b: Int
 *
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Code
 * @a: Int
 * @b: Int
 *
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit (100);
	}

	return (a / b);
}

/**
 * op_mod - Code
 * @a: Int
 * @b: Int
 *
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit (100);
	}
	return (a % b);
}
