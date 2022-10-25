#include "lists.h"

/**
 * free_listint2 - frees space reseved for listint_t
 * @head: address of first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;

}
