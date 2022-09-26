#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 *  to memory area dest
 *  @dest: destination
 *  @src: source
 *  @n: number of bytes to be copied
 *  Return: void pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
