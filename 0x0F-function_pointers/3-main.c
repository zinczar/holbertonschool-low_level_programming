#include "3-calc.h"

/**
 * main - Code
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, num3;

	if (argc <= 0)
		return (0);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	num3 = get_op_func(argv[2])(num1, num2);

	printf("%i\n", num3);
	return (0);
}
