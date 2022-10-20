#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print elements of list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
