#include "holberton.h"

/**
 * _realloc - code
 * @ptr: Void
 * @old_size: Unsigned Int
 * @new_size: Unsigned Int
 *
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	new_p = malloc(new_size);

	if (new_p == NULL)
		return (NULL);

	_memcopy(new_p, ptr, new_size < old_size ? new_size : old_size);

	free(ptr);

	return (new_p);
}

#include "holberton.h"

/**
 * _memcopy - code
 * @dest: Char
 * @src: Char
 * @n: Unsigned Int
 *
 * Return: Always 0.
 */
char *_memcopy(char *dest, char *src, unsigned int n)
{
	while(n--)
		*(dest + n) = *(src + n);
	return (dest);
}
