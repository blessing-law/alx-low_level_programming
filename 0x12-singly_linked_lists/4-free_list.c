#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees the list_t
 * @head: pointer to first element
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
