#include <stdio.h>

/**
 * first - Code
 *
 * Return: 0
 */

void first (void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
