#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char school[] = "Holberton";

	for (i = 0; school[i] != '\0'; i++)
	{
		_putchar(school[i]);
	}
	_putchar('\n');

return (0);
}
