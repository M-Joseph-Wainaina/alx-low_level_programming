#include "lists.h"

/**
 * sum_listint - return the sum of a list
 * @head: first element in a list
 * Return: the sum of all the data in a list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
