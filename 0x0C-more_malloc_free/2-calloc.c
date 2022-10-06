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

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 1; a < nmemb; a++)
	{
		p[a] = 0;
	}
	return (p);
}

