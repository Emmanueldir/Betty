#include "lists.h"

/**
 * free_listint - function that frees a list.
 * @head: list | node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	/* create a temp. node that will be freed*/

	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
