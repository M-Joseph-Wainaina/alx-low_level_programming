#include "lists.h"

/**
 * free_listint - frees a list
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
	free(head);
}
