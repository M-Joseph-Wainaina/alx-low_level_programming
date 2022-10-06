#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of concatenated string
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, len;

	len = 0;
	while(s1[len])
	{
		len++;
	}

	p = malloc(sizeof(char) * len);
	for (a = 0; a < len; a++)
	{
		p[a] = s1[a];
	}
	p = realloc(p, n);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < n; a++)
	{
		p[len + a] = s2[a];
	}
	
	return (p);
}
		
