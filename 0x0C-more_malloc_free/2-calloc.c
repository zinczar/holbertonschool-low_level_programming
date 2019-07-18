#include "holberton.h"

/**
 * _calloc - code
 * @nmemb: Unsigned Int
 * @size: Unsigned Int
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	unsigned char *z;
	unsigned int i;
	size_t y;

	if (nmemb == 0 || size == 0)
		return(NULL);

	y = (nmemb * size);
        z = malloc(y);

	if (z == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		z[i] = 0;

	x = z;

return (x);
}
