#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 * @head: address of first node
 * @n: content of list
 *
 * Return: address of new element or NULL
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *elem = *head;

	temp = malloc(sizeof(listint_t));

	if (temp != NULL)
	{
		temp->n = n;
		temp->next = NULL;
	}

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (elem->next != NULL)
	{
		elem = elem->next;
	}
	elem->next = temp;
	return (temp);

}
