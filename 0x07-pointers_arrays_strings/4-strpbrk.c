#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes
 * Return: void pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, c, d, e;

	a = 0;
	while (s[a])
	{
		a++;
	}
	b = 0;
	while (accept[b])
	{
		b++;
	}

	c = 0;
	d = 0;
	e = 1;

	for (; c < a; c++)
	{
		for (d = 0; d < b; d++)
		{
			if (accept[c] == s[d])
			{
				return (s + e);
			}
		}
		e++;
	}
	return (s);
}


