#include "lists.h"

/**
 * free_listint2 - funtion that frees a list.
 * @head: a pointer to pointer to head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head);
		temp->next = (*head)->next;
		(*head) = NULL;
	}
}
