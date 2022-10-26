#include "lists.h"

/**
 * free_listint - frees a list
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
