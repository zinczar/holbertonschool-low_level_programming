#include "lists.h"

/**
 * pop_listint - Code
 * @head: listint_t
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = (*head);
	int value;

	if (!head)
		return (0);

	value = temp->n;

	*head = (*head)->next;
	free(temp);

	return (value);
}
