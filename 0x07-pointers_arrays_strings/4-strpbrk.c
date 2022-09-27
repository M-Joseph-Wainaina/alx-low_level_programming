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
	e = 0;

	for (; c < a; c++)
	{
		for (d = 0; d < b; d++)
		{
			if (accept[d] == s[c])
			{
				if (s > 0)
				{
					e++;
					return (s + e);
				}
				return (s);
			}
		}
		e++;
	}
	return ('\0');
}


