#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: head of the list
 * @str: string to be copied
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp_2;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = NULL;

		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			temp_2 = *head;
			while (temp_2->next)
			{
				temp_2 = temp_2->next;
			}
			temp_2->next = temp;
		}
		return (*head);
	}

	return (0);
}

/**
 * _strlen - return length of a string
 * @str: string to be counted
 * Return: string length
 */

unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}

	return (len);
}
