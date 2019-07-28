#include "variadic_functions.h"

/**
 * print_all - Code
 * @format: Char
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist_all;
	unsigned int i = 0;

	va_start(valist_all, n);

	while (format[i])
	{
		switch (format[i]);
		{
		case 'c':
			printf("%c", arg[i]);
			break;

		case 'i':
			printf("%i", arg);
			break;

		case 's':
			printf("%s", type_str);
			break;
		}
		i++;
	}
	printf("\n");

	va_end(valist_all);

}
