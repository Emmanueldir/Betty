#include "lists.h"

/**
 * list_len - counts the number of element in a linked list
 * @h: string
 * Return: number of element in a linked list
 */

size_t list_len(const list_t *h)
{

	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
