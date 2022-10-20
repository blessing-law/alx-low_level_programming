#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - add node to beginning of list
 * @head: pointer to first node
 * @str: string for new node
 *
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int length = 0;

	n = malloc(sizeof(list_t));
	n->str = strdup(str);

	if (n == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}
	n->len = length;
	n->next = *head;
	(*head) = n;
	return (*head);
}
