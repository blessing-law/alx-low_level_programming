#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: beginning of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = NULL;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
