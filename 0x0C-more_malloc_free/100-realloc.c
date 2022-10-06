#include "main.h"

/**
 * _realloc - reallocates memmory block using malloc and free
 * @old_size: size of original block
 * @new_size: size of new block
 * Return: pointer to new mem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a;
	char *pt;

	pt = ptr;
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(sizeof(char) * new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
	{	
		free(ptr);
	}
	else
	{
		for (a = 0; a < old_size; a++)
		{
			p[a] = pt[a];
		}	
		free(ptr);
	}
	return (p);
}	

