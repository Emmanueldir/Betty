#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds node at the end of a linked list
 * @head: last node
 * @str: string to be stored in the new node
 * Return: addressof new element || NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *last;

	if (head == NULL || str == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	if (n_node->str == (NULL))
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = n_node;

	return (n_node);
}
