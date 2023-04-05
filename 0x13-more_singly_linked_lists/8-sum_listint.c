#include "lists.h"

/**
 * sum_listint - returns sum of all data of alinked list.
 * @head: head node.
 * Return: sum || 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

	if (head == NULL)
		return (0);
}
