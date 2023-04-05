#include "lists.h"

/**
 * reverse_listint - reverses alinked list.
 * @head: double pointer to head
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* init. 2 pointers */
	listint_t *new = NULL;
	listint_t *prev = NULL;

	/* iterate through the linked list */
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}
	*head = prev;

	/* return first node */
	return (*head);
}
