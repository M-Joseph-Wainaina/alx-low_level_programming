#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to head
 * @idx: index to insert node
 * Return: address of the new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	
	temp = *head;

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}
	
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (temp);
}


