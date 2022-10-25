#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to the first node
 * @str: string to be copied
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->next = *head;
		temp->str = strdup(str);
		temp->len = _strlen(str);

		*head = temp;

		return (*head);
	}
	return (0);
}
unsigned int  _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}

	return (len);
}
