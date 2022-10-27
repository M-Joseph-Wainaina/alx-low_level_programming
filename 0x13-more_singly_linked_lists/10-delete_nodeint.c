#include "lists.h"

/**
 * delete_node - function to delete node at index
 * @head: first node
 * @index: index to be deleted
 * Return: 1 if succesful and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp_2;
	unsigned int i;

	if(*head)
	{
		temp = *head;
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
		       	return (1);
		}	       
		else 
		{
			for (i = 1; i < index; i++)
			{
				temp = temp->next;
			}
			temp_2 = temp->next;
			temp->next = temp->next->next;
			free(temp_2);

			return (1);
		}
	}
	return (-1);
}

