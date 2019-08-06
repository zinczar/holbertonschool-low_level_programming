#include "lists.h"

/**
 * sum_listint - Code
 * @head: listint_t
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (!head)
		return (0);

	while (current)
	{
		count += current->n;
		current = current->next;
	}
	return (count);
}
