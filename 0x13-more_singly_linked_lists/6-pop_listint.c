#include "lists.h"

/**
 * pop_listint - function that deletes the head of a list
 * @head: pointer to first element
 * Return: heads node data or 0 if node is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head)
	{
		temp = *head;
		n = temp->n;
		*head = temp->next;
		return (n);
	}

	return (0);
}
