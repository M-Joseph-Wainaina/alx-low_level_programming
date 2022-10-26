#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
		free(head);
	}
}
