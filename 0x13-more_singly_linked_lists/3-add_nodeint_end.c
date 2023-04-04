#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to head
 * @n: head's data parameter
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_last = malloc(sizeof(listint_t));

	if (n_last == NULL)
		return (NULL);

	n_last->n = n;
	n_last->next = NULL;

	if (*head == NULL)
		*head = n_last;
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = n_last;
	}

	return (n_last);
}
