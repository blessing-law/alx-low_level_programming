#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of index
 * @head: beginning of list
 * @index: value to be returned
 *
 * Return: address of nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i !=  index && head)
	{
		head = head->next;
		i++;
	}
	if (i == index && head)
	{
		return (head);
	}
	return (NULL);
}
