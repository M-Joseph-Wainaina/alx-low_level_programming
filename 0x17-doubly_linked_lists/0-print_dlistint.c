#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the linked list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *temp;

	i = 0;
	temp = h;
	while (temp)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
