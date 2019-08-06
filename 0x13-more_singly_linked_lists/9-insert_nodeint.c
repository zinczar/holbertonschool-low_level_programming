#include "lists.h"

/**
 * insert_nodeint_at_index - Code
 * @head: listint_t
 * @idx: unsigned int
 * @n: Int
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *previous;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;

	previous = *head;

	while (previous)
	{
		if (count == (idx - 1))
		{
			new_node->next = previous->next;
			previous->next = new_node;
		}
		previous = previous->next;
		count++;
	}
	return (new_node);
}
