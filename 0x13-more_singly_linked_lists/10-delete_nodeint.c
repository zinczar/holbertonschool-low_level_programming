#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list.
 * @head: listint_t
 * @index: unsigned int
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *temp2;

	if (!head || !(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (temp->next)
	}

	if (index == 0)
	{
		temp = *head;
		*head = head->next;
		free(temp);
	}

	while (!head || count <= index)
	{
*head = 
	}
return (0);

}
