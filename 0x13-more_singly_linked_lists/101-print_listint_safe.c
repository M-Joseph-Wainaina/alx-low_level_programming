#include "lists.h"

/**
 * print_listint_safe - prints a list including ones with a loop
 * @head: pointer to first element
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_p, *fast_p;
	size_t n;

	slow_p = head;
	fast_p = head;
	n = 0;
	while(slow_p && fast_p && fast_p->next)
	{
		printf("[%p] %d\n", (void *)slow_p, slow_p->n);
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (fast_p == slow_p)
			break;
		n++;
	}
	return (n);
}

