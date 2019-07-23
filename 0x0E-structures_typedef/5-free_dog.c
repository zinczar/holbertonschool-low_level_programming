#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Code
 * @d: Struct
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->owner);
	free(d->name);
	free(d);
}
