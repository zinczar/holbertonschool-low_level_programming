#include "holberton.h"

/**
 * _sqrt_recursion - code
 * @n: Int
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int i;

	i = _sqrt_helper(0, 1, n);

	return (i);

}

int _sqrt_helper(int counter, int path_to_sqrt, int n)
{
	if (n == 0)
		return (counter);

	else if (n < 0)
		return (-1);

	else
		return (_sqrt_helper((counter + 1), (path_to_sqrt + 2), (n - path_to_sqrt)));
}
