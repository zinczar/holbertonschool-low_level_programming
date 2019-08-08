#include "lists.h"

/**
 * print_listint_safe - Free a list_t list
 * @head: Pointer to the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int diff = 0, count = 0;

	while (head)
	{
		diff = head->next - head;

		if (diff > 0)
		{
			count++;
			printf("[%p] %i\n", &head, head->n);
			head = head->next;
		}
		else
			exit (98);
	}
	return (count);
}
