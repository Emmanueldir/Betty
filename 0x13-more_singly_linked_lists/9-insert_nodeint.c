#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a newnode at a given position
 * @head: pointer to head
 * @idx: index
 * @n: data
 * Return: address of newnode or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeN;
	listint_t *nodeP;
	unsigned int i;

	nodeN = malloc(sizeof(listint_t));
	nodeN->n = n;

	if (idx == 0)
	{
		nodeN->next = (*head);
		*head = nodeN;

		return (nodeN);
	}

	nodeP = *head;

	i = 0;
	while (i < idx - 1)
	{
		if (*head == NULL)
			return (NULL);
	}

	nodeN->next = nodeP->next;
	nodeP->next = nodeN;
	return (nodeN);
}
