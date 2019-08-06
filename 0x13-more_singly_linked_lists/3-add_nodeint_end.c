#include "lists.h"

/**
 * add_nodeint_end - Code
 * @head: listint_t
 * @n: Int
 *
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node = malloc(sizeof(size_t));
	listint_t *last;

	if (!head || !new_node)
		return (NULL);

	last = *head;

	new_node->n = n;
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
