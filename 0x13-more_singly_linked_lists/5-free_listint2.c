#include "lists.h"

/**
 * free_listint2 - Code
 * @head: listint_t
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while ((*head))
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
}
