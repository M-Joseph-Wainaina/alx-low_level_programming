#include "lists.h"

/**
 * list_len - function that return the length of a list
 *
 * @h: pointer to the first element
 * Return: length of a list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
