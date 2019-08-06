#include "lists.h"

/**
 * free_list - code
 * @head: list_t
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
