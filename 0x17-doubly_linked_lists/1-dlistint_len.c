#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: list len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	temp = h;
	i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
