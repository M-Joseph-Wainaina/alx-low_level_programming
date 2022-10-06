#include "main.h"

/**
 * _calloc: allocates memmory for an array
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;
	int l;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb; a++)
	{
		p[a] = 0;
	}
	return (p);
}

