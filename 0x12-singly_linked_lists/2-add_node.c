#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of linked list
 * @head: pointer to pointer to the head of the list
 * @str: the string to be stored in the new node
 * Return: address of the new element || NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (head == NULL || str == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
