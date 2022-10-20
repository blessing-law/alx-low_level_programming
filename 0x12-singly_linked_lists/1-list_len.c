#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements
 * @h: pointer to first element
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
