#include "lists.h"

/**
 * free_listint2 - funtion that frees a list.
 * @head: a pointer to pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head);
		temp->next = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
