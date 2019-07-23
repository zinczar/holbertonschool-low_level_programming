#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Code
 * @name: Char
 * @age: Float
 * @owner: Char
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *good_dog;
	unsigned int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	good_dog = malloc(sizeof(dog_t));
	if (good_dog == NULL)
		return (NULL);

	good_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (good_dog->name == NULL)
		return (NULL);

	good_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (good_dog->owner == NULL)
		return (NULL);

	_strcpy(good_dog->name, name);
	good_dog->age = age;
	_strcpy(good_dog->owner, owner);

	return (good_dog);
}

/**
 * _strlen - code
 * @str: Char
 *
 * Return: Always 0.
 */
unsigned int _strlen(char *str)
{
	unsigned int strlen = 0, i = 0;

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	return (strlen);
}

/**
 * _strcpy - Code
 * @dest: Char
 * @src: Char
 *
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int src_len, i;

	src_len = _strlen(src);

	for (i = 0; i < src_len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
