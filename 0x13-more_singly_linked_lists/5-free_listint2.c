#include "lists.h"

/**
 * free_listint2 - frees a list and sets head  to NULL
 * @head: first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while(*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
