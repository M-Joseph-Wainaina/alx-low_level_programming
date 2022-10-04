#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: contents of the first string
 * @s2: contents of the second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d, len;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = 0;
	b = 0;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	len = a + b;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	d = 0;
	for (c = 0; c <= len; c++)
	{	if (c >= a)
		{
			p[c] = s2[d];
			d++;
			continue;
		}
		p[c] = s1[c];
	}
	p[len + 1] = '\0';

	return (p);
}
