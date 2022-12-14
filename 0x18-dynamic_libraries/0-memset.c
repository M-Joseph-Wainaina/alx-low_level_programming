#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: character to fill memory
 * @n: number of buffers to be filled
 * Return: void pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
