#include "lists.h"

/**
 * print_listint_safe - Free a list_t list
 * @head: Pointer to the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int diff;

	while (*head)
	{
		diff = head->next - head;

		if (diff > 0)
			head = head->next;
		else
			break;
	}
}
