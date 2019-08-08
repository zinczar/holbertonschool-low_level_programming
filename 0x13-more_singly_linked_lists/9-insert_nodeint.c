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
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *previous = *head;

	if (!*head || !head || !new_node)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	new_node->n = n;

	for (i = 0; i < (idx-1); i++)
	{
		if (previous->next == NULL)
			return (NULL);

                previous = previous->next;
	}

	new_node->next = previous->next;
	previous->next = new_node;

	return (new_node);
}
