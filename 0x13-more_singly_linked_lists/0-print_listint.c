#include "lists.h"

/**
 * print_listint - Code
 * @h: listint_t
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
