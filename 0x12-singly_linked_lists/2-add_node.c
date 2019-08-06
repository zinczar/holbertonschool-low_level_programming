#include "lists.h"
#include <string.h>

/**
 * add_node - code
 * @head: list_t
 * @str: Char
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(size_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

/**
 * _strlen - code
 * @s: Char
 *
 * Return: Count
 */
int _strlen(const char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}
