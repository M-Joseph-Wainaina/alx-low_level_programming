#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: first node
 * @index: index of the node
 * Return: node at index or null if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *temp;

	temp = head;

	
	for (n = 0; n < index; n++)
	{
		temp = temp->next;
		if(!temp)
			return (NULL);
	}
	return (temp);
}
