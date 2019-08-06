#include "lists.h"

/**
 * listint_len - Code
 * @h: listint_t
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
