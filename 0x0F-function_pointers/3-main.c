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
	int num1 = 0, num2 = 0, num3 = 0;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

		if (func == NULL)
		{
			printf("Error\n");
			exit(99);
		}

	num3 = func(num1, num2);

	printf("%i\n", num3);
	return (0);

}
