#include "lists.h"

/**
 * add_dnodeint - function that adds a node at the begging of list
 * @head: head pointer
 * @n: integer to be added
 * Return: address of new element of NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	
	temp = malloc(sizeof(dlistint_t));

	if(*head == NULL)
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		temp->n = n;
		temp->next = (*head)->next;
		temp->prev = temp;
		*head = temp;
	}
	return (temp);
}


