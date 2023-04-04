#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: string
 * Return: v
 */

size_t print_listint(const listint_t *h)
{
	size_t v;

	v = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		v++;
		h = h->next;
	}
	return (v);
}
