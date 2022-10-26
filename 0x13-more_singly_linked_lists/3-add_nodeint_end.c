#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to first element
 * @n: integer to be added
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new_node;
			return (temp);
		}
	}
	return (NULL);
}
