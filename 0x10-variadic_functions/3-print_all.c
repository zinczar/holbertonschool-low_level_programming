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
	char *string;

	va_start(valist_all, format);

	if (format[i])
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				if (i != 0)
					printf(", ");
				printf("%c",va_arg(valist_all, int));
				break;
			case 'i':
				if (i != 0)
					printf(", ");
				printf("%i", va_arg(valist_all, int));
				break;
			case 's':
				if (i != 0)
					printf(", ");
				string = va_arg(valist_all, char*);
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				i++;
				continue;
			}
			i++;
		}
	}
	printf("\n");
	va_end(valist_all);

}
