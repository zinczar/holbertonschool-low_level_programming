#include "lists.h"

/**
 * print_list - code
 * @h: list_t
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
