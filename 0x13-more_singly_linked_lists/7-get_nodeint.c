#include "lists.h"

/**
 * get_nodeint_at_index - Code
 * @head: listint_
 * @index: unsigned int
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (!head)
		return (NULL);

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
