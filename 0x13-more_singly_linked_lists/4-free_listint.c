#include "lists.h"

/**
 * free_listint - frees space reseved for listint_t
 * @head: address of first node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
