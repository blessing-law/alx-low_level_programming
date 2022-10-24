#include "lists.h"

/**
 * add_nodeint - add node to beginning of list
 * @head: address of first node
 * @n: data of new node
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *elem;

	elem = malloc(sizeof(listint_t));
	if (elem == NULL)
	{
		return (NULL);
	}
	elem->n = n;
	elem->next = *head;
	*head = elem;
	return (*head);
}
