#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * *add_dnodeint - add node at the beginning of list
 * @head: first node of the list
 * @n: interger to be insteted in the list
 *
 * Return: address of new elements of NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *h;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev =  NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	newNode->next = h;
	if (h != NULL)
	{
		h->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
