#include "variadic_functions.h"

/**
 * print_numbers - Code
 * @separator: Char
 * @n: Unsigned Int
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int arg = 0;
	unsigned int i = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(valist, int);

		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%i", arg);
	}
	printf("\n");

	va_end(valist);
}
