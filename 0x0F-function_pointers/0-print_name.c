#include "function_pointers.h"

/**
 * print_name - Code
 * @name: Char
 * @f: Char
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);

}
