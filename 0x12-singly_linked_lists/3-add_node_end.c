#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - add node to the end of list
 * @head: pointer to start of list
 * @str: content of node
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp = *head;
	unsigned int length = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}

	n->str = strdup(str);
	n->len = length;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = n;
	return (n);
}
