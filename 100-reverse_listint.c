#include "lists.h"

/**
 * reverse_listint - Code
 * @head: Listint_t
 *
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{


	While (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
previous = *head

	return (0);

}
