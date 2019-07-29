#include "variadic_functions.h"

/**
 * print_strings - Code
 * @separator: Char
 * @n: Unsigned Int
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist_strings;
	char *arg;
	unsigned int i;

	va_start(valist_strings, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(valist_strings, char*);

		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
	}
	printf("\n");

	va_end(valist_strings);
}
