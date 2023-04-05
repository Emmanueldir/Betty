#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *	of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to head of list.
 * Return: 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *test;
	int n;

	if (*head == NULL)
		return (0);

	test = (*head);
	(*head) = (*head)->next;
	n = test->n;

	free(test);

	return (n);
}
