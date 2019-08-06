#include "lists.h"

/**
 * list_len - code
 * @h: list_t
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
