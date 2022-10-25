#include "lists.h"

/**
 * pop_listint - delete first node in list
 * @head: address of first node
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *cur = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		*head = cur->next;
		return (cur->n);
		free(cur);
		cur = NULL;
	}

}
