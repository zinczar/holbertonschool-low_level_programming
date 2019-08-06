#include "lists.h"
#include <string.h>

/**
 * add_node_end - code
 * @head: list_t
 * @str: Char
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(size_t));
	list_t *last;

	if (!head || !str || !new_node)
		return (NULL);

	last = *head;

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
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
