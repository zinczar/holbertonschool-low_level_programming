#include "dog.h"

/**
 * init_dog - Code
 * @d: dog Struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
