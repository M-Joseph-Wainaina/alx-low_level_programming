#include "lists.h"

/**
 * add_nodeint - function that adds a node at the begging of a list
 * @head: head to list
 * @n: number to be added
 * Return: adrress of new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
